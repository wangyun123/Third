/****************************************************************************
** Meta object code from reading C++ file 'xychartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/xychart/xychartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xychartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__XYChartItem_t {
    QByteArrayData data[15];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__XYChartItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__XYChartItem_t qt_meta_stringdata_QtCommercialChart__XYChartItem = {
    {
QT_MOC_LITERAL(0, 0, 30),
QT_MOC_LITERAL(1, 31, 7),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 5),
QT_MOC_LITERAL(4, 46, 16),
QT_MOC_LITERAL(5, 63, 5),
QT_MOC_LITERAL(6, 69, 18),
QT_MOC_LITERAL(7, 88, 19),
QT_MOC_LITERAL(8, 108, 19),
QT_MOC_LITERAL(9, 128, 4),
QT_MOC_LITERAL(10, 133, 4),
QT_MOC_LITERAL(11, 138, 4),
QT_MOC_LITERAL(12, 143, 4),
QT_MOC_LITERAL(13, 148, 21),
QT_MOC_LITERAL(14, 170, 4)
    },
    "QtCommercialChart::XYChartItem\0clicked\0"
    "\0point\0handlePointAdded\0index\0"
    "handlePointRemoved\0handlePointReplaced\0"
    "handleDomainChanged\0minX\0maxX\0minY\0"
    "maxY\0handleGeometryChanged\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__XYChartItem[] = {

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
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       8,    4,   56,    2, 0x0a /* Public */,
      13,    1,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QRectF,   14,

       0        // eod
};

void QtCommercialChart::XYChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XYChartItem *_t = static_cast<XYChartItem *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->handlePointAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->handlePointRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->handlePointReplaced((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->handleDomainChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 5: _t->handleGeometryChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XYChartItem::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XYChartItem::clicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QtCommercialChart::XYChartItem::staticMetaObject = {
    { &ChartItem::staticMetaObject, qt_meta_stringdata_QtCommercialChart__XYChartItem.data,
      qt_meta_data_QtCommercialChart__XYChartItem,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::XYChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::XYChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__XYChartItem.stringdata))
        return static_cast<void*>(const_cast< XYChartItem*>(this));
    return ChartItem::qt_metacast(_clname);
}

int QtCommercialChart::XYChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::XYChartItem::clicked(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
