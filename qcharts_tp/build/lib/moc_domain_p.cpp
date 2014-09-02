/****************************************************************************
** Meta object code from reading C++ file 'domain_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/domain_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'domain_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__Domain_t {
    QByteArrayData data[16];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__Domain_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__Domain_t qt_meta_stringdata_QtCommercialChart__Domain = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 13),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 4),
QT_MOC_LITERAL(4, 46, 4),
QT_MOC_LITERAL(5, 51, 4),
QT_MOC_LITERAL(6, 56, 4),
QT_MOC_LITERAL(7, 61, 13),
QT_MOC_LITERAL(8, 75, 3),
QT_MOC_LITERAL(9, 79, 3),
QT_MOC_LITERAL(10, 83, 10),
QT_MOC_LITERAL(11, 94, 13),
QT_MOC_LITERAL(12, 108, 10),
QT_MOC_LITERAL(13, 119, 18),
QT_MOC_LITERAL(14, 138, 11),
QT_MOC_LITERAL(15, 150, 18)
    },
    "QtCommercialChart::Domain\0domainChanged\0"
    "\0minX\0maxX\0minY\0maxY\0rangeXChanged\0"
    "min\0max\0tickXCount\0rangeYChanged\0"
    "tickYCount\0handleAxisXChanged\0niceNumbers\0"
    "handleAxisYChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__Domain[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   59,    2, 0x06 /* Public */,
       7,    3,   68,    2, 0x06 /* Public */,
      11,    3,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    4,   82,    2, 0x0a /* Public */,
      13,    3,   91,    2, 0x2a /* Public | MethodCloned */,
      13,    2,   98,    2, 0x2a /* Public | MethodCloned */,
      15,    4,  103,    2, 0x0a /* Public */,
      15,    3,  112,    2, 0x2a /* Public | MethodCloned */,
      15,    2,  119,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,    8,    9,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Bool,    8,    9,   10,   14,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,    8,    9,   10,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    8,    9,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int, QMetaType::Bool,    8,    9,   12,   14,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,    8,    9,   12,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    8,    9,

       0        // eod
};

void QtCommercialChart::Domain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Domain *_t = static_cast<Domain *>(_o);
        switch (_id) {
        case 0: _t->domainChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 1: _t->rangeXChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->rangeYChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->handleAxisXChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->handleAxisXChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->handleAxisXChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 6: _t->handleAxisYChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 7: _t->handleAxisYChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->handleAxisYChanged((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Domain::*_t)(qreal , qreal , qreal , qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Domain::domainChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Domain::*_t)(qreal , qreal , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Domain::rangeXChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Domain::*_t)(qreal , qreal , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Domain::rangeYChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QtCommercialChart::Domain::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__Domain.data,
      qt_meta_data_QtCommercialChart__Domain,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::Domain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::Domain::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__Domain.stringdata))
        return static_cast<void*>(const_cast< Domain*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::Domain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::Domain::domainChanged(qreal _t1, qreal _t2, qreal _t3, qreal _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::Domain::rangeXChanged(qreal _t1, qreal _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCommercialChart::Domain::rangeYChanged(qreal _t1, qreal _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
