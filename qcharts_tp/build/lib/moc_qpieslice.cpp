/****************************************************************************
** Meta object code from reading C++ file 'qpieslice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/piechart/qpieslice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpieslice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QPieSlice_t {
    QByteArrayData data[8];
    char stringdata[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QPieSlice_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QPieSlice_t qt_meta_stringdata_QtCommercialChart__QPieSlice = {
    {
QT_MOC_LITERAL(0, 0, 28),
QT_MOC_LITERAL(1, 29, 7),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 7),
QT_MOC_LITERAL(4, 46, 5),
QT_MOC_LITERAL(5, 52, 7),
QT_MOC_LITERAL(6, 60, 5),
QT_MOC_LITERAL(7, 66, 5)
    },
    "QtCommercialChart::QPieSlice\0clicked\0"
    "\0hovered\0state\0changed\0label\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QPieSlice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       5,    0,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495103,
       7, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       2,
       2,

       0        // eod
};

void QtCommercialChart::QPieSlice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPieSlice *_t = static_cast<QPieSlice *>(_o);
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPieSlice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSlice::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (QPieSlice::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSlice::hovered)) {
                *result = 1;
            }
        }
        {
            typedef void (QPieSlice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSlice::changed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QPieSlice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QPieSlice.data,
      qt_meta_data_QtCommercialChart__QPieSlice,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QPieSlice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QPieSlice::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QPieSlice.stringdata))
        return static_cast<void*>(const_cast< QPieSlice*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::QPieSlice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = label(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = value(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: setValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtCommercialChart::QPieSlice::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtCommercialChart::QPieSlice::hovered(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCommercialChart::QPieSlice::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
