/****************************************************************************
** Meta object code from reading C++ file 'SAChartDatasViewWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../signA/widget/SAChartDatasViewWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAChartDatasViewWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAChartDatasViewWidget_t {
    QByteArrayData data[16];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAChartDatasViewWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAChartDatasViewWidget_t qt_meta_stringdata_SAChartDatasViewWidget = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SAChartDatasViewWidget"
QT_MOC_LITERAL(1, 23, 28), // "onTreeViewCurPlotItemClicked"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 65, 5), // "index"
QT_MOC_LITERAL(5, 71, 12), // "onChartAdded"
QT_MOC_LITERAL(6, 84, 8), // "QwtPlot*"
QT_MOC_LITERAL(7, 93, 4), // "plot"
QT_MOC_LITERAL(8, 98, 15), // "onFigureDestroy"
QT_MOC_LITERAL(9, 114, 3), // "obj"
QT_MOC_LITERAL(10, 118, 37), // "onTableViewCustomContextMenuR..."
QT_MOC_LITERAL(11, 156, 3), // "pos"
QT_MOC_LITERAL(12, 160, 23), // "onActionInsertTriggered"
QT_MOC_LITERAL(13, 184, 23), // "onActionDeleteTriggered"
QT_MOC_LITERAL(14, 208, 22), // "onActionPasteTriggered"
QT_MOC_LITERAL(15, 231, 21) // "onActionCopyTriggered"

    },
    "SAChartDatasViewWidget\0"
    "onTreeViewCurPlotItemClicked\0\0QModelIndex\0"
    "index\0onChartAdded\0QwtPlot*\0plot\0"
    "onFigureDestroy\0obj\0"
    "onTableViewCustomContextMenuRequested\0"
    "pos\0onActionInsertTriggered\0"
    "onActionDeleteTriggered\0onActionPasteTriggered\0"
    "onActionCopyTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAChartDatasViewWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       5,    1,   57,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    0,   67,    2, 0x08 /* Private */,
      14,    0,   68,    2, 0x08 /* Private */,
      15,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void, QMetaType::QPoint,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SAChartDatasViewWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SAChartDatasViewWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTreeViewCurPlotItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onChartAdded((*reinterpret_cast< QwtPlot*(*)>(_a[1]))); break;
        case 2: _t->onFigureDestroy((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->onTableViewCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->onActionInsertTriggered(); break;
        case 5: _t->onActionDeleteTriggered(); break;
        case 6: _t->onActionPasteTriggered(); break;
        case 7: _t->onActionCopyTriggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SAChartDatasViewWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SAChartDatasViewWidget.data,
    qt_meta_data_SAChartDatasViewWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SAChartDatasViewWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAChartDatasViewWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAChartDatasViewWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAChartDatasViewWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
