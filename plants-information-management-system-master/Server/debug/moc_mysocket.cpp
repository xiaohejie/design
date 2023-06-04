/****************************************************************************
** Meta object code from reading C++ file 'mysocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mysocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mysocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mysocket_t {
    QByteArrayData data[13];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mysocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mysocket_t qt_meta_stringdata_Mysocket = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Mysocket"
QT_MOC_LITERAL(1, 9, 22), // "clientDisconnectSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "sendStateDisplaySignal"
QT_MOC_LITERAL(4, 56, 3), // "msg"
QT_MOC_LITERAL(5, 60, 4), // "info"
QT_MOC_LITERAL(6, 65, 21), // "sendInfoDisplaySignal"
QT_MOC_LITERAL(7, 87, 10), // "clientInfo"
QT_MOC_LITERAL(8, 98, 2), // "ip"
QT_MOC_LITERAL(9, 101, 8), // "turninfo"
QT_MOC_LITERAL(10, 110, 3), // "mes"
QT_MOC_LITERAL(11, 114, 11), // "reveiveData"
QT_MOC_LITERAL(12, 126, 20) // "clientDisconnectSlot"

    },
    "Mysocket\0clientDisconnectSignal\0\0"
    "sendStateDisplaySignal\0msg\0info\0"
    "sendInfoDisplaySignal\0clientInfo\0ip\0"
    "turninfo\0mes\0reveiveData\0clientDisconnectSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mysocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    2,   45,    2, 0x06 /* Public */,
       6,    2,   50,    2, 0x06 /* Public */,
       9,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   58,    2, 0x0a /* Public */,
      12,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Mysocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mysocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientDisconnectSignal(); break;
        case 1: _t->sendStateDisplaySignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->sendInfoDisplaySignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->turninfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->reveiveData(); break;
        case 5: _t->clientDisconnectSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mysocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mysocket::clientDisconnectSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Mysocket::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mysocket::sendStateDisplaySignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Mysocket::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mysocket::sendInfoDisplaySignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Mysocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mysocket::turninfo)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mysocket::staticMetaObject = { {
    QMetaObject::SuperData::link<QTcpSocket::staticMetaObject>(),
    qt_meta_stringdata_Mysocket.data,
    qt_meta_data_Mysocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mysocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mysocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mysocket.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int Mysocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Mysocket::clientDisconnectSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Mysocket::sendStateDisplaySignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Mysocket::sendInfoDisplaySignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Mysocket::turninfo(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
