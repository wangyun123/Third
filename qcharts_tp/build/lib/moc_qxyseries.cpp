/****************************************************************************
** Meta object code from reading C++ file 'qxyseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/xychart/qxyseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxyseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QXYSeries_t {
    QByteArrayData data[8];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QXYSeries_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QXYSeries_t qt_meta_stringdata_QtCommercialChart__QXYSeries = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 7),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 5),
QT_MOC_LITERAL(4, 44, 8),
QT_MOC_LITERAL(5, 53, 12),
QT_MOC_LITERAL(6, 66, 7),
QT_MOC_LITERAL(7, 74, 11)
    },
    "QtCommercialChart::QXYSeries\0clicked\0"
    "\0point\0selected\0modelUpdated\0topLeft\0"
    "bottomRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QXYSeries[] = {

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
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    6,    7,

       0        // eod
};

void QtCommercialChart::QXYSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXYSeries *_t = static_cast<QXYSeries *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->selected(); break;
        case 2: _t->modelUpdated((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXYSeries::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXYSeries::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (QXYSeries::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXYSeries::selected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QXYSeries::staticMetaObject = {
    { &QAbstractSeries::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QXYSeries.data,
      qt_meta_data_QtCommercialChart__QXYSeries,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QXYSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QXYSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QXYSeries.stringdata))
        return static_cast<void*>(const_cast< QXYSeries*>(this));
    return QAbstractSeries::qt_metacast(_clname);
}

int QtCommercialChart::QXYSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeries::qt_metacall(_c, _id, _a);
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
void QtCommercialChart::QXYSeries::clicked(const QPointF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::QXYSeries::selected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
