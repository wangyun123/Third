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

#ifndef SEPARATOR_H
#define SEPARATOR_H

#include "chartitem_p.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

class Separator : public QGraphicsItem
{
public:
    Separator(QGraphicsItem *parent = 0);

    void setPos(qreal x, qreal y);
    void setColor(QColor color);

    // From ChartItem
    void setSize(const QSizeF &size);

    // From QGraphicsItem
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
    QRectF boundingRect() const;

private:

    QColor mColor;
    qreal mXpos;
    qreal mYpos;
    qreal mHeight;
    qreal mWidth;

};

QTCOMMERCIALCHART_END_NAMESPACE

#endif // SEPARATOR_H
