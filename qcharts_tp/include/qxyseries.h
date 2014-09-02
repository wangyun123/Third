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

#ifndef QXYSERIES_H
#define QXYSERIES_H

#include <qchartglobal.h>
#include <qabstractseries.h>
#include <QPen>
#include <QBrush>

class QModelIndex;

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class QXYSeriesPrivate;

class QTCOMMERCIALCHART_EXPORT QXYSeries : public QAbstractSeries
{
    Q_OBJECT
protected:
    explicit QXYSeries(QXYSeriesPrivate &d,QObject *parent = 0);
    ~QXYSeries();

public:
    void append(qreal x, qreal y);
    void append(const QPointF &point);
    void append(const QList<QPointF> points);
    void replace(qreal x,qreal y);
    void replace(const QPointF &point);
    void remove(qreal x);
    void remove(qreal x, qreal y);
    void remove(const QPointF &point);
    void removeAll();

    int count() const;
    qreal x(int pos) const;
    qreal y(int pos) const;
    QList<QPointF> data();

    QXYSeries& operator << (const QPointF &point);
    QXYSeries& operator << (const QList<QPointF> points);

    void setPen(const QPen &pen);
    QPen pen() const;

    void setBrush(const QBrush &brush);
    QBrush brush() const;

    void setPointsVisible(bool visible = true);
    bool pointsVisible() const;

    bool setModel(QAbstractItemModel *model);
    virtual void setModelMapping(int modelX, int modelY, Qt::Orientation orientation = Qt::Vertical);

private Q_SLOTS:
    void modelUpdated(QModelIndex topLeft, QModelIndex bottomRight);

Q_SIGNALS:
    void clicked(const QPointF &point);
    void selected();

private:
    Q_DECLARE_PRIVATE(QXYSeries);
    Q_DISABLE_COPY(QXYSeries);
    friend class XYLegendMarker;
    friend class XYChartItem;
};

QTCOMMERCIALCHART_END_NAMESPACE

#endif
