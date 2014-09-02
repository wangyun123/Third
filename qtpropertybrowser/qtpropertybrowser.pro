################################################################
# third Library
# Copyright (C) 2014   wangyun
# date: 2014-07-31
#
# 1. qtpropertybrowser
################################################################

# qmake project file for building the third libraries

ISEIS_ROOT = $${PWD}/../..
include( $${ISEIS_ROOT}/config.pri )
include( $${ISEIS_ROOT}/functions.pri )

TEMPLATE = lib
TARGET = $$iseisLibraryTarget(qtpropertybrowser)

QT += widgets
DEFINES += QTPROPERTYBROWSER_LIB

CONFIG(debug, debug|release) {
    DESTDIR = $${ISEIS_ROOT}/bin/debug
    MOC_DIR = $${ISEIS_ROOT}/build/debug
    UI_DIR  = $${ISEIS_ROOT}/build/debug
    RCC_DIR = $${ISEIS_ROOT}/build/debug
    OBJECTS_DIR = $${ISEIS_ROOT}/build/debug
} else {
    DESTDIR = $${ISEIS_ROOT}/bin/release
    MOC_DIR = $${ISEIS_ROOT}/build/release
    UI_DIR  = $${ISEIS_ROOT}/build/release
    RCC_DIR = $${ISEIS_ROOT}/build/release
    OBJECTS_DIR = $${ISEIS_ROOT}/build/release
}

include( $${PWD}/qtpropertybrowser.pri )
