/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mythread_t {
    QByteArrayData data[26];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mythread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mythread_t qt_meta_stringdata_Mythread = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Mythread"
QT_MOC_LITERAL(1, 9, 22), // "addClientIPToGUISignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "CIP"
QT_MOC_LITERAL(4, 37, 5), // "CPort"
QT_MOC_LITERAL(5, 43, 2), // "ID"
QT_MOC_LITERAL(6, 46, 5), // "state"
QT_MOC_LITERAL(7, 52, 24), // "closeClientConnectSignal"
QT_MOC_LITERAL(8, 77, 8), // "clientIp"
QT_MOC_LITERAL(9, 86, 10), // "clientPort"
QT_MOC_LITERAL(10, 97, 17), // "current_date_time"
QT_MOC_LITERAL(11, 115, 22), // "clientDisconnectSignal"
QT_MOC_LITERAL(12, 138, 14), // "sendInfoSignal"
QT_MOC_LITERAL(13, 153, 4), // "info"
QT_MOC_LITERAL(14, 158, 22), // "displayInfoToGUISignal"
QT_MOC_LITERAL(15, 181, 12), // "current_time"
QT_MOC_LITERAL(16, 194, 22), // "sendStateDisplaySignal"
QT_MOC_LITERAL(17, 217, 3), // "msg"
QT_MOC_LITERAL(18, 221, 21), // "sendInfoDisplaySignal"
QT_MOC_LITERAL(19, 243, 10), // "clientInfo"
QT_MOC_LITERAL(20, 254, 2), // "ip"
QT_MOC_LITERAL(21, 257, 22), // "closeClientConnectSlot"
QT_MOC_LITERAL(22, 280, 20), // "clientDisconnectSlot"
QT_MOC_LITERAL(23, 301, 12), // "sendInfoSlot"
QT_MOC_LITERAL(24, 314, 20), // "sendStateDisplaySlot"
QT_MOC_LITERAL(25, 335, 19) // "sendInfoDisplaySlot"

    },
    "Mythread\0addClientIPToGUISignal\0\0CIP\0"
    "CPort\0ID\0state\0closeClientConnectSignal\0"
    "clientIp\0clientPort\0current_date_time\0"
    "clientDisconnectSignal\0sendInfoSignal\0"
    "info\0displayInfoToGUISignal\0current_time\0"
    "sendStateDisplaySignal\0msg\0"
    "sendInfoDisplaySignal\0clientInfo\0ip\0"
    "closeClientConnectSlot\0clientDisconnectSlot\0"
    "sendInfoSlot\0sendStateDisplaySlot\0"
    "sendInfoDisplaySlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mythread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   74,    2, 0x06 /* Public */,
       7,    3,   83,    2, 0x06 /* Public */,
      11,    0,   90,    2, 0x06 /* Public */,
      12,    1,   91,    2, 0x06 /* Public */,
      14,    4,   94,    2, 0x06 /* Public */,
      16,    2,  103,    2, 0x06 /* Public */,
      18,    2,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    0,  113,    2, 0x0a /* Public */,
      22,    0,  114,    2, 0x0a /* Public */,
      23,    1,  115,    2, 0x0a /* Public */,
      24,    2,  118,    2, 0x0a /* Public */,
      25,    2,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QDateTime,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QDateTime,    3,    4,    6,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   17,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,

       0        // eod
};

void Mythread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Mythread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addClientIPToGUISignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->closeClientConnectSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3]))); break;
        case 2: _t->clientDisconnectSignal(); break;
        case 3: _t->sendInfoSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->displayInfoToGUISignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QDateTime(*)>(_a[4]))); break;
        case 5: _t->sendStateDisplaySignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->sendInfoDisplaySignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->closeClientConnectSlot(); break;
        case 8: _t->clientDisconnectSlot(); break;
        case 9: _t->sendInfoSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sendStateDisplaySlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->sendInfoDisplaySlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Mythread::*)(QString , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mythread::addClientIPToGUISignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Mythread::*)(QString , int , QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mythread::closeClientConnectSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Mythread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mythread::clientDisconnectSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Mythread::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mythread::sendInfoSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Mythread::*)(QString , int , int , QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mythread::displayInfoToGUISignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Mythread::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mythread::sendStateDisplaySignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Mythread::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Mythread::sendInfoDisplaySignal)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mythread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_Mythread.data,
    qt_meta_data_Mythread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Mythread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mythread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mythread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int Mythread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Mythread::addClientIPToGUISignal(QString _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Mythread::closeClientConnectSignal(QString _t1, int _t2, QDateTime _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Mythread::clientDisconnectSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Mythread::sendInfoSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Mythread::displayInfoToGUISignal(QString _t1, int _t2, int _t3, QDateTime _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Mythread::sendStateDisplaySignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Mythread::sendInfoDisplaySignal(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
