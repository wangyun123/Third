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

#include <QApplication>
#include <QMainWindow>
#include <QChartView>
#include <QLineSeries>

QTCOMMERCIALCHART_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//![1]
    QLineSeries* series = new QLineSeries();
//![1]

//![2]
    series->append(10, -6);
    series->append(12, 4);
    series->append(13, 8);
    series->append(17, 4);
    series->append(20, 5);
    *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);
//![2]

//![3]
    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple line chart example");

    // 坐标范围设置，如果不初始化，x范围为自适应
    chart->axisX()->setRange(-10, 10);  // 初始化横坐标范围
    chart->axisY()->setRange(20, 30);   // 初始化纵坐标范围
//![3]

//![4]
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
//![4]

//![5]
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(400, 300);
    window.show();
//![5]

    return a.exec();
}
