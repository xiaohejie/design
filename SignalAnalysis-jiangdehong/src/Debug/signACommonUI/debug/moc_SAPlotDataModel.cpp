/****************************************************************************
** Meta object code from reading C++ file 'SAPlotDataModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../signACommonUI/SAPlotDataModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAPlotDataModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAPlotDataModel_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAPlotDataModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAPlotDataModel_t qt_meta_stringdata_SAPlotDataModel = {
    {
QT_MOC_LITERAL(0, 0, 15) // "SAPlotDataModel"

    },
    "SAPlotDataModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAPlotDataModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void SAPlotDataModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SAPlotDataModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QwtPlotItemDataModel::staticMetaObject>(),
    qt_meta_stringdata_SAPlotDataModel.data,
    qt_meta_data_SAPlotDataModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SAPlotDataModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAPlotDataModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAPlotDataModel.stringdata0))
        return static_cast<void*>(this);
    return QwtPlotItemDataModel::qt_metacast(_clname);
}

int SAPlotDataModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlotItemDataModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
