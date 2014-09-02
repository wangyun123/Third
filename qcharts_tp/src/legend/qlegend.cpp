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

#include "qlegend.h"
#include "qlegend_p.h"
#include "qabstractseries.h"
#include "qabstractseries_p.h"
#include "qchart_p.h"

#include "legendmarker_p.h"
#include "qxyseries.h"
#include "qlineseries.h"
#include "qareaseries.h"
#include "qscatterseries.h"
#include "qsplineseries.h"
#include "qbarseries.h"
#include "qstackedbarseries.h"
#include "qpercentbarseries.h"
#include "qbarset.h"
#include "qpieseries.h"
#include "qpieseries_p.h"
#include "qpieslice.h"
#include "chartpresenter_p.h"
#include <QPainter>
#include <QPen>
#include <QTimer>

#include <QGraphicsSceneEvent>

QTCOMMERCIALCHART_BEGIN_NAMESPACE

/*!
    \class QLegend
    \brief part of QtCommercial chart API.
    \mainclass

    QLegend is a graphical object, whics displays legend of the chart. Legend state is updated by QChart, when
    series have been changed. By default, legend is drawn by QChart, but user can set a new parent to legend and
    handle the drawing manually.
    User isn't supposed to create or delete legend objects, but can reference it via QChart class.

    \image examples_percentbarchart_legend.png

    \sa QChart
*/

/*!
 \enum QLegend::Alignment

 This enum describes the possible position for legend inside chart.

 \value AlignmentTop
 \value AlignmentBottom
 \value AlignmentLeft
 \value AlignmentRight
 */

/*!
 \fn qreal QLegend::minWidth() const
 Returns minimum width of the legend
 */

/*!
 \fn qreal QLegend::minHeight() const
 Returns minimum height of the legend
 */

/*!
 Constructs the legend object and sets the parent to \a parent
 */

QLegend::QLegend(QChart *chart):QGraphicsWidget(chart),
d_ptr(new QLegendPrivate(chart->d_ptr->m_presenter,this))
{
    setZValue(ChartPresenter::LegendZValue);
    setFlags(QGraphicsItem::ItemClipsChildrenToShape);
    setEnabled(false); // By default legend is disabled
    setVisible(false);
    QObject::connect(chart->d_ptr->m_dataset,SIGNAL(seriesAdded(QAbstractSeries*,Domain*)),d_ptr.data(),SLOT(handleSeriesAdded(QAbstractSeries*,Domain*)));
    QObject::connect(chart->d_ptr->m_dataset,SIGNAL(seriesRemoved(QAbstractSeries*)),d_ptr.data(),SLOT(handleSeriesRemoved(QAbstractSeries*)));
}

/*!
    Destroys the legend object. Legend is always owned by a QChart, so an application should never call this.
*/
QLegend::~QLegend()
{
}

/*!
 Paints the legend to given \a painter. Paremeters \a option and \a widget arent used.
 */

void QLegend::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option)
    Q_UNUSED(widget)
    if(!d_ptr->m_backgroundVisible) return;

    painter->setOpacity(opacity());
    painter->setPen(d_ptr->m_pen);
    painter->setBrush(d_ptr->m_brush);
    painter->drawRect(boundingRect());
}

/*!
 Bounding rect of legend.
 */

QRectF QLegend::boundingRect() const
{
    return d_ptr->m_rect;
}

/*!
 Sets the \a brush of legend. Brush affects the background of legend.
 */
void QLegend::setBrush(const QBrush &brush)
{
    if (d_ptr->m_brush != brush) {
        d_ptr->m_brush = brush;
        update();
    }
}

/*!
 Returns the brush used by legend.
 */
QBrush QLegend::brush() const
{
    return d_ptr->m_brush;
}

/*!
 Sets the \a pen of legend. Pen affects the legend borders.
 */
void QLegend::setPen(const QPen &pen)
{
    if (d_ptr->m_pen != pen) {
        d_ptr->m_pen = pen;
        update();
    }
}

/*!
 Returns the pen used by legend
 */

QPen QLegend::pen() const
{
    return d_ptr->m_pen;
}

/*!
 Sets the \a alignment for legend. Legend tries to paint itself on the defined position in chart.
 \sa QLegend::Alignment
 */
void QLegend::setAlignment(QLegend::Alignments alignment)
{
    if(d_ptr->m_alignment!=alignment && d_ptr->m_attachedToChart) {
        d_ptr->m_alignment = alignment;
        d_ptr->updateLayout();
    }
}

/*!
 Returns the preferred layout for legend
 */
QLegend::Alignments QLegend::alignment() const
{
    return d_ptr->m_alignment;
}

/*!
 Detaches the legend from chart. Chart won't change layout of the legend.
 */
void QLegend::detachFromChart()
{
    d_ptr->m_attachedToChart = false;
}

/*!
 Attaches the legend to chart. Chart may change layout of the legend.
 */
void QLegend::attachToChart()
{
    d_ptr->m_attachedToChart = true;
}

/*!
 Returns true, if legend is attached to chart.
 */
bool QLegend::isAttachedToChart()
{
    return d_ptr->m_attachedToChart;
}

/*!
    Sets the legend's scrolling offset to value defined by \a point.
*/
void QLegend::setOffset(const QPointF& point)
{
    d_ptr->setOffset(point.x(),point.y());
}

/*!
    Returns the legend's scrolling offset.
*/
QPointF QLegend::offset() const
{
    return QPointF(d_ptr->m_offsetX,d_ptr->m_offsetY);
}

/*!
 Sets the visibility of legend background to \a visible
 */
void QLegend::setBackgroundVisible(bool visible)
{
    if(d_ptr->m_backgroundVisible!=visible)
    {
        d_ptr->m_backgroundVisible=visible;
        update();
    }
}

/*!
 Returns the visibility of legend background
 */
bool QLegend::isBackgroundVisible() const
{
    return d_ptr->m_backgroundVisible;
}

/*!
 \internal \a event see QGraphicsWidget for details
 */
void QLegend::resizeEvent(QGraphicsSceneResizeEvent *event)
{
    const QRectF& rect = QRectF(QPoint(0,0),event->newSize());
    QGraphicsWidget::resizeEvent(event);
    if(d_ptr->m_rect != rect) {
        d_ptr->m_rect = rect;
        d_ptr->updateLayout();
    }
}

/*!
 \internal \a event see QGraphicsWidget for details
 */
void QLegend::hideEvent(QHideEvent *event)
{
    QGraphicsWidget::hideEvent(event);
    setEnabled(false);
    d_ptr->updateLayout();
}

/*!
 \internal \a event see QGraphicsWidget for details
 */
void QLegend::showEvent(QShowEvent *event)
{
    QGraphicsWidget::showEvent(event);
    setEnabled(true);
    d_ptr->updateLayout();
}

qreal QLegend::minWidth() const
{
    return d_ptr->m_minWidth;
}

qreal QLegend::minHeight() const
{
    return d_ptr->m_minHeight;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

QLegendPrivate::QLegendPrivate(ChartPresenter* presenter,QLegend *q):
q_ptr(q),
m_presenter(presenter),
m_markers(new QGraphicsItemGroup(q)),
m_alignment(QLegend::AlignmentTop),
m_offsetX(0),
m_offsetY(0),
m_minWidth(0),
m_minHeight(0),
m_width(0),
m_height(0),
m_attachedToChart(true),
m_backgroundVisible(false)
{

}

QLegendPrivate::~QLegendPrivate()
{

}

void QLegendPrivate::setOffset(qreal x, qreal y)
{

    switch(m_alignment) {

        case QLegend::AlignmentTop:
        case QLegend::AlignmentBottom: {
            if(m_width<=m_rect.width()) return;

            if (x != m_offsetX) {
                m_offsetX = qBound(qreal(0), x, m_width - m_rect.width());
                m_markers->setPos(-m_offsetX,m_rect.top());
            }
            break;
        }
        case QLegend::AlignmentLeft:
        case QLegend::AlignmentRight: {

            if(m_height<=m_rect.height()) return;

            if (y != m_offsetY) {
                m_offsetY = qBound(qreal(0), y, m_height - m_rect.height());
                m_markers->setPos(m_rect.left(),-m_offsetY);
            }
            break;
        }
    }
}


void QLegendPrivate::updateLayout()
{
    m_offsetX=0;
    QList<QGraphicsItem *> items = m_markers->childItems();

    if(items.isEmpty()) return;

    m_minWidth=0;
    m_minHeight=0;

    switch(m_alignment) {

        case QLegend::AlignmentTop:
        case QLegend::AlignmentBottom: {
            QPointF point = m_rect.topLeft();
            m_width = 0;
            foreach (QGraphicsItem *item, items) {
                item->setPos(point.x(),m_rect.height()/2 -item->boundingRect().height()/2);
                const QRectF& rect = item->boundingRect();
                qreal w = rect.width();
                m_minWidth=qMax(m_minWidth,w);
                m_minHeight=qMax(m_minHeight,rect.height());
                m_width+=w;
                point.setX(point.x() + w);
            }
            if(m_width<m_rect.width()) {
                m_markers->setPos(m_rect.width()/2-m_width/2,m_rect.top());
            }
            else {
                m_markers->setPos(m_rect.topLeft());
            }
            m_height=m_minHeight;
        }
        break;
        case QLegend::AlignmentLeft:
        case QLegend::AlignmentRight: {
            QPointF point = m_rect.topLeft();
            m_height = 0;
            foreach (QGraphicsItem *item, items) {
                item->setPos(point);
                const QRectF& rect = item->boundingRect();
                qreal h = rect.height();
                m_minWidth=qMax(m_minWidth,rect.width());
                m_minHeight=qMax(m_minHeight,h);
                m_height+=h;
                point.setY(point.y() + h);
            }
            if(m_height<m_rect.height()) {
                m_markers->setPos(m_rect.left(),m_rect.height()/2-m_height/2);
            }
            else {
                m_markers->setPos(m_rect.topLeft());
            }
            m_width=m_minWidth;
        }
        break;
    }

    m_presenter->updateLayout();
}

void QLegendPrivate::handleSeriesAdded(QAbstractSeries *series, Domain *domain)
{
    Q_UNUSED(domain)

    QList<LegendMarker*> markers = series->d_ptr->createLegendMarker(q_ptr);
    foreach(LegendMarker* marker , markers)
        m_markers->addToGroup(marker);

    if(series->type() == QAbstractSeries::SeriesTypePie)
    {
        QPieSeries *pieSeries = static_cast<QPieSeries *>(series);
        QPieSeriesPrivate *d = QPieSeriesPrivate::seriesData(*pieSeries);
        QObject::connect(d, SIGNAL(added(QList<QPieSlice*>)), this, SLOT(handleUpdatePieSeries()));
        QObject::connect(d, SIGNAL(removed(QList<QPieSlice*>)), this, SLOT(handleUpdatePieSeries()));
    }

    updateLayout();
}

void QLegendPrivate::handleSeriesRemoved(QAbstractSeries *series)
{

    QList<QGraphicsItem *> items = m_markers->childItems();

    foreach (QGraphicsItem *markers, items) {
        LegendMarker *marker = static_cast<LegendMarker*>(markers);
        if (marker->series() == series) {
            delete marker;
        }
    }

    if(series->type() == QAbstractSeries::SeriesTypePie)
    {
        QPieSeries *pieSeries = static_cast<QPieSeries *>(series);
        QPieSeriesPrivate *d = QPieSeriesPrivate::seriesData(*pieSeries);
        QObject::disconnect(d, SIGNAL(added(QList<QPieSlice*>)), this, SLOT(handleUpdatePieSeries()));
        QObject::disconnect(d, SIGNAL(removed(QList<QPieSlice*>)), this, SLOT(handleUpdatePieSeries()));
    }

    updateLayout();
}

void QLegendPrivate::handleUpdatePieSeries()
{
    //TODO: reimplement to be optimal
    QPieSeriesPrivate* d = qobject_cast<QPieSeriesPrivate *> (sender());
    Q_ASSERT(d->q_func());
    handleSeriesRemoved(d->q_func());
    handleSeriesAdded(d->q_func(), 0);
}

#include "moc_qlegend.cpp"
#include "moc_qlegend_p.cpp"

QTCOMMERCIALCHART_END_NAMESPACE
