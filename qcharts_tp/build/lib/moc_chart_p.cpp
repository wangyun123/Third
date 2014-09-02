/****************************************************************************
** Meta object code from reading C++ file 'chart_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/chart_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chart_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__Chart_t {
    QByteArrayData data[20];
    char stringdata[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__Chart_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__Chart_t qt_meta_stringdata_QtCommercialChart__Chart = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 21),
QT_MOC_LITERAL(2, 47, 0),
QT_MOC_LITERAL(3, 48, 4),
QT_MOC_LITERAL(4, 53, 19),
QT_MOC_LITERAL(5, 73, 4),
QT_MOC_LITERAL(6, 78, 4),
QT_MOC_LITERAL(7, 83, 4),
QT_MOC_LITERAL(8, 88, 4),
QT_MOC_LITERAL(9, 93, 13),
QT_MOC_LITERAL(10, 107, 3),
QT_MOC_LITERAL(11, 111, 3),
QT_MOC_LITERAL(12, 115, 10),
QT_MOC_LITERAL(13, 126, 13),
QT_MOC_LITERAL(14, 140, 10),
QT_MOC_LITERAL(15, 151, 11),
QT_MOC_LITERAL(16, 163, 14),
QT_MOC_LITERAL(17, 178, 8),
QT_MOC_LITERAL(18, 187, 9),
QT_MOC_LITERAL(19, 197, 15)
    },
    "QtCommercialChart::Chart\0handleGeometryChanged\0"
    "\0rect\0handleDomainChanged\0minX\0maxX\0"
    "minY\0maxY\0rangeXChanged\0min\0max\0"
    "tickXCount\0rangeYChanged\0tickYCount\0"
    "setAnimator\0ChartAnimator*\0animator\0"
    "presenter\0ChartPresenter*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__Chart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    4,   52,    2, 0x0a /* Public */,
       9,    3,   61,    2, 0x0a /* Public */,
      13,    3,   68,    2, 0x0a /* Public */,
      15,    1,   75,    2, 0x0a /* Public */,
      17,    0,   78,    2, 0x0a /* Public */,
      18,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,   10,   11,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    0x80000000 | 16,
    0x80000000 | 19,

       0        // eod
};

void QtCommercialChart::Chart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Chart *_t = static_cast<Chart *>(_o);
        switch (_id) {
        case 0: _t->handleGeometryChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->handleDomainChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 2: _t->rangeXChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->rangeYChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->setAnimator((*reinterpret_cast< ChartAnimator*(*)>(_a[1]))); break;
        case 5: { ChartAnimator* _r = _t->animator();
            if (_a[0]) *reinterpret_cast< ChartAnimator**>(_a[0]) = _r; }  break;
        case 6: { ChartPresenter* _r = _t->presenter();
            if (_a[0]) *reinterpret_cast< ChartPresenter**>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject QtCommercialChart::Chart::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__Chart.data,
      qt_meta_data_QtCommercialChart__Chart,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::Chart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::Chart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__Chart.stringdata))
        return static_cast<void*>(const_cast< Chart*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::Chart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
