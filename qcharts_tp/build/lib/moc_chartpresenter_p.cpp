/****************************************************************************
** Meta object code from reading C++ file 'chartpresenter_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/chartpresenter_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartpresenter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__ChartPresenter_t {
    QByteArrayData data[15];
    char stringdata[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__ChartPresenter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__ChartPresenter_t qt_meta_stringdata_QtCommercialChart__ChartPresenter = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 15),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 4),
QT_MOC_LITERAL(4, 56, 17),
QT_MOC_LITERAL(5, 74, 16),
QT_MOC_LITERAL(6, 91, 6),
QT_MOC_LITERAL(7, 98, 7),
QT_MOC_LITERAL(8, 106, 6),
QT_MOC_LITERAL(9, 113, 19),
QT_MOC_LITERAL(10, 133, 15),
QT_MOC_LITERAL(11, 149, 6),
QT_MOC_LITERAL(12, 156, 4),
QT_MOC_LITERAL(13, 161, 17),
QT_MOC_LITERAL(14, 179, 12)
    },
    "QtCommercialChart::ChartPresenter\0"
    "geometryChanged\0\0rect\0handleSeriesAdded\0"
    "QAbstractSeries*\0series\0Domain*\0domain\0"
    "handleSeriesRemoved\0handleAxisAdded\0"
    "QAxis*\0axis\0handleAxisRemoved\0"
    "updateLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__ChartPresenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   47,    2, 0x0a /* Public */,
       9,    1,   52,    2, 0x0a /* Public */,
      10,    2,   55,    2, 0x0a /* Public */,
      13,    1,   60,    2, 0x0a /* Public */,
      14,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRectF,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 7,   12,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

void QtCommercialChart::ChartPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChartPresenter *_t = static_cast<ChartPresenter *>(_o);
        switch (_id) {
        case 0: _t->geometryChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->handleSeriesAdded((*reinterpret_cast< QAbstractSeries*(*)>(_a[1])),(*reinterpret_cast< Domain*(*)>(_a[2]))); break;
        case 2: _t->handleSeriesRemoved((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 3: _t->handleAxisAdded((*reinterpret_cast< QAxis*(*)>(_a[1])),(*reinterpret_cast< Domain*(*)>(_a[2]))); break;
        case 4: _t->handleAxisRemoved((*reinterpret_cast< QAxis*(*)>(_a[1]))); break;
        case 5: _t->updateLayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChartPresenter::*_t)(const QRectF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChartPresenter::geometryChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QtCommercialChart::ChartPresenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__ChartPresenter.data,
      qt_meta_data_QtCommercialChart__ChartPresenter,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::ChartPresenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::ChartPresenter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__ChartPresenter.stringdata))
        return static_cast<void*>(const_cast< ChartPresenter*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::ChartPresenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::ChartPresenter::geometryChanged(const QRectF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
