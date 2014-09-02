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

#include "charttheme_p.h"
#include "qchart.h"
#include "qchart_p.h"
#include "qchartview.h"
#include "qlegend.h"
#include "qaxis.h"
#include <QTime>

//series
#include "qbarset.h"
#include "qbarseries.h"
#include "qstackedbarseries.h"
#include "qpercentbarseries.h"
#include "qlineseries.h"
#include "qareaseries.h"
#include "qscatterseries.h"
#include "qpieseries.h"
#include "qpieslice.h"
#include "qsplineseries.h"

//items
#include "chartaxis_p.h"
#include "barchartitem_p.h"
#include "stackedbarchartitem_p.h"
#include "percentbarchartitem_p.h"
#include "linechartitem_p.h"
#include "areachartitem_p.h"
#include "scatterchartitem_p.h"
#include "piechartitem_p.h"
#include "splinechartitem_p.h"

//themes
#include "chartthemesystem_p.h"
#include "chartthemelight_p.h"
#include "chartthemebluecerulean_p.h"
#include "chartthemedark_p.h"
#include "chartthemebrownsand_p.h"
#include "chartthemebluencs_p.h"
#include "chartthemehighcontrast_p.h"
#include "chartthemeblueicy_p.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

ChartTheme::ChartTheme(QChart::ChartTheme id) :
    m_masterFont(QFont("arial", 14)),
    m_labelFont(QFont("arial", 10)),
    m_titleBrush(QColor(QRgb(0x000000))),
    m_axisLinePen(QPen(QRgb(0x000000))),
    m_axisLabelBrush(QColor(QRgb(0x000000))),
    m_backgroundShadesPen(Qt::NoPen),
    m_backgroundShadesBrush(Qt::NoBrush),
    m_backgroundShades(BackgroundShadesNone),
    m_backgroundDropShadowEnabled(false),
    m_gridLinePen(QPen(QRgb(0x000000))),
    m_force(false)
{
    m_id = id;
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}


ChartTheme* ChartTheme::createTheme(QChart::ChartTheme theme)
{
    switch(theme) {
        case QChart::ChartThemeLight:
            return new ChartThemeLight();
        case QChart::ChartThemeBlueCerulean:
            return new ChartThemeBlueCerulean();
        case QChart::ChartThemeDark:
            return new ChartThemeDark();
        case QChart::ChartThemeBrownSand:
            return new ChartThemeBrownSand();
        case QChart::ChartThemeBlueNcs:
            return new ChartThemeBlueNcs();
        case QChart::ChartThemeHighContrast:
            return new ChartThemeHighContrast();
        case QChart::ChartThemeBlueIcy:
            return new ChartThemeBlueIcy();
        default:
            return new ChartThemeSystem();
    }
}

void ChartTheme::decorate(QChart *chart)
{
    QBrush brush;

    if(brush == chart->backgroundBrush() ||  m_force)
        chart->setBackgroundBrush(m_chartBackgroundGradient);
    chart->setTitleFont(m_masterFont);
    chart->setTitleBrush(m_titleBrush);
    chart->setBackgroundDropShadowEnabled(m_backgroundDropShadowEnabled);
}

void ChartTheme::decorate(QLegend *legend)
{
    QPen pen;
    QBrush brush;

    if (pen == legend->pen() ||  m_force){
        legend->setPen(Qt::NoPen);
    }

    if (brush == legend->brush() ||  m_force) {
        legend->setBrush(m_chartBackgroundGradient);
    }
}

void ChartTheme::decorate(QAreaSeries *series, int index)
{
    QPen pen;
    QBrush brush;

    if (pen == series->pen() ||  m_force){
        pen.setColor(colorAt(m_seriesGradients.at(index % m_seriesGradients.size()), 0.0));
        pen.setWidthF(2);
        series->setPen(pen);
    }

    if (brush == series->brush() ||  m_force) {
       QBrush brush(m_seriesColors.at(index % m_seriesColors.size()));
       series->setBrush(brush);
    }
}


void ChartTheme::decorate(QLineSeries *series,int index)
{
    QPen pen;
    if(pen == series->pen() ||  m_force ){
        pen.setColor(m_seriesColors.at(index%m_seriesColors.size()));
        pen.setWidthF(2);
        series->setPen(pen);
    }
}

void ChartTheme::decorate(QBarSeries *series, int index)
{
    QBrush brush;
    QPen pen;
    QList<QBarSet *> sets = series->barSets();

    qreal takeAtPos = 0.5;
    qreal step = 0.2;
    if (sets.count() > 1 ) {
        step = 1.0 / (qreal) sets.count();
        if (sets.count() % m_seriesGradients.count())
            step *= m_seriesGradients.count();
        else
            step *= (m_seriesGradients.count() - 1);
    }

    for (int i(0); i < sets.count(); i++) {
        int colorIndex = (index + i) % m_seriesGradients.count();
        if (i > 0 && i % m_seriesGradients.count() == 0) {
            // There is no dedicated base color for each sets, generate more colors
            takeAtPos += step;
            if (takeAtPos == 1.0)
                takeAtPos += step;
            takeAtPos -= (int) takeAtPos;
        }
        if (brush == sets.at(i)->brush() ||  m_force )
            sets.at(i)->setBrush(colorAt(m_seriesGradients.at(colorIndex), takeAtPos));

        // Pick label color from the opposite end of the gradient.
        // 0.3 as a boundary seems to work well.
        if (takeAtPos < 0.3)
            sets.at(i)->setLabelBrush(colorAt(m_seriesGradients.at(index % m_seriesGradients.size()), 1));
        else
            sets.at(i)->setLabelBrush(colorAt(m_seriesGradients.at(index % m_seriesGradients.size()), 0));

        if (pen == sets.at(i)->pen() ||  m_force) {
            QColor c = colorAt(m_seriesGradients.at(index % m_seriesGradients.size()), 0.0);
            sets.at(i)->setPen(c);
        }
    }
}

void ChartTheme::decorate(QScatterSeries *series, int index)
{
    QPen pen;
    QBrush brush;

    if (pen == series->pen() ||  m_force) {
        pen.setColor(colorAt(m_seriesGradients.at(index % m_seriesGradients.size()), 0.0));
        pen.setWidthF(2);
        series->setPen(pen);
    }

    if (brush == series->brush() ||  m_force) {
        QBrush brush(m_seriesColors.at(index % m_seriesColors.size()));
        series->setBrush(brush);
    }
}

void ChartTheme::decorate(QPieSeries *series, int index)
{

    for (int i(0); i < series->slices().count(); i++) {

        QColor penColor = colorAt(m_seriesGradients.at(index % m_seriesGradients.size()), 0.0);

        // Get color for a slice from a gradient linearly, beginning from the start of the gradient
        qreal pos = (qreal) (i + 1) / (qreal) series->count();
        QColor brushColor = colorAt(m_seriesGradients.at(index % m_seriesGradients.size()), pos);

        QPieSlice *s = series->slices().at(i);
        PieSliceData data = PieSliceData::data(s);

        if (data.m_slicePen.isThemed() ||  m_force) {
            data.m_slicePen = penColor;
            data.m_slicePen.setThemed(true);
        }

        if (data.m_sliceBrush.isThemed() ||  m_force) {
            data.m_sliceBrush = brushColor;
            data.m_sliceBrush.setThemed(true);
        }

        if (data.m_labelPen.isThemed() ||  m_force) {
            data.m_labelPen = QPen(m_titleBrush.color());
            data.m_labelPen.setThemed(true);
        }

        if (data.m_labelFont.isThemed() ||  m_force) {
            data.m_labelFont = m_labelFont;
            data.m_labelFont.setThemed(true);
        }

        if (PieSliceData::data(s) != data) {
            PieSliceData::data(s) = data;
            emit PieSliceData::data(s).emitChangedSignal(s);
        }
    }
}

void ChartTheme::decorate(QSplineSeries *series, int index)
{
    QPen pen;
    if(pen == series->pen() ||  m_force){
        pen.setColor(m_seriesColors.at(index%m_seriesColors.size()));
        pen.setWidthF(2);
        series->setPen(pen);
    }
}

void ChartTheme::decorate(QAxis *axis,bool axisX)
{
    QPen pen;
    QBrush brush;
    QFont font;

    if (axis->isAxisVisible()) {

        if(brush == axis->labelsBrush() ||  m_force){
            axis->setLabelsBrush(m_axisLabelBrush);
        }
        if(pen == axis->labelsPen() ||  m_force){
            axis->setLabelsPen(Qt::NoPen); // NoPen for performance reasons
        }


       if (axis->shadesVisible() ||  m_force) {

         if(brush == axis->shadesBrush() ||  m_force){
             axis->setShadesBrush(m_backgroundShadesBrush);
         }

         if(pen == axis->shadesPen() ||  m_force){
             axis->setShadesPen(m_backgroundShadesPen);
         }

         if( m_force && (m_backgroundShades == BackgroundShadesBoth
                         || (m_backgroundShades == BackgroundShadesVertical && axisX)
                         || (m_backgroundShades == BackgroundShadesHorizontal && !axisX))){
             axis->setShadesVisible(true);

         }
       }

        if(pen == axis->axisPen() ||  m_force){
            axis->setAxisPen(m_axisLinePen);
        }

        if(pen == axis->gridLinePen() ||  m_force){
            axis->setGridLinePen(m_gridLinePen);
        }

        if(font == axis->labelsFont() || m_force){
            axis->setLabelsFont(m_labelFont);
        }
    }
}

void ChartTheme::generateSeriesGradients()
{
    // Generate gradients in HSV color space
    foreach (const QColor& color, m_seriesColors) {
        QLinearGradient g;
        qreal h = color.hsvHueF();
        qreal s = color.hsvSaturationF();

        // TODO: tune the algorithm to give nice results with most base colors defined in
        // most themes. The rest of the gradients we can define manually in theme specific
        // implementation.
        QColor start = color;
        start.setHsvF(h, 0.0, 1.0);
        g.setColorAt(0.0, start);

        g.setColorAt(0.5, color);

        QColor end = color;
        end.setHsvF(h, s, 0.25);
        g.setColorAt(1.0, end);

        m_seriesGradients << g;
    }
}


QColor ChartTheme::colorAt(const QColor &start, const QColor &end, qreal pos)
{
    Q_ASSERT(pos >= 0.0 && pos <= 1.0);
    qreal r = start.redF() + ((end.redF() - start.redF()) * pos);
    qreal g = start.greenF() + ((end.greenF() - start.greenF()) * pos);
    qreal b = start.blueF() + ((end.blueF() - start.blueF()) * pos);
    QColor c;
    c.setRgbF(r, g, b);
    return c;
}

QColor ChartTheme::colorAt(const QGradient &gradient, qreal pos)
{
    Q_ASSERT(pos >= 0 && pos <= 1.0);

    // another possibility:
    // http://stackoverflow.com/questions/3306786/get-intermediate-color-from-a-gradient

    QGradientStops stops = gradient.stops();
    int count = stops.count();

    // find previous stop relative to position
    QGradientStop prev = stops.first();
    for (int i = 0; i < count; i++) {
        QGradientStop stop = stops.at(i);
        if (pos > stop.first)
            prev = stop;

        // given position is actually a stop position?
        if (pos == stop.first) {
            //qDebug() << "stop color" << pos;
            return stop.second;
        }
    }

    // find next stop relative to position
    QGradientStop next = stops.last();
    for (int i = count - 1; i >= 0; i--) {
        QGradientStop stop = stops.at(i);
        if (pos < stop.first)
            next = stop;
    }

    //qDebug() << "prev" << prev.first << "pos" << pos << "next" << next.first;

    qreal range = next.first - prev.first;
    qreal posDelta = pos - prev.first;
    qreal relativePos = posDelta / range;

    //qDebug() << "range" << range << "posDelta" << posDelta << "relativePos" << relativePos;

    return colorAt(prev.second, next.second, relativePos);
}

void ChartTheme::setForced(bool enabled)
{
    m_force=enabled;
}

QTCOMMERCIALCHART_END_NAMESPACE
