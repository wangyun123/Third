/****************************************************************************
** Meta object code from reading C++ file 'chartaxis_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/axis/chartaxis_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartaxis_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__ChartAxis_t {
    QByteArrayData data[10];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__ChartAxis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__ChartAxis_t qt_meta_stringdata_QtCommercialChart__ChartAxis = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 17),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 27),
QT_MOC_LITERAL(4, 76, 18),
QT_MOC_LITERAL(5, 95, 3),
QT_MOC_LITERAL(6, 99, 3),
QT_MOC_LITERAL(7, 103, 9),
QT_MOC_LITERAL(8, 113, 21),
QT_MOC_LITERAL(9, 135, 4)
    },
    "QtCommercialChart::ChartAxis\0"
    "handleAxisUpdated\0\0handleAxisCategoriesUpdated\0"
    "handleRangeChanged\0min\0max\0tickCount\0"
    "handleGeometryChanged\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__ChartAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    3,   36,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,    5,    6,    7,
    QMetaType::Void, QMetaType::QRectF,    9,

       0        // eod
};

void QtCommercialChart::ChartAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChartAxis *_t = static_cast<ChartAxis *>(_o);
        switch (_id) {
        case 0: _t->handleAxisUpdated(); break;
        case 1: _t->handleAxisCategoriesUpdated(); break;
        case 2: _t->handleRangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->handleGeometryChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtCommercialChart::ChartAxis::staticMetaObject = {
    { &Chart::staticMetaObject, qt_meta_stringdata_QtCommercialChart__ChartAxis.data,
      qt_meta_data_QtCommercialChart__ChartAxis,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::ChartAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::ChartAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__ChartAxis.stringdata))
        return static_cast<void*>(const_cast< ChartAxis*>(this));
    return Chart::qt_metacast(_clname);
}

int QtCommercialChart::ChartAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Chart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
