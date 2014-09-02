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

#include "chartview.h"

QTCOMMERCIALCHART_USE_NAMESPACE

ChartView::ChartView(QWidget *parent)
    : QChartView(new QChart(), parent),
      m_scatter(0),
      m_scatter2(0)
{
    setRenderHint(QPainter::Antialiasing);

    chart()->setTitle("Click to interact with scatter points");

    m_scatter = new QScatterSeries();
    for(qreal x(0.5); x <= 4.0; x += 0.5) {
        for(qreal y(0.5); y <= 4.0; y += 0.5) {
            *m_scatter << QPointF(x, y);
        }
    }
    m_scatter2 = new QScatterSeries();

    chart()->addSeries(m_scatter2);
    chart()->addSeries(m_scatter);
    chart()->axisX()->setRange(0, 4.5);
    chart()->axisY()->setRange(0, 4.5);

    connect(m_scatter, SIGNAL(clicked(QPointF)), this, SLOT(handleClickedPoint(QPointF)));
}

ChartView::~ChartView()
{
}

void ChartView::handleClickedPoint(const QPointF& point)
{
    m_scatter->remove(point);
    m_scatter2->append(point);
}
