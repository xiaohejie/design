/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[30];
    char stringdata0[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 24), // "closeClientConnectSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "disconnectCommand"
QT_MOC_LITERAL(4, 51, 21), // "clientDiconnectSignal"
QT_MOC_LITERAL(5, 73, 2), // "ID"
QT_MOC_LITERAL(6, 76, 20), // "sendInfoWidgetSignal"
QT_MOC_LITERAL(7, 97, 4), // "info"
QT_MOC_LITERAL(8, 102, 25), // "clientAddressWidgetSignal"
QT_MOC_LITERAL(9, 128, 11), // "deleteIndex"
QT_MOC_LITERAL(10, 140, 22), // "closeClientConnectSlot"
QT_MOC_LITERAL(11, 163, 8), // "clientIp"
QT_MOC_LITERAL(12, 172, 10), // "clientPort"
QT_MOC_LITERAL(13, 183, 17), // "current_date_time"
QT_MOC_LITERAL(14, 201, 19), // "displayInfoTGUISlot"
QT_MOC_LITERAL(15, 221, 3), // "CIP"
QT_MOC_LITERAL(16, 225, 5), // "CPort"
QT_MOC_LITERAL(17, 231, 5), // "state"
QT_MOC_LITERAL(18, 237, 12), // "current_time"
QT_MOC_LITERAL(19, 250, 10), // "deleteInfo"
QT_MOC_LITERAL(20, 261, 21), // "infoTranferButtonSlot"
QT_MOC_LITERAL(21, 283, 20), // "sendStateDisplaySlot"
QT_MOC_LITERAL(22, 304, 3), // "msg"
QT_MOC_LITERAL(23, 308, 19), // "sendInfoDisplaySlot"
QT_MOC_LITERAL(24, 328, 10), // "clientInfo"
QT_MOC_LITERAL(25, 339, 2), // "ip"
QT_MOC_LITERAL(26, 342, 17), // "clientAddressSlot"
QT_MOC_LITERAL(27, 360, 2), // "IP"
QT_MOC_LITERAL(28, 363, 20), // "on_rizhisave_clicked"
QT_MOC_LITERAL(29, 384, 20) // "on_riziclear_clicked"

    },
    "Widget\0closeClientConnectSignal\0\0"
    "disconnectCommand\0clientDiconnectSignal\0"
    "ID\0sendInfoWidgetSignal\0info\0"
    "clientAddressWidgetSignal\0deleteIndex\0"
    "closeClientConnectSlot\0clientIp\0"
    "clientPort\0current_date_time\0"
    "displayInfoTGUISlot\0CIP\0CPort\0state\0"
    "current_time\0deleteInfo\0infoTranferButtonSlot\0"
    "sendStateDisplaySlot\0msg\0sendInfoDisplaySlot\0"
    "clientInfo\0ip\0clientAddressSlot\0IP\0"
    "on_rizhisave_clicked\0on_riziclear_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       8,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    3,   91,    2, 0x0a /* Public */,
      14,    4,   98,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,
      20,    0,  108,    2, 0x0a /* Public */,
      21,    2,  109,    2, 0x0a /* Public */,
      23,    2,  114,    2, 0x0a /* Public */,
      26,    2,  119,    2, 0x0a /* Public */,
      28,    0,  124,    2, 0x08 /* Private */,
      29,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QDateTime,   11,   12,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QDateTime,   15,   16,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   22,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   27,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeClientConnectSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->clientDiconnectSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendInfoWidgetSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->clientAddressWidgetSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->closeClientConnectSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3]))); break;
        case 5: _t->displayInfoTGUISlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QDateTime(*)>(_a[4]))); break;
        case 6: _t->deleteInfo(); break;
        case 7: _t->infoTranferButtonSlot(); break;
        case 8: _t->sendStateDisplaySlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->sendInfoDisplaySlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->clientAddressSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_rizhisave_clicked(); break;
        case 12: _t->on_riziclear_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::closeClientConnectSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Widget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::clientDiconnectSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Widget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::sendInfoWidgetSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Widget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::clientAddressWidgetSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Widget::closeClientConnectSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::clientDiconnectSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::sendInfoWidgetSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Widget::clientAddressWidgetSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
