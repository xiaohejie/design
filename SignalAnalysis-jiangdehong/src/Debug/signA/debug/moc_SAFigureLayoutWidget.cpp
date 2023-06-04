/****************************************************************************
** Meta object code from reading C++ file 'SAFigureLayoutWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../signA/widget/SAFigureLayoutWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SAFigureLayoutWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SAFigureLayoutWidget_t {
    QByteArrayData data[25];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SAFigureLayoutWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SAFigureLayoutWidget_t qt_meta_stringdata_SAFigureLayoutWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SAFigureLayoutWidget"
QT_MOC_LITERAL(1, 21, 12), // "itemSelected"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "QwtPlotItem*"
QT_MOC_LITERAL(4, 48, 4), // "item"
QT_MOC_LITERAL(5, 53, 13), // "chartSelected"
QT_MOC_LITERAL(6, 67, 10), // "SAChart2D*"
QT_MOC_LITERAL(7, 78, 5), // "chart"
QT_MOC_LITERAL(8, 84, 18), // "itemVisibleChanged"
QT_MOC_LITERAL(9, 103, 7), // "visible"
QT_MOC_LITERAL(10, 111, 16), // "itemColorChanged"
QT_MOC_LITERAL(11, 128, 3), // "clr"
QT_MOC_LITERAL(12, 132, 11), // "itemRemoved"
QT_MOC_LITERAL(13, 144, 16), // "itemTitleChanged"
QT_MOC_LITERAL(14, 161, 5), // "title"
QT_MOC_LITERAL(15, 167, 17), // "onTreeViewPressed"
QT_MOC_LITERAL(16, 185, 11), // "QModelIndex"
QT_MOC_LITERAL(17, 197, 5), // "index"
QT_MOC_LITERAL(18, 203, 25), // "onToolButtonDeleteClicked"
QT_MOC_LITERAL(19, 229, 2), // "on"
QT_MOC_LITERAL(20, 232, 18), // "onItemValueChanged"
QT_MOC_LITERAL(21, 251, 8), // "plotItem"
QT_MOC_LITERAL(22, 260, 5), // "value"
QT_MOC_LITERAL(23, 266, 4), // "type"
QT_MOC_LITERAL(24, 271, 14) // "onModelReseted"

    },
    "SAFigureLayoutWidget\0itemSelected\0\0"
    "QwtPlotItem*\0item\0chartSelected\0"
    "SAChart2D*\0chart\0itemVisibleChanged\0"
    "visible\0itemColorChanged\0clr\0itemRemoved\0"
    "itemTitleChanged\0title\0onTreeViewPressed\0"
    "QModelIndex\0index\0onToolButtonDeleteClicked\0"
    "on\0onItemValueChanged\0plotItem\0value\0"
    "type\0onModelReseted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SAFigureLayoutWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       8,    2,   70,    2, 0x06 /* Public */,
      10,    2,   75,    2, 0x06 /* Public */,
      12,    2,   80,    2, 0x06 /* Public */,
      13,    2,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   90,    2, 0x08 /* Private */,
      18,    1,   93,    2, 0x08 /* Private */,
      20,    4,   96,    2, 0x08 /* Private */,
      24,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QColor,    4,   11,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 3,    7,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant, QMetaType::Int, 0x80000000 | 16,   21,   22,   23,   17,
    QMetaType::Void,

       0        // eod
};

void SAFigureLayoutWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SAFigureLayoutWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemSelected((*reinterpret_cast< QwtPlotItem*(*)>(_a[1]))); break;
        case 1: _t->chartSelected((*reinterpret_cast< SAChart2D*(*)>(_a[1]))); break;
        case 2: _t->itemVisibleChanged((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->itemColorChanged((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< QColor(*)>(_a[2]))); break;
        case 4: _t->itemRemoved((*reinterpret_cast< SAChart2D*(*)>(_a[1])),(*reinterpret_cast< QwtPlotItem*(*)>(_a[2]))); break;
        case 5: _t->itemTitleChanged((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->onTreeViewPressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->onToolButtonDeleteClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onItemValueChanged((*reinterpret_cast< QwtPlotItem*(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4]))); break;
        case 9: _t->onModelReseted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtPlotItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SAFigureLayoutWidget::*)(QwtPlotItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureLayoutWidget::itemSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SAFigureLayoutWidget::*)(SAChart2D * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureLayoutWidget::chartSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SAFigureLayoutWidget::*)(QwtPlotItem * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureLayoutWidget::itemVisibleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SAFigureLayoutWidget::*)(QwtPlotItem * , QColor );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureLayoutWidget::itemColorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SAFigureLayoutWidget::*)(SAChart2D * , QwtPlotItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureLayoutWidget::itemRemoved)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SAFigureLayoutWidget::*)(QwtPlotItem * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SAFigureLayoutWidget::itemTitleChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SAFigureLayoutWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SAFigureLayoutWidget.data,
    qt_meta_data_SAFigureLayoutWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SAFigureLayoutWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SAFigureLayoutWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SAFigureLayoutWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SAFigureLayoutWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SAFigureLayoutWidget::itemSelected(QwtPlotItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SAFigureLayoutWidget::chartSelected(SAChart2D * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SAFigureLayoutWidget::itemVisibleChanged(QwtPlotItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SAFigureLayoutWidget::itemColorChanged(QwtPlotItem * _t1, QColor _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SAFigureLayoutWidget::itemRemoved(SAChart2D * _t1, QwtPlotItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SAFigureLayoutWidget::itemTitleChanged(QwtPlotItem * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
