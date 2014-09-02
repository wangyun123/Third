/****************************************************************************
** Meta object code from reading C++ file 'piesliceitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/piechart/piesliceitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piesliceitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__PieSliceItem_t {
    QByteArrayData data[7];
    char stringdata[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__PieSliceItem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__PieSliceItem_t qt_meta_stringdata_QtCommercialChart__PieSliceItem = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 7),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 16),
QT_MOC_LITERAL(4, 58, 7),
QT_MOC_LITERAL(5, 66, 7),
QT_MOC_LITERAL(6, 74, 5)
    },
    "QtCommercialChart::PieSliceItem\0clicked\0"
    "\0Qt::MouseButtons\0buttons\0hovered\0"
    "state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__PieSliceItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void QtCommercialChart::PieSliceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PieSliceItem *_t = static_cast<PieSliceItem *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PieSliceItem::*_t)(Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PieSliceItem::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (PieSliceItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PieSliceItem::hovered)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtCommercialChart::PieSliceItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__PieSliceItem.data,
      qt_meta_data_QtCommercialChart__PieSliceItem,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::PieSliceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::PieSliceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__PieSliceItem.stringdata))
        return static_cast<void*>(const_cast< PieSliceItem*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int QtCommercialChart::PieSliceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::PieSliceItem::clicked(Qt::MouseButtons _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::PieSliceItem::hovered(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
