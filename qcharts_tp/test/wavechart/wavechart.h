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

#include <QTimer>
#include <QTime>
#include <QObject>
#include <QLineSeries>
#include <QChartView>

QTCOMMERCIALCHART_USE_NAMESPACE

class WaveChart: public QChartView
{
    Q_OBJECT

public:
    WaveChart(QChart* chart, QWidget* parent);

private slots:
    void update();

private:
    QLineSeries* m_series;
    int m_wave;
    qreal m_step;
    QTimer m_timer;
};
