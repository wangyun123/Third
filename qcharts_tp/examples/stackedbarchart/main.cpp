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
#include <QStackedBarSeries>
#include <QBarSet>
#include <QLegend>

QTCOMMERCIALCHART_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//![1]
    QBarCategories categories;
    categories << "Jan" << "Feb" << "Mar" << "Apr" << "May" << "Jun";
//![1]

//![2]
    QBarSet *set0 = new QBarSet("Jane");
    QBarSet *set1 = new QBarSet("John");
    QBarSet *set2 = new QBarSet("Axel");
    QBarSet *set3 = new QBarSet("Mary");
    QBarSet *set4 = new QBarSet("Samantha");

    *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    *set1 << 5 << 0 << 0 << 4 << 0 << 7;
    *set2 << 3 << 5 << 8 << 13 << 8 << 5;
    *set3 << 5 << 6 << 7 << 3 << 4 << 5;
    *set4 << 9 << 7 << 5 << 3 << 1 << 2;
//![2]

//![3]
    QStackedBarSeries* series = new QStackedBarSeries(categories);
    series->appendBarSet(set0);
    series->appendBarSet(set1);
    series->appendBarSet(set2);
    series->appendBarSet(set3);
    series->appendBarSet(set4);
//![3]

//![4]
    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Simple stackedbarchart example");
//![4]

//![5]
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(QLegend::AlignmentBottom);
    chart->axisY()->setNiceNumbersEnabled(true);
//![5]

//![6]
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
//![6]

//![7]
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(400, 300);
    window.show();
//![7]

    return a.exec();
}

