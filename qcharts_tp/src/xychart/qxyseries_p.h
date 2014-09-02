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

//  W A R N I N G
//  -------------
//
// This file is not part of the QtCommercial Chart API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef QXYSERIES_P_H
#define QXYSERIES_P_H

#include "qabstractseries_p.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class QXYSeries;

class QXYSeriesPrivate: public QAbstractSeriesPrivate
{
    Q_OBJECT

public:
    QXYSeriesPrivate(QXYSeries* q);

    void scaleDomain(Domain& domain);
    QList<LegendMarker*> createLegendMarker(QLegend* legend);

Q_SIGNALS:
    void updated();
    void pointReplaced(int index);
    void pointRemoved(int index);
    void pointAdded(int index);

protected:
    QVector<qreal> m_x;
    QVector<qreal> m_y;

    QPen m_pen;
    QBrush m_brush;

    int m_mapX;
    int m_mapY;
    Qt::Orientation m_mapOrientation;
    bool m_pointsVisible;

private:
    Q_DECLARE_PUBLIC(QXYSeries);
    friend class QScatterSeries;

};

QTCOMMERCIALCHART_END_NAMESPACE

#endif
