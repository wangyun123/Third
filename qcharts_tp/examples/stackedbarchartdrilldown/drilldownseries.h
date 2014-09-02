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

#ifndef DRILLDOWNSERIES_H
#define DRILLDOWNSERIES_H

#include <QStackedBarSeries>
#include <QMap>

QTCOMMERCIALCHART_USE_NAMESPACE

//! [1]
class DrilldownBarSeries : public QStackedBarSeries
{
    Q_OBJECT
public:
    DrilldownBarSeries(QStringList categories, QObject *parent = 0);

    void mapDrilldownSeries(QString category, DrilldownBarSeries* drilldownSeries);

    DrilldownBarSeries* drilldownSeries(QString category);

private:
    QMap<QString, DrilldownBarSeries*> mDrilldownSeries;
};
//! [1]

#endif // DRILLDOWNSERIES_H
