/****************************************************************************
** Meta object code from reading C++ file 'qaxis_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/axis/qaxis_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaxis_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QAxisPrivate_t {
    QByteArrayData data[10];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QAxisPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QAxisPrivate_t qt_meta_stringdata_QtCommercialChart__QAxisPrivate = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 7),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 7),
QT_MOC_LITERAL(4, 49, 3),
QT_MOC_LITERAL(5, 53, 3),
QT_MOC_LITERAL(6, 57, 9),
QT_MOC_LITERAL(7, 67, 11),
QT_MOC_LITERAL(8, 79, 22),
QT_MOC_LITERAL(9, 102, 5)
    },
    "QtCommercialChart::QAxisPrivate\0updated\0"
    "\0changed\0min\0max\0tickCount\0niceNumbers\0"
    "handleAxisRangeChanged\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QAxisPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    4,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Bool,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,    4,    5,    9,

       0        // eod
};

void QtCommercialChart::QAxisPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAxisPrivate *_t = static_cast<QAxisPrivate *>(_o);
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->changed((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->handleAxisRangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAxisPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAxisPrivate::updated)) {
                *result = 0;
            }
        }
        {
            typedef void (QAxisPrivate::*_t)(qreal , qreal , int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAxisPrivate::changed)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QAxisPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QAxisPrivate.data,
      qt_meta_data_QtCommercialChart__QAxisPrivate,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QAxisPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QAxisPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QAxisPrivate.stringdata))
        return static_cast<void*>(const_cast< QAxisPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::QAxisPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::QAxisPrivate::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtCommercialChart::QAxisPrivate::changed(qreal _t1, qreal _t2, int _t3, bool _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
