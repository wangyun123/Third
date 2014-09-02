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

#ifndef DECLARATIVEPIESERIES_H
#define DECLARATIVEPIESERIES_H

#include "qchartglobal.h"
#include "qpieslice.h"
#include "qpieseries.h"
#include <QDeclarativeItem>

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class QChart;

class DeclarativePieSeries : public QPieSeries, public QDeclarativeParserStatus
{
    Q_OBJECT
    Q_INTERFACES(QDeclarativeParserStatus)
    Q_PROPERTY(QDeclarativeListProperty<QPieSlice> slices READ slices)

public:
    explicit DeclarativePieSeries(QObject *parent = 0);
    QDeclarativeListProperty<QPieSlice> slices();

public: // from QDeclarativeParserStatus
    void classBegin();
    void componentComplete();

public Q_SLOTS:
    static void appendSlice(QDeclarativeListProperty<QPieSlice> *list,
                            QPieSlice *element);

private:
    QChart *m_chart;
};

QTCOMMERCIALCHART_END_NAMESPACE

#endif // DECLARATIVEPIESERIES_H
