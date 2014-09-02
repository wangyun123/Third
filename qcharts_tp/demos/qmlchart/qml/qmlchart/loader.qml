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

import QtQuick 1.0

Item {
    id: container
    width: 400
    height: 300
    Component.onCompleted: {
    var co = Qt.createComponent("main.qml")
    if (co.status == Component.Ready) {
            var o = co.createObject(container)
        } else {
            console.log(co.errorString())
            console.log("QtCommercial.Chart 1.1 not available")
            console.log("Please use correct QML_IMPORT_PATH export")
         }
    }
}
