/****************************************************************************
** Meta object code from reading C++ file 'qpieseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/piechart/qpieseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpieseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QPieSeries_t {
    QByteArrayData data[12];
    char stringdata[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QPieSeries_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QPieSeries_t qt_meta_stringdata_QtCommercialChart__QPieSeries = {
    {
QT_MOC_LITERAL(0, 0, 29),
QT_MOC_LITERAL(1, 30, 7),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 10),
QT_MOC_LITERAL(4, 50, 5),
QT_MOC_LITERAL(5, 56, 7),
QT_MOC_LITERAL(6, 64, 5),
QT_MOC_LITERAL(7, 70, 18),
QT_MOC_LITERAL(8, 89, 16),
QT_MOC_LITERAL(9, 106, 4),
QT_MOC_LITERAL(10, 111, 10),
QT_MOC_LITERAL(11, 122, 8)
    },
    "QtCommercialChart::QPieSeries\0clicked\0"
    "\0QPieSlice*\0slice\0hovered\0state\0"
    "horizontalPosition\0verticalPosition\0"
    "size\0startAngle\0endAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QPieSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::QReal, 0x00095003,
      10, QMetaType::QReal, 0x00095003,
      11, QMetaType::QReal, 0x00095003,

       0        // eod
};

void QtCommercialChart::QPieSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPieSeries *_t = static_cast<QPieSeries *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QPieSlice*(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< QPieSlice*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPieSeries::*_t)(QPieSlice * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSeries::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (QPieSeries::*_t)(QPieSlice * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSeries::hovered)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QPieSeries::staticMetaObject = {
    { &QAbstractSeries::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QPieSeries.data,
      qt_meta_data_QtCommercialChart__QPieSeries,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QPieSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QPieSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QPieSeries.stringdata))
        return static_cast<void*>(const_cast< QPieSeries*>(this));
    return QAbstractSeries::qt_metacast(_clname);
}

int QtCommercialChart::QPieSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeries::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = horizontalPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = verticalPosition(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = pieSize(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = pieStartAngle(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = pieEndAngle(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setHorizontalPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setVerticalPosition(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setPieSize(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setPieStartAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setPieEndAngle(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCommercialChart::QPieSeries::clicked(QPieSlice * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::QPieSeries::hovered(QPieSlice * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
