/****************************************************************************
** Meta object code from reading C++ file 'qbarseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/barchart/qbarseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbarseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QBarSeries_t {
    QByteArrayData data[8];
    char stringdata[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QBarSeries_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QBarSeries_t qt_meta_stringdata_QtCommercialChart__QBarSeries = {
    {
QT_MOC_LITERAL(0, 0, 29),
QT_MOC_LITERAL(1, 30, 7),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 8),
QT_MOC_LITERAL(4, 48, 6),
QT_MOC_LITERAL(5, 55, 8),
QT_MOC_LITERAL(6, 64, 7),
QT_MOC_LITERAL(7, 72, 6)
    },
    "QtCommercialChart::QBarSeries\0clicked\0"
    "\0QBarSet*\0barset\0category\0hovered\0"
    "status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QBarSeries[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       6,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    7,

       0        // eod
};

void QtCommercialChart::QBarSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBarSeries *_t = static_cast<QBarSeries *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QBarSet*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->hovered((*reinterpret_cast< QBarSet*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QBarSeries::*_t)(QBarSet * , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBarSeries::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (QBarSeries::*_t)(QBarSet * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBarSeries::hovered)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QBarSeries::staticMetaObject = {
    { &QAbstractSeries::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QBarSeries.data,
      qt_meta_data_QtCommercialChart__QBarSeries,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QBarSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QBarSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QBarSeries.stringdata))
        return static_cast<void*>(const_cast< QBarSeries*>(this));
    return QAbstractSeries::qt_metacast(_clname);
}

int QtCommercialChart::QBarSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QtCommercialChart::QBarSeries::clicked(QBarSet * _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::QBarSeries::hovered(QBarSet * _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
