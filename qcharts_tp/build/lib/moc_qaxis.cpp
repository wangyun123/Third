/****************************************************************************
** Meta object code from reading C++ file 'qaxis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/axis/qaxis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaxis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QAxis_t {
    QByteArrayData data[9];
    char stringdata[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QAxis_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QAxis_t qt_meta_stringdata_QtCommercialChart__QAxis = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 10),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 3),
QT_MOC_LITERAL(4, 41, 10),
QT_MOC_LITERAL(5, 52, 3),
QT_MOC_LITERAL(6, 56, 12),
QT_MOC_LITERAL(7, 69, 17),
QT_MOC_LITERAL(8, 87, 5)
    },
    "QtCommercialChart::QAxis\0minChanged\0"
    "\0min\0maxChanged\0max\0rangeChanged\0"
    "ticksCountChanged\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QAxis[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    2,   40,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    3,    5,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void QtCommercialChart::QAxis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAxis *_t = static_cast<QAxis *>(_o);
        switch (_id) {
        case 0: _t->minChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->maxChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->rangeChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: _t->ticksCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAxis::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAxis::minChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QAxis::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAxis::maxChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QAxis::*_t)(qreal , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAxis::rangeChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QAxis::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAxis::ticksCountChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QAxis::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QAxis.data,
      qt_meta_data_QtCommercialChart__QAxis,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QAxis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QAxis::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QAxis.stringdata))
        return static_cast<void*>(const_cast< QAxis*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::QAxis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QtCommercialChart::QAxis::minChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::QAxis::maxChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCommercialChart::QAxis::rangeChanged(qreal _t1, qreal _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCommercialChart::QAxis::ticksCountChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
