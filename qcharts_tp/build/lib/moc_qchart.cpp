/****************************************************************************
** Meta object code from reading C++ file 'qchart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/qchart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qchart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtCommercialChart__QChart_t {
    QByteArrayData data[9];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCommercialChart__QChart_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCommercialChart__QChart_t qt_meta_stringdata_QtCommercialChart__QChart = {
    {
QT_MOC_LITERAL(0, 0, 25),
QT_MOC_LITERAL(1, 26, 10),
QT_MOC_LITERAL(2, 37, 15),
QT_MOC_LITERAL(3, 53, 22),
QT_MOC_LITERAL(4, 76, 14),
QT_MOC_LITERAL(5, 91, 19),
QT_MOC_LITERAL(6, 111, 17),
QT_MOC_LITERAL(7, 129, 22),
QT_MOC_LITERAL(8, 152, 17)
    },
    "QtCommercialChart::QChart\0ChartTheme\0"
    "ChartThemeLight\0ChartThemeBlueCerulean\0"
    "ChartThemeDark\0ChartThemeBrownSand\0"
    "ChartThemeBlueNcs\0ChartThemeHighContrast\0"
    "ChartThemeBlueIcy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCommercialChart__QChart[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    7,   18,

 // enum data: key, value
       2, uint(QtCommercialChart::QChart::ChartThemeLight),
       3, uint(QtCommercialChart::QChart::ChartThemeBlueCerulean),
       4, uint(QtCommercialChart::QChart::ChartThemeDark),
       5, uint(QtCommercialChart::QChart::ChartThemeBrownSand),
       6, uint(QtCommercialChart::QChart::ChartThemeBlueNcs),
       7, uint(QtCommercialChart::QChart::ChartThemeHighContrast),
       8, uint(QtCommercialChart::QChart::ChartThemeBlueIcy),

       0        // eod
};

void QtCommercialChart::QChart::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtCommercialChart::QChart::staticMetaObject = {
    { &QGraphicsWidget::staticMetaObject, qt_meta_stringdata_QtCommercialChart__QChart.data,
      qt_meta_data_QtCommercialChart__QChart,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtCommercialChart::QChart::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommercialChart::QChart::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtCommercialChart__QChart.stringdata))
        return static_cast<void*>(const_cast< QChart*>(this));
    return QGraphicsWidget::qt_metacast(_clname);
}

int QtCommercialChart::QChart::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
