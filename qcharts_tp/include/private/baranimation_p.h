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

#ifndef BARANIMATION_P_H
#define BARANIMATION_P_H

#include "chartanimation_p.h"
#include "barchartitem_p.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class BarChartItem;
class QBarSet;
class BarSetAnimation;

class BarAnimation : public ChartAnimation
{
    Q_OBJECT

public:
    BarAnimation(BarChartItem *item);
    ~BarAnimation();

public: // from QVariantAnimation
    virtual QVariant interpolated(const QVariant &from, const QVariant &to, qreal progress) const;
    virtual void updateCurrentValue(const QVariant &value);

public Q_SLOTS:

private:
    BarChartItem *m_item;
    QHash<QBarSet *, BarSetAnimation *> m_animations;
};

QTCOMMERCIALCHART_END_NAMESPACE

#endif
