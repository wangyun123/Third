/****************************************************************************
** Meta object code from reading C++ file 'chartdataset_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/chartdataset_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartdataset_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__ChartDataSet_t {
    QByteArrayData data[12];
    char stringdata[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__ChartDataSet_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__ChartDataSet_t qt_meta_stringdata_QtCommercialChart__ChartDataSet = {
    {
QT_MOC_LITERAL(0, 0, 31),
QT_MOC_LITERAL(1, 32, 11),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 16),
QT_MOC_LITERAL(4, 62, 6),
QT_MOC_LITERAL(5, 69, 7),
QT_MOC_LITERAL(6, 77, 6),
QT_MOC_LITERAL(7, 84, 13),
QT_MOC_LITERAL(8, 98, 9),
QT_MOC_LITERAL(9, 108, 6),
QT_MOC_LITERAL(10, 115, 4),
QT_MOC_LITERAL(11, 120, 11)
    },
    "QtCommercialChart::ChartDataSet\0"
    "seriesAdded\0\0QAbstractSeries*\0series\0"
    "Domain*\0domain\0seriesRemoved\0axisAdded\0"
    "QAxis*\0axis\0axisRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__ChartDataSet[] = {

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
       1,    2,   34,    2, 0x06 /* Public */,
       7,    1,   39,    2, 0x06 /* Public */,
       8,    2,   42,    2, 0x06 /* Public */,
      11,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 5,   10,    6,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void QtCommercialChart::ChartDataSet::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChartDataSet *_t = static_cast<ChartDataSet *>(_o);
        switch (_id) {
        case 0: _t->seriesAdded((*reinterpret_cast< QAbstractSeries*(*)>(_a[1])),(*reinterpret_cast< Domain*(*)>(_a[2]))); break;
        case 1: _t->seriesRemoved((*reinterpret_cast< QAbstractSeries*(*)>(_a[1]))); break;
        case 2: _t->axisAdded((*reinterpret_cast< QAxis*(*)>(_a[1])),(*reinterpret_cast< Domain*(*)>(_a[2]))); break;
        case 3: _t->axisRemoved((*reinterpret_cast< QAxis*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Domain* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSeries* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Domain* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChartDataSet::*_t)(QAbstractSeries * , Domain * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChartDataSet::seriesAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (ChartDataSet::*_t)(QAbstractSeries * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChartDataSet::seriesRemoved)) {
                *result = 1;
            }
        }
        {
            typedef void (ChartDataSet::*_t)(QAxis * , Domain * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChartDataSet::axisAdded)) {
                *result = 2;
            }
        }
        {
            typedef void (ChartDataSet::*_t)(QAxis * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChartDataSet::axisRemoved)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QtCommercialChart::ChartDataSet::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__ChartDataSet.data,
      qt_meta_data_QtCommercialChart__ChartDataSet,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::ChartDataSet::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::ChartDataSet::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__ChartDataSet.stringdata))
        return static_cast<void*>(const_cast< ChartDataSet*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::ChartDataSet::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::ChartDataSet::seriesAdded(QAbstractSeries * _t1, Domain * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::ChartDataSet::seriesRemoved(QAbstractSeries * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCommercialChart::ChartDataSet::axisAdded(QAxis * _t1, Domain * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCommercialChart::ChartDataSet::axisRemoved(QAxis * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
