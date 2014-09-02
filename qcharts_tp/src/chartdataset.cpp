/****************************************************************************
**
** Copyright (C) 2012 Digia Plc
** All rights reserved.
** For any questions to Digia, please use contact form at http://qt.digia.com
**
** This file is part of the Qt Commercial Charts Add-on.
**
** $QT_BEGIN_LICENSE$
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.digia.com
** $QT_END_LICENSE$
**
****************************************************************************/

#include "chartdataset_p.h"
#include "qaxis.h"
#include "qaxis_p.h"
#include "qabstractseries_p.h"
#include "qbarseries.h"
#include "qstackedbarseries.h"
#include "qpercentbarseries.h"
#include "qpieseries.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

ChartDataSet::ChartDataSet(QObject *parent):QObject(parent),
    m_axisX(new QAxis(this)),
    m_axisY(new QAxis(this)),
    m_domainIndex(0),
    m_axisXInitialized(false)
{
}

ChartDataSet::~ChartDataSet()
{
}

void ChartDataSet::addSeries(QAbstractSeries* series, QAxis *axisY)
{
    if(axisY==0) axisY = m_axisY;

    QAxis* axis = m_seriesAxisMap.value(series);

    if(axis) {
        qWarning() << "Can not add series. Series already on the chart";
        return;
    }

    series->setParent(this); // take ownership
    axisY->setParent(this); // take ownership

    Domain* domain = m_axisDomainMap.value(axisY);

    if(!domain) {
        domain = new Domain(axisY);
        QObject::connect(axisY->d_ptr.data(),SIGNAL(changed(qreal,qreal,int,bool)),domain,SLOT(handleAxisYChanged(qreal,qreal,int,bool)));
        QObject::connect(axisX()->d_ptr.data(),SIGNAL(changed(qreal,qreal,int,bool)),domain,SLOT(handleAxisXChanged(qreal,qreal,int,bool)));
        QObject::connect(domain,SIGNAL(rangeYChanged(qreal,qreal,int)),axisY->d_ptr.data(),SLOT(handleAxisRangeChanged(qreal,qreal,int)));
        QObject::connect(domain,SIGNAL(rangeXChanged(qreal,qreal,int)),axisX()->d_ptr.data(),SLOT(handleAxisRangeChanged(qreal,qreal,int)));
        //initialize
        m_axisDomainMap.insert(axisY,domain);
        emit axisAdded(axisY,domain);
    }

    if(!m_axisXInitialized){
       emit axisAdded(axisX(),domain);
       m_axisXInitialized=true;
    }

    series->d_ptr->scaleDomain(*domain);

    if(series->type() == QAbstractSeries::SeriesTypeBar
            || series->type() == QAbstractSeries::SeriesTypeStackedBar
            || series->type() == QAbstractSeries::SeriesTypePercentBar) {
        QBarSeries* barSeries = static_cast<QBarSeries*>(series);
        setupCategories(barSeries);
    }

    if (series->type()== QAbstractSeries::SeriesTypePie && m_seriesAxisMap.count() == 0) {
        axisX()->hide();
        this->axisY()->hide();
    }

    m_seriesAxisMap.insert(series,axisY);

    QMapIterator<int, QAbstractSeries*> i(m_indexSeriesMap);

    int key=0;
    while (i.hasNext()) {
        i.next();
        if(i.key()!=key) {
            break;
        }
        key++;
    }

    m_indexSeriesMap.insert(key,series);

    emit seriesAdded(series,domain);

}

QAxis* ChartDataSet::removeSeries(QAbstractSeries* series)
{
    QAxis* axis = m_seriesAxisMap.value(series);

    if(!axis){
        qWarning()<<"Can not remove series. Series not found on the chart.";
        return 0;
    }

    emit seriesRemoved(series);

    m_seriesAxisMap.remove(series);
    int key = seriesIndex(series);
    Q_ASSERT(key!=-1);

    m_indexSeriesMap.remove(key);
    series->setParent(0);

    QList<QAxis*> axes =  m_seriesAxisMap.values();

    int i = axes.indexOf(axis);

    if(i==-1){
        Domain* domain = m_axisDomainMap.take(axis);
        emit axisRemoved(axis);
        if(axis!=axisY()){
            axis->setParent(0);
        }
        delete domain;
    }

    if(m_seriesAxisMap.values().size()==0)
    {
        m_axisXInitialized=false;
        emit axisRemoved(axisX());
    }

    return axis;
}

void ChartDataSet::removeAllSeries()
{
    QList<QAbstractSeries*> series =  m_seriesAxisMap.keys();
    QList<QAxis*> axes;
    foreach(QAbstractSeries *s , series) {
        QAxis* axis  = removeSeries(s);
        if(axis==axisY()) continue;
        int i = axes.indexOf(axis);
        if(i==-1){
            axes<<axis;
        }
    }

    Q_ASSERT(m_seriesAxisMap.count()==0);
    Q_ASSERT(m_axisDomainMap.count()==0);

    qDeleteAll(series);
    qDeleteAll(axes);
}

void ChartDataSet::setupCategories(QBarSeries* series)
{
   QAxisCategories* categories = axisX()->categories();
   categories->clear();
   categories->insert(series->categories());
}

void ChartDataSet::zoomInDomain(const QRectF& rect, const QSizeF& size)
{
    QMapIterator<QAxis*, Domain*> i(m_axisDomainMap);
    while (i.hasNext()) {
        i.next();
        i.value()->zoomIn(rect,size);
    }
}

void ChartDataSet::zoomOutDomain(const QRectF& rect, const QSizeF& size)
{
    QMapIterator<QAxis*, Domain*> i(m_axisDomainMap);
    while (i.hasNext()) {
        i.next();
        i.value()->zoomOut(rect,size);
    }
}

int ChartDataSet::seriesCount(QAbstractSeries::QSeriesType type)
{
    int count=0;
    QMapIterator<QAbstractSeries*, QAxis*> i(m_seriesAxisMap);
    while (i.hasNext()) {
           i.next();
           if(i.key()->type()==type) count++;
    }
    return count;
}

int ChartDataSet::seriesIndex(QAbstractSeries *series)
{
    QMapIterator<int, QAbstractSeries*> i(m_indexSeriesMap);
    while (i.hasNext()) {
        i.next();
        if (i.value() == series)
            return i.key();
    }
    return -1;
}

QAxis* ChartDataSet::axisY(QAbstractSeries *series) const
{
    if(series == 0) return m_axisY;
    return m_seriesAxisMap.value(series);
}

Domain* ChartDataSet::domain(QAbstractSeries *series) const
{
	QAxis* axis = m_seriesAxisMap.value(series);
	if(axis){
		return m_axisDomainMap.value(axis);
	}else
		return 0;
}

Domain* ChartDataSet::domain(QAxis* axis) const
{
    if(!axis || axis==axisX()) {
        return  m_axisDomainMap.value(axisY());
    }
    else {
        return m_axisDomainMap.value(axis);
    }
}

void ChartDataSet::scrollDomain(int dx,int dy,const QSizeF& size)
{
	 QMapIterator<QAxis*, Domain*> i( m_axisDomainMap);
	 	while (i.hasNext()) {
	        i.next();
	        i.value()->move(dx,dy,size);
	    }
}

#include "moc_chartdataset_p.cpp"

QTCOMMERCIALCHART_END_NAMESPACE
