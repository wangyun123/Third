/****************************************************************************
** Meta object code from reading C++ file 'qxyseries_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/xychart/qxyseries_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxyseries_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QXYSeriesPrivate_t {
    QByteArrayData data[7];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QXYSeriesPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QXYSeriesPrivate_t qt_meta_stringdata_QtCommercialChart__QXYSeriesPrivate = {
    {
QT_MOC_LITERAL(0, 0, 35),
QT_MOC_LITERAL(1, 36, 7),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 13),
QT_MOC_LITERAL(4, 59, 5),
QT_MOC_LITERAL(5, 65, 12),
QT_MOC_LITERAL(6, 78, 10)
    },
    "QtCommercialChart::QXYSeriesPrivate\0"
    "updated\0\0pointReplaced\0index\0pointRemoved\0"
    "pointAdded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QXYSeriesPrivate[] = {

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
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    1,   38,    2, 0x06 /* Public */,
       6,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void QtCommercialChart::QXYSeriesPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXYSeriesPrivate *_t = static_cast<QXYSeriesPrivate *>(_o);
        switch (_id) {
        case 0: _t->updated(); break;
        case 1: _t->pointReplaced((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pointRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->pointAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXYSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXYSeriesPrivate::updated)) {
                *result = 0;
            }
        }
        {
            typedef void (QXYSeriesPrivate::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXYSeriesPrivate::pointReplaced)) {
                *result = 1;
            }
        }
        {
            typedef void (QXYSeriesPrivate::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXYSeriesPrivate::pointRemoved)) {
                *result = 2;
            }
        }
        {
            typedef void (QXYSeriesPrivate::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXYSeriesPrivate::pointAdded)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QXYSeriesPrivate::staticMetaObject = {
    { &QAbstractSeriesPrivate::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QXYSeriesPrivate.data,
      qt_meta_data_QtCommercialChart__QXYSeriesPrivate,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QXYSeriesPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QXYSeriesPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QXYSeriesPrivate.stringdata))
        return static_cast<void*>(const_cast< QXYSeriesPrivate*>(this));
    return QAbstractSeriesPrivate::qt_metacast(_clname);
}

int QtCommercialChart::QXYSeriesPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeriesPrivate::qt_metacall(_c, _id, _a);
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
void QtCommercialChart::QXYSeriesPrivate::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtCommercialChart::QXYSeriesPrivate::pointReplaced(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCommercialChart::QXYSeriesPrivate::pointRemoved(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCommercialChart::QXYSeriesPrivate::pointAdded(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
