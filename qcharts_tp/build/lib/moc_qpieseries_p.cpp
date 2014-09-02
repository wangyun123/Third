/****************************************************************************
** Meta object code from reading C++ file 'qpieseries_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/piechart/qpieseries_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpieseries_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QPieSeriesPrivate_t {
    QByteArrayData data[21];
    char stringdata[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QPieSeriesPrivate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QPieSeriesPrivate_t qt_meta_stringdata_QtCommercialChart__QPieSeriesPrivate = {
    {
QT_MOC_LITERAL(0, 0, 36),
QT_MOC_LITERAL(1, 37, 5),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 17),
QT_MOC_LITERAL(4, 62, 6),
QT_MOC_LITERAL(5, 69, 7),
QT_MOC_LITERAL(6, 77, 18),
QT_MOC_LITERAL(7, 96, 14),
QT_MOC_LITERAL(8, 111, 12),
QT_MOC_LITERAL(9, 124, 12),
QT_MOC_LITERAL(10, 137, 12),
QT_MOC_LITERAL(11, 150, 5),
QT_MOC_LITERAL(12, 156, 12),
QT_MOC_LITERAL(13, 169, 7),
QT_MOC_LITERAL(14, 177, 11),
QT_MOC_LITERAL(15, 189, 12),
QT_MOC_LITERAL(16, 202, 6),
QT_MOC_LITERAL(17, 209, 5),
QT_MOC_LITERAL(18, 215, 8),
QT_MOC_LITERAL(19, 224, 3),
QT_MOC_LITERAL(20, 228, 3)
    },
    "QtCommercialChart::QPieSeriesPrivate\0"
    "added\0\0QList<QPieSlice*>\0slices\0removed\0"
    "piePositionChanged\0pieSizeChanged\0"
    "sliceChanged\0sliceClicked\0sliceHovered\0"
    "state\0modelUpdated\0topLeft\0bottomRight\0"
    "setRealValue\0qreal&\0value\0newValue\0"
    "max\0min"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QPieSeriesPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       6,    0,   70,    2, 0x06 /* Public */,
       7,    0,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      12,    2,   77,    2, 0x0a /* Public */,
      15,    4,   82,    2, 0x0a /* Public */,
      15,    3,   91,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   13,   14,
    QMetaType::Bool, 0x80000000 | 16, QMetaType::QReal, QMetaType::QReal, QMetaType::QReal,   17,   18,   19,   20,
    QMetaType::Bool, 0x80000000 | 16, QMetaType::QReal, QMetaType::QReal,   17,   18,   19,

       0        // eod
};

void QtCommercialChart::QPieSeriesPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPieSeriesPrivate *_t = static_cast<QPieSeriesPrivate *>(_o);
        switch (_id) {
        case 0: _t->added((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 1: _t->removed((*reinterpret_cast< QList<QPieSlice*>(*)>(_a[1]))); break;
        case 2: _t->piePositionChanged(); break;
        case 3: _t->pieSizeChanged(); break;
        case 4: _t->sliceChanged(); break;
        case 5: _t->sliceClicked(); break;
        case 6: _t->sliceHovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->modelUpdated((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 8: { bool _r = _t->setRealValue((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->setRealValue((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPieSeriesPrivate::*_t)(QList<QPieSlice*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSeriesPrivate::added)) {
                *result = 0;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)(QList<QPieSlice*> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSeriesPrivate::removed)) {
                *result = 1;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSeriesPrivate::piePositionChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPieSeriesPrivate::pieSizeChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QtCommercialChart::QPieSeriesPrivate::staticMetaObject = {
    { &QAbstractSeriesPrivate::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QPieSeriesPrivate.data,
      qt_meta_data_QtCommercialChart__QPieSeriesPrivate,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QPieSeriesPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QPieSeriesPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QPieSeriesPrivate.stringdata))
        return static_cast<void*>(const_cast< QPieSeriesPrivate*>(this));
    return QAbstractSeriesPrivate::qt_metacast(_clname);
}

int QtCommercialChart::QPieSeriesPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeriesPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QtCommercialChart::QPieSeriesPrivate::added(QList<QPieSlice*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCommercialChart::QPieSeriesPrivate::removed(QList<QPieSlice*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCommercialChart::QPieSeriesPrivate::piePositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QtCommercialChart::QPieSeriesPrivate::pieSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
