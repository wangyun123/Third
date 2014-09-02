/****************************************************************************
** Meta object code from reading C++ file 'piechartitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/piechart/piechartitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piechartitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__PieChartItem_t {
    QByteArrayData data[12];
    char stringdata[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__PieChartItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__PieChartItem_t qt_meta_stringdata_QtCommercialChart__PieChartItem = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 10),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 17),
QT_MOC_LITERAL(4, 62, 17),
QT_MOC_LITERAL(5, 80, 6),
QT_MOC_LITERAL(6, 87, 19),
QT_MOC_LITERAL(7, 107, 22),
QT_MOC_LITERAL(8, 130, 18),
QT_MOC_LITERAL(9, 149, 19),
QT_MOC_LITERAL(10, 169, 21),
QT_MOC_LITERAL(11, 191, 4)
    },
    "QtCommercialChart::PieChartItem\0"
    "initialize\0\0handleSlicesAdded\0"
    "QList<QPieSlice*>\0slices\0handleSlicesRemoved\0"
    "handlePieLayoutChanged\0handleSliceChanged\0"
    "handleDomainChanged\0handleGeometryChanged\0"
    "rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__PieChartItem[] = {

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
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x0a /* Public */,
       9,    4,   58,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QRectF,   11,

       0        // eod
};

void QtCommercialChart::PieChartItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PieChartItem *_t = static_cast<PieChartItem *>(_o);
        switch (_id) {
        case 0: _t->initialize(); break;
        case 1: _t->handleSlicesAdded((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 2: _t->handleSlicesRemoved((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 3: _t->handlePieLayoutChanged(); break;
        case 4: _t->handleSliceChanged(); break;
        case 5: _t->handleDomainChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 6: _t->handleGeometryChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPieSlice*> >(); break;
            }
            break;
        }
    }
}

const QMetaObject QtCommercialChart::PieChartItem::staticMetaObject = {
    { &ChartItem::staticMetaObject, qt_meta_stringdata_QtCommercialChart__PieChartItem.data,
      qt_meta_data_QtCommercialChart__PieChartItem,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::PieChartItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::PieChartItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__PieChartItem.stringdata))
        return static_cast<void*>(const_cast< PieChartItem*>(this));
    return ChartItem::qt_metacast(_clname);
}

int QtCommercialChart::PieChartItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChartItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
