/****************************************************************************
** Meta object code from reading C++ file 'qbarset_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/barchart/qbarset_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbarset_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QBarSetPrivate_t {
    QByteArrayData data[9];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QBarSetPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QBarSetPrivate_t qt_meta_stringdata_QtCommercialChart__QBarSetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 33),
QT_MOC_LITERAL(1, 34, 7),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 8),
QT_MOC_LITERAL(4, 52, 8),
QT_MOC_LITERAL(5, 61, 16),
QT_MOC_LITERAL(6, 78, 11),
QT_MOC_LITERAL(7, 90, 20),
QT_MOC_LITERAL(8, 111, 7)
    },
    "QtCommercialChart::QBarSetPrivate\0"
    "clicked\0\0category\0selected\0restructuredBars\0"
    "updatedBars\0labelsVisibleChanged\0"
    "visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QBarSetPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    0,   43,    2, 0x06 /* Public */,
       6,    0,   44,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void QtCommercialChart::QBarSetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBarSetPrivate *_t = static_cast<QBarSetPrivate *>(_o);
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->selected(); break;
        case 2: _t->restructuredBars(); break;
        case 3: _t->updatedBars(); break;
        case 4: _t->labelsVisibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QBarSetPrivate::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBarSetPrivate::clicked)) {
                *result = 0;
            }
        }
        {
            typedef void (QBarSetPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBarSetPrivate::selected)) {
                *result = 1;
            }
        }
        {
            typedef void (QBarSetPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBarSetPrivate::restructuredBars)) {
                *result = 2;
            }
        }
        {
            typedef void (QBarSetPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBarSetPrivate::updatedBars)) {
                *result = 3;
            }
        }
        {
            typedef void (QBarSetPrivate::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBarSetPrivate::labelsVisibleChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QBarSetPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QBarSetPrivate.data,
      qt_meta_data_QtCommercialChart__QBarSetPrivate,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QBarSetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QBarSetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QBarSetPrivate.stringdata))
        return static_cast<void*>(const_cast< QBarSetPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::QBarSetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::QBarSetPrivate::clicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::QBarSetPrivate::selected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QtCommercialChart::QBarSetPrivate::restructuredBars()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QtCommercialChart::QBarSetPrivate::updatedBars()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QtCommercialChart::QBarSetPrivate::labelsVisibleChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
