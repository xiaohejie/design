/****************************************************************************
** Meta object code from reading C++ file 'faultdiagnosis.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PasswordLock/faultdiagnosis.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faultdiagnosis.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FaultDiagnosis_t {
    QByteArrayData data[10];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultDiagnosis_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultDiagnosis_t qt_meta_stringdata_FaultDiagnosis = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FaultDiagnosis"
QT_MOC_LITERAL(1, 15, 8), // "subClose"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "curPercent"
QT_MOC_LITERAL(4, 36, 3), // "num"
QT_MOC_LITERAL(5, 40, 28), // "on_pushButton_return_clicked"
QT_MOC_LITERAL(6, 69, 15), // "m_connServerBtn"
QT_MOC_LITERAL(7, 85, 32), // "on_pushButton_chooseFile_clicked"
QT_MOC_LITERAL(8, 118, 30), // "on_pushButton_sendFile_clicked"
QT_MOC_LITERAL(9, 149, 36) // "on_pushButton_startDiagnosis_..."

    },
    "FaultDiagnosis\0subClose\0\0curPercent\0"
    "num\0on_pushButton_return_clicked\0"
    "m_connServerBtn\0on_pushButton_chooseFile_clicked\0"
    "on_pushButton_sendFile_clicked\0"
    "on_pushButton_startDiagnosis_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultDiagnosis[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FaultDiagnosis::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FaultDiagnosis *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->subClose(); break;
        case 1: _t->curPercent((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_return_clicked(); break;
        case 3: _t->m_connServerBtn(); break;
        case 4: _t->on_pushButton_chooseFile_clicked(); break;
        case 5: _t->on_pushButton_sendFile_clicked(); break;
        case 6: _t->on_pushButton_startDiagnosis_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FaultDiagnosis::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FaultDiagnosis::subClose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FaultDiagnosis::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FaultDiagnosis::curPercent)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FaultDiagnosis::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_FaultDiagnosis.data,
    qt_meta_data_FaultDiagnosis,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FaultDiagnosis::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultDiagnosis::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FaultDiagnosis.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FaultDiagnosis::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void FaultDiagnosis::subClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FaultDiagnosis::curPercent(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
