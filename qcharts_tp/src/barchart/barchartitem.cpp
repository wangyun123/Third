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

#include "barchartitem_p.h"
#include "bar_p.h"
#include "barlabel_p.h"
#include "qbarset.h"
#include "qbarset_p.h"
#include "qbarseries.h"
#include "qbarseries_p.h"
#include "qchart.h"
#include "chartpresenter_p.h"
#include "chartanimator_p.h"
#include "chartdataset_p.h"
#include <QPainter>

QTCOMMERCIALCHART_BEGIN_NAMESPACE

BarChartItem::BarChartItem(QBarSeries *series, ChartPresenter *presenter) :
    ChartItem(presenter),
    m_layoutSet(false),
    m_series(series)
{
    setFlag(ItemClipsChildrenToShape);
    connect(series->d_func(), SIGNAL(updatedBars()), this, SLOT(handleLayoutChanged()));
    connect(series->d_func(), SIGNAL(restructuredBars()), this, SLOT(handleModelChanged()));
    setZValue(ChartPresenter::BarSeriesZValue);
    dataChanged();
}

BarChartItem::~BarChartItem()
{
}

void BarChartItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(painter);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

QRectF BarChartItem::boundingRect() const
{
    return m_rect;
}

void BarChartItem::dataChanged()
{
    foreach(QGraphicsItem *item, childItems()) {
        delete item;
    }

    m_bars.clear();
    m_labels.clear();
    m_layout.clear();

    // Create new graphic items for bars
    for (int c = 0; c < m_series->categoryCount(); c++) {
        QString category = m_series->d_func()->categoryName(c);
        for (int s = 0; s < m_series->barsetCount(); s++) {
            QBarSet *set = m_series->d_func()->barsetAt(s);
            Bar *bar = new Bar(set,category,this);
            m_bars.append(bar);
            connect(bar, SIGNAL(clicked(QString)), set, SIGNAL(clicked(QString)));
            connect(bar, SIGNAL(clicked(QBarSet*,QString)), m_series, SIGNAL(clicked(QBarSet*,QString)));
            connect(bar, SIGNAL(hovered(bool)), set, SIGNAL(hovered(bool)));
            connect(bar, SIGNAL(hovered(QBarSet*,bool)), m_series, SIGNAL(hovered(QBarSet*,bool)));
            m_layout.append(QRectF(0, 0, 0, 0));
        }
    }

    // Create labels
    for (int category = 0; category < m_series->categoryCount(); category++) {
        for (int s = 0; s < m_series->barsetCount(); s++) {
            QBarSet *set = m_series->d_func()->barsetAt(s);
            BarLabel *value = new BarLabel(*set, this);
            m_labels.append(value);
            connect(set->d_ptr.data(),SIGNAL(labelsVisibleChanged(bool)),value,SLOT(labelsVisibleChanged(bool)));
        }
    }
}

QVector<QRectF> BarChartItem::calculateLayout()
{
    QVector<QRectF> layout;

    // Use temporary qreals for accurancy
    qreal categoryCount = m_series->categoryCount();
    qreal setCount = m_series->barsetCount();

    // Domain:
    qreal width = geometry().width();
    qreal height = geometry().height();
    qreal range = m_domainMaxY - m_domainMinY;
    qreal scale = (height / range);
    qreal categoryWidth = width / categoryCount;
    qreal barWidth = categoryWidth / (setCount+1);

    int itemIndex(0);
    for (int category = 0; category < categoryCount; category++) {
        qreal xPos = categoryWidth * category + barWidth / 2 + geometry().topLeft().x();
        qreal yPos = height + scale * m_domainMinY + geometry().topLeft().y();
        for (int set = 0; set < setCount; set++) {
            QBarSet* barSet = m_series->d_func()->barsetAt(set);

            qreal barHeight = barSet->at(category) * scale;
            Bar* bar = m_bars.at(itemIndex);

            QRectF rect(xPos, yPos - barHeight, barWidth, barHeight);
            layout.append(rect);
            bar->setPen(barSet->pen());
            bar->setBrush(barSet->brush());

            BarLabel* label = m_labels.at(itemIndex);

            if (!qFuzzyIsNull(barSet->at(category))) {
                label->setText(QString::number(barSet->at(category)));
            } else {
                label->setText(QString(""));
            }

            label->setPos(xPos + (rect.width()/2 - label->boundingRect().width()/2)
                          ,yPos - barHeight/2 - label->boundingRect().height()/2);
            label->setFont(barSet->labelFont());

            itemIndex++;
            xPos += barWidth;
        }
    }
    return layout;
}

void BarChartItem::applyLayout(const QVector<QRectF> &layout)
{
    if (animator())
        animator()->updateLayout(this, m_layout, layout);
    else
        setLayout(layout);
}

void BarChartItem::setLayout(const QVector<QRectF> &layout)
{
    m_layout = layout;

    for (int i=0; i < m_bars.count(); i++)
        m_bars.at(i)->setRect(layout.at(i));

    update();
}
//handlers

void BarChartItem::handleModelChanged()
{
    dataChanged();
}

void BarChartItem::handleDomainChanged(qreal minX, qreal maxX, qreal minY, qreal maxY)
{
    m_domainMinX = minX;
    m_domainMaxX = maxX;
    m_domainMinY = minY;
    m_domainMaxY = maxY;
    handleLayoutChanged();
}

void BarChartItem::handleGeometryChanged(const QRectF &rect)
{
    prepareGeometryChange();
    m_rect = rect;
    handleLayoutChanged();
    m_layoutSet = true;
}

void BarChartItem::handleLayoutChanged()
{
    if ((m_rect.width() <= 0) || (m_rect.height() <= 0)) {
        // rect size zero.
        return;
    }
    QVector<QRectF> layout = calculateLayout();
    applyLayout(layout);
    update();
}

#include "moc_barchartitem_p.cpp"

QTCOMMERCIALCHART_END_NAMESPACE
