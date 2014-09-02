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

#include "qxyseries.h"
#include "qxyseries_p.h"
#include "domain_p.h"
#include "legendmarker_p.h"
#include <QAbstractItemModel>

QTCOMMERCIALCHART_BEGIN_NAMESPACE

/*!
    \class QXYSeries
    \brief The QXYSeries class is a base class for line, spline and scatter series.
*/

/*!
   \fn QPen QXYSeries::pen() const
   \brief  Returns pen used to draw points for series.
    \sa setPen()
*/

/*!
   \fn QBrush QXYSeries::brush() const
   \brief  Returns brush used to draw points for series.
    \sa setBrush()
*/

/*!
    \fn void QXYSeries::clicked(const QPointF& point)
    \brief Signal is emitted when user clicks the \a point on chart.
*/

/*!
    \fn void QXYSeries::selected()

    The signal is emitted if the user selects/deselects the XY series. The logic for maintaining selections should be
    implemented by the user of QXYSeries API.
*/

/*!
    \fn void QXYSeriesPrivate::pointReplaced(int index)
    \brief \internal \a index
*/

/*!
    \fn void QXYSeriesPrivate::pointAdded(int index)
    \brief \internal \a index
*/

/*!
    \fn void QXYSeriesPrivate::pointRemoved(int index)
    \brief \internal \a index
*/

/*!
    \fn void QXYSeriesPrivate::updated()
    \brief \internal
*/

/*!
    \internal

    Constructs empty series object which is a child of \a parent.
    When series object is added to QChartView or QChart instance ownerships is transferred.
*/
QXYSeries::QXYSeries(QXYSeriesPrivate &d,QObject *parent) : QAbstractSeries(d, parent)
{

}
/*!
    Destroys the object. Series added to QChartView or QChart instances are owned by those,
    and are deleted when mentioned object are destroyed.
*/
QXYSeries::~QXYSeries()
{
}

/*!
    Adds data point \a x \a y to the series. Points are connected with lines on the chart.
 */
void QXYSeries::append(qreal x,qreal y)
{
    Q_D(QXYSeries);
    Q_ASSERT(d->m_x.size() == d->m_y.size());
    d->m_x<<x;
    d->m_y<<y;
    emit d->pointAdded(d->m_x.size()-1);
}

/*!
   This is an overloaded function.
   Adds data \a point to the series. Points are connected with lines on the chart.
 */
void QXYSeries::append(const QPointF &point)
{
    append(point.x(),point.y());
}

/*!
   This is an overloaded function.
   Adds list of data \a points to the series. Points are connected with lines on the chart.
 */
void QXYSeries::append(const QList<QPointF> points)
{
    foreach(const QPointF& point , points) {
        append(point.x(),point.y());
    }
}

/*!
  Modifies \a y value for given \a x a value.
*/
void QXYSeries::replace(qreal x,qreal y)
{
    Q_D(QXYSeries);
    int index = d->m_x.indexOf(x);
    d->m_x[index] = x;
    d->m_y[index] = y;
    emit d->pointReplaced(index);
}

/*!
  This is an overloaded function.
  Replaces current y value of for given \a point x value with \a point y value.
*/
void QXYSeries::replace(const QPointF &point)
{
    replace(point.x(),point.y());
}

/*!
  Removes first \a x value and related y value.
*/
void QXYSeries::remove(qreal x)
{
    Q_D(QXYSeries);
    int index = d->m_x.indexOf(x);

    if (index == -1) return;

    d->m_x.remove(index);
    d->m_y.remove(index);

    emit d->pointRemoved(index);
}

/*!
  Removes current \a x and \a y value.
*/
void QXYSeries::remove(qreal x,qreal y)
{
    Q_D(QXYSeries);
    int index =-1;
    do {
        index = d->m_x.indexOf(x,index+1);
    } while (index !=-1 && d->m_y.at(index)!=y);

    if (index==-1) return;

    d->m_x.remove(index);
    d->m_y.remove(index);
    emit d->pointRemoved(index);
}

/*!
  Removes current \a point x value. Note \a point y value is ignored.
*/
void QXYSeries::remove(const QPointF &point)
{
    remove(point.x(),point.y());
}

/*!
   Removes all data points from the series.
*/
void QXYSeries::removeAll()
{
    Q_D(QXYSeries);
    d->m_x.clear();
    d->m_y.clear();
}

/*!
    \internal \a pos
*/
qreal QXYSeries::x(int pos) const
{
    Q_D(const QXYSeries);
    if (d->m_model) {
        if (d->m_mapOrientation == Qt::Vertical)
            // consecutive data is read from model's column
            return d->m_model->data(d->m_model->index(pos, d->m_mapX), Qt::DisplayRole).toDouble();
        else
            // consecutive data is read from model's row
            return d->m_model->data(d->m_model->index(d->m_mapX, pos), Qt::DisplayRole).toDouble();
    } else {
        // model is not specified, return the data from series' internal data store
        return d->m_x.at(pos);
    }
}

/*!
    \internal \a pos
*/
qreal QXYSeries::y(int pos) const
{
    Q_D(const QXYSeries);
    if (d->m_model) {
        if (d->m_mapOrientation == Qt::Vertical)
            // consecutive data is read from model's column
            return d->m_model->data(d->m_model->index(pos, d->m_mapY), Qt::DisplayRole).toDouble();
        else
            // consecutive data is read from model's row
            return d->m_model->data(d->m_model->index(d->m_mapY, pos), Qt::DisplayRole).toDouble();
    } else {
        // model is not specified, return the data from series' internal data store
        return d->m_y.at(pos);
    }
}

/*!
    Returns number of data points within series.
*/
int QXYSeries::count() const
{
    Q_D(const QXYSeries);

    Q_ASSERT(d->m_x.size() == d->m_y.size());

    if (d->m_model) {
        if (d->m_mapOrientation == Qt::Vertical) {
            // data is in a column. Return the number of mapped items
            return d->m_model->rowCount();
        } else {
            // data is in a row. Return the number of mapped items
            return d->m_model->columnCount();
        }
    }

    // model is not specified, return the number of points in the series internal data store
    return d->m_x.size();
}

/*!
    Returns the data points of the series.
*/
QList<QPointF> QXYSeries::data()
{
    Q_D(QXYSeries);
    QList<QPointF> data;
    for (int i(0); i < d->m_x.count() && i < d->m_y.count(); i++)
        data.append(QPointF(d->m_x.at(i), d->m_y.at(i)));
    return data;
}


/*!
    Sets \a pen used for drawing points on the chart. If the pen is not defined, the
    pen from chart theme is used.
    \sa QChart::setTheme()
*/
void QXYSeries::setPen(const QPen &pen)
{
    Q_D(QXYSeries);
    if (d->m_pen!=pen) {
        d->m_pen = pen;
        emit d->updated();
    }
}

QPen QXYSeries::pen() const
{
    Q_D(const QXYSeries);
    return d->m_pen;
}

/*!
    Sets \a brush used for drawing points on the chart. If the brush is not defined, brush
    from chart theme setting is used.
    \sa QChart::setTheme()
*/
void QXYSeries::setBrush(const QBrush &brush)
{
    Q_D(QXYSeries);
    if (d->m_brush!=brush) {
        d->m_brush = brush;
        emit d->updated();
    }
}

QBrush QXYSeries::brush() const
{
    Q_D(const QXYSeries);
    return d->m_brush;
}


/*!
    Sets if data points are \a visible and should be drawn on line.
*/
void QXYSeries::setPointsVisible(bool visible)
{
    Q_D(QXYSeries);
    if (d->m_pointsVisible != visible){
        d->m_pointsVisible = visible;
        emit d->updated();
    }
}

/*!
    Returns true if drawing the data points of the series is enabled.
*/
bool QXYSeries::pointsVisible() const
{
    Q_D(const QXYSeries);
    return d->m_pointsVisible;
}


/*!
    Stream operator for adding a data \a point to the series.
    \sa append()
*/
QXYSeries& QXYSeries::operator<< (const QPointF &point)
{
    append(point);
    return *this;
}


/*!
    Stream operator for adding a list of \a points to the series.
    \sa append()
*/

QXYSeries& QXYSeries::operator<< (const QList<QPointF> points)
{
    append(points);
    return *this;
}

/*!
   \internal
 */
void QXYSeries::modelUpdated(QModelIndex topLeft, QModelIndex bottomRight)
{
    Q_UNUSED(bottomRight)
    Q_D(QXYSeries);
    if (d->m_mapOrientation == Qt::Vertical) {
        if (topLeft.column() == d->m_mapX || topLeft.column() == d->m_mapY)
            emit d->pointReplaced(topLeft.row());
    } else {
        if (topLeft.row() == d->m_mapX || topLeft.row() == d->m_mapY)
            emit d->pointReplaced(topLeft.column());
    }
}

/*!
     \fn bool QXYSeries::setModel(QAbstractItemModel *model)
     Sets the \a model to be used as a data source
     \sa setModelMapping()
 */
bool QXYSeries::setModel(QAbstractItemModel *model)
{
    Q_D(QXYSeries);
    // disconnect signals from old model
    if (d->m_model) {
        QObject::disconnect(d->m_model, 0, this, 0);
        d->m_mapX = -1;
        d->m_mapY = -1;
        d->m_mapOrientation = Qt::Vertical;
    }

    // set new model
    if (model) {
        d->m_model = model;
        return true;
    } else {
        d->m_model = 0;
        return false;
    }
}

/*!
     Sets the \a modelX to be used as a data source for x coordinate and \a modelY to be used
     as a data source for y coordinate. The \a orientation parameter specifies whether the data
     is in columns or in rows.
     \sa setModel()
 */
void QXYSeries::setModelMapping(int modelX, int modelY, Qt::Orientation orientation)
{
    Q_D(QXYSeries);
    if (d->m_model == 0)
        return;
    d->m_mapX = modelX;
    d->m_mapY = modelY;
    d->m_mapOrientation = orientation;
    connect(d->m_model,SIGNAL(dataChanged(QModelIndex,QModelIndex)), this, SLOT(modelUpdated(QModelIndex,QModelIndex)));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


QXYSeriesPrivate::QXYSeriesPrivate(QXYSeries *q) : QAbstractSeriesPrivate(q),
    m_mapX(-1),
    m_mapY(-1),
    m_mapOrientation( Qt::Vertical),
    m_pointsVisible(false)
{
}

void QXYSeriesPrivate::scaleDomain(Domain& domain)
{
    qreal minX(domain.minX());
    qreal minY(domain.minY());
    qreal maxX(domain.maxX());
    qreal maxY(domain.maxY());
    int tickXCount(domain.tickXCount());
    int tickYCount(domain.tickYCount());

    Q_Q(QXYSeries);
    for (int i = 0; i < q->count(); i++)
    {
        qreal x = q->x(i);
        qreal y = q->y(i);
        minX = qMin(minX, x);
        minY = qMin(minY, y);
        maxX = qMax(maxX, x);
        maxY = qMax(maxY, y);
    }

    domain.setRangeX(minX,maxX,tickXCount);
    domain.setRangeY(minY,maxY,tickYCount);
}

QList<LegendMarker*> QXYSeriesPrivate::createLegendMarker(QLegend* legend)
{
    Q_Q(QXYSeries);
    QList<LegendMarker*> list;
    return list << new XYLegendMarker(q,legend);
}

#include "moc_qxyseries.cpp"
#include "moc_qxyseries_p.cpp"

QTCOMMERCIALCHART_END_NAMESPACE
