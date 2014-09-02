/****************************************************************************
** Meta object code from reading C++ file 'qabstractseries.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qabstractseries.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractseries.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QAbstractSeries_t {
    QByteArrayData data[11];
    char stringdata[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QAbstractSeries_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QAbstractSeries_t qt_meta_stringdata_QtCommercialChart__QAbstractSeries = {
    {
QT_MOC_LITERAL(0, 0, 34),
QT_MOC_LITERAL(1, 35, 4),
QT_MOC_LITERAL(2, 40, 11),
QT_MOC_LITERAL(3, 52, 14),
QT_MOC_LITERAL(4, 67, 14),
QT_MOC_LITERAL(5, 82, 13),
QT_MOC_LITERAL(6, 96, 20),
QT_MOC_LITERAL(7, 117, 20),
QT_MOC_LITERAL(8, 138, 13),
QT_MOC_LITERAL(9, 152, 17),
QT_MOC_LITERAL(10, 170, 16)
    },
    "QtCommercialChart::QAbstractSeries\0"
    "name\0QSeriesType\0SeriesTypeLine\0"
    "SeriesTypeArea\0SeriesTypeBar\0"
    "SeriesTypeStackedBar\0SeriesTypePercentBar\0"
    "SeriesTypePie\0SeriesTypeScatter\0"
    "SeriesTypeSpline"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QAbstractSeries[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,

 // enums: name, flags, count, data
       2, 0x0,    8,   21,

 // enum data: key, value
       3, uint(QtCommercialChart::QAbstractSeries::SeriesTypeLine),
       4, uint(QtCommercialChart::QAbstractSeries::SeriesTypeArea),
       5, uint(QtCommercialChart::QAbstractSeries::SeriesTypeBar),
       6, uint(QtCommercialChart::QAbstractSeries::SeriesTypeStackedBar),
       7, uint(QtCommercialChart::QAbstractSeries::SeriesTypePercentBar),
       8, uint(QtCommercialChart::QAbstractSeries::SeriesTypePie),
       9, uint(QtCommercialChart::QAbstractSeries::SeriesTypeScatter),
      10, uint(QtCommercialChart::QAbstractSeries::SeriesTypeSpline),

       0        // eod
};

void QtCommercialChart::QAbstractSeries::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtCommercialChart::QAbstractSeries::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QAbstractSeries.data,
      qt_meta_data_QtCommercialChart__QAbstractSeries,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QAbstractSeries::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QAbstractSeries::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QAbstractSeries.stringdata))
        return static_cast<void*>(const_cast< QAbstractSeries*>(this));
    return QObject::qt_metacast(_clname);
}

int QtCommercialChart::QAbstractSeries::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = name(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
