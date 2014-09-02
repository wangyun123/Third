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

#include "splineanimation_p.h"
#include "splinechartitem_p.h"
#include <QDebug>

Q_DECLARE_METATYPE(QVector<QPointF>)
Q_DECLARE_METATYPE(SplineVector)

QTCOMMERCIALCHART_BEGIN_NAMESPACE

SplineAnimation::SplineAnimation(SplineChartItem* item):ChartAnimation(item),
    m_item(item),
    m_dirty(true)
{
}

SplineAnimation::~SplineAnimation()
{
}

void SplineAnimation::setValues(QVector<QPointF> &oldPoints, QVector<QPointF> &newPoints, QVector<QPointF> &oldControlPoints, QVector<QPointF> &newControlPoints, int index)
{
    int x = oldPoints.count();
    int y = newPoints.count();

    Q_ASSERT(newPoints.count() * 2 - 2 == newControlPoints.count());

    if (x != y && abs(x - y) != 1) {
        m_oldSpline.first = newPoints;
        m_oldSpline.second = newControlPoints;
        oldPoints.resize(newPoints.size());
        oldControlPoints.resize(newControlPoints.size());
        SplineVector oldPair;
        oldPair.first = oldPoints;
        oldPair.second = oldControlPoints;
        SplineVector newPair;
        newPair.first = newPoints;
        newPair.second = newControlPoints;
        setKeyValueAt(0.0, qVariantFromValue(oldPair));
        setKeyValueAt(1.0, qVariantFromValue(newPair));
        m_dirty = false;
    }
    else {
        if(m_dirty) {
            m_oldSpline.first = oldPoints;
            m_oldSpline.second = oldControlPoints;
            m_dirty = false;
        }
        oldPoints = newPoints;
        oldControlPoints = newControlPoints;
        if (y < x) {
            m_oldSpline.first.remove(index); //remove
            m_oldSpline.second.remove(index * 2);
            m_oldSpline.second.remove(index * 2);
        }
        if (y > x) {
            m_oldSpline.first.insert(index, x > 0 ? m_oldSpline.first[index-1] : newPoints[index]); //add
            m_oldSpline.second.insert((index - 1) * 2, x > 1 ? m_oldSpline.second[(index-2)*2] : newControlPoints[(index - 1) * 2]); //add
            m_oldSpline.second.insert((index - 1) * 2 + 1, x > 1 ? m_oldSpline.second[(index - 2) * 2 + 1] : newControlPoints[(index - 1) * 2 + 1]); //add
        }
        SplineVector newPair;
        newPair.first=newPoints;
        newPair.second=newControlPoints;
        setKeyValueAt(0.0, qVariantFromValue(m_oldSpline));
        setKeyValueAt(1.0, qVariantFromValue(newPair));

    }
}

QVariant SplineAnimation::interpolated(const QVariant &start, const QVariant &end, qreal progress ) const
{

    SplineVector startPair  =  start.value< SplineVector >();
    SplineVector endPair =  end.value< SplineVector >();
    SplineVector result;


    switch (m_type) {

    case MoveDownAnimation: {
        if (startPair.first.count() != endPair.first.count())
            break;
        Q_ASSERT(startPair.first.count() * 2 - 2 == startPair.second.count());
        Q_ASSERT(endPair.first.count() * 2 - 2 == endPair.second.count());
        for(int i = 0; i < endPair.first.count(); i++) {
            qreal x = startPair.first[i].x() + ((endPair.first[i].x() - startPair.first[i].x()) * progress);
            qreal y = startPair.first[i].y() + ((endPair.first[i].y() - startPair.first[i].y()) * progress);
            result.first << QPointF(x,y);
            if (i + 1 >= endPair.first.count())
                continue;
            x = startPair.second[i * 2].x() + ((endPair.second[i * 2].x() - startPair.second[i * 2].x()) * progress);
            y = startPair.second[i * 2].y() + ((endPair.second[i * 2].y() - startPair.second[i * 2].y()) * progress);
            result.second << QPoint(x,y);
            x = startPair.second[i * 2 + 1].x() + ((endPair.second[i * 2 + 1].x() - startPair.second[i * 2 + 1].x()) * progress);
            y = startPair.second[i * 2 + 1].y() + ((endPair.second[i * 2 + 1].y() - startPair.second[i * 2 + 1].y()) * progress);
            result.second << QPoint(x,y);
        }

    }
        break;
    case LineDrawAnimation:{
        Q_ASSERT(endPair.first.count() * 2 - 2 == endPair.second.count());
        int count = endPair.first.count()* qBound(qreal(0), progress, qreal(1));
        for(int i = 0; i < count; i++) {
            result.first << endPair.first[i];
            if(i + 1 == count)
                break;
            result.second << endPair.second[2 * i];
            result.second << endPair.second[2 * i + 1];
        }
    }
        break;
    default:
        qWarning() << "Unknow type of animation";
        break;
    }

    return qVariantFromValue(result);
}

void SplineAnimation::updateCurrentValue (const QVariant &value )
{
    if (state() != QAbstractAnimation::Stopped) { //workaround
        m_dirty = true;
        QPair<QVector<QPointF >, QVector<QPointF > > pair = value.value< QPair< QVector<QPointF>, QVector<QPointF> > >();
        m_item->setLayout(pair.first, pair.second);
    }
}


QTCOMMERCIALCHART_END_NAMESPACE
