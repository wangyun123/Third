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

#ifndef QABSTRACTSERIES_H
#define QABSTRACTSERIES_H

#include <qchartglobal.h>
#include <QObject>
#include <QPen>

class QAbstractItemModel;

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class QAbstractSeriesPrivate;

class QTCOMMERCIALCHART_EXPORT QAbstractSeries : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_ENUMS(QSeriesType)

public:
    enum QSeriesType {
        SeriesTypeLine,
        SeriesTypeArea,
        SeriesTypeBar,
        SeriesTypeStackedBar,
        SeriesTypePercentBar,
        SeriesTypePie,
        SeriesTypeScatter,
        SeriesTypeSpline
    };

protected:
    QAbstractSeries(QAbstractSeriesPrivate &d, QObject *parent = 0);

public:
    ~QAbstractSeries();
    virtual QSeriesType type() const = 0;
    virtual bool setModel(QAbstractItemModel* model) = 0;
    QAbstractItemModel* model() const;
    void setName(const QString& name);
    QString name() const;

protected:
    QScopedPointer<QAbstractSeriesPrivate> d_ptr;
    friend class ChartDataSet;
    friend class ChartPresenter;
    friend class QLegendPrivate;
};

QTCOMMERCIALCHART_END_NAMESPACE

#endif
