/****************************************************************************
** Meta object code from reading C++ file 'browserwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../plants-information-management-system/browserwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browserwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BrowserWindow_t {
    QByteArrayData data[20];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BrowserWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BrowserWindow_t qt_meta_stringdata_BrowserWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BrowserWindow"
QT_MOC_LITERAL(1, 14, 24), // "handleNewWindowTriggered"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 33), // "handleNewIncognitoWindowTrigg..."
QT_MOC_LITERAL(4, 74, 23), // "handleFileOpenTriggered"
QT_MOC_LITERAL(5, 98, 25), // "handleFindActionTriggered"
QT_MOC_LITERAL(6, 124, 25), // "handleShowWindowTriggered"
QT_MOC_LITERAL(7, 150, 25), // "handleWebViewLoadProgress"
QT_MOC_LITERAL(8, 176, 25), // "handleWebViewTitleChanged"
QT_MOC_LITERAL(9, 202, 5), // "title"
QT_MOC_LITERAL(10, 208, 29), // "handleWebActionEnabledChanged"
QT_MOC_LITERAL(11, 238, 25), // "QWebEnginePage::WebAction"
QT_MOC_LITERAL(12, 264, 6), // "action"
QT_MOC_LITERAL(13, 271, 7), // "enabled"
QT_MOC_LITERAL(14, 279, 23), // "handleDevToolsRequested"
QT_MOC_LITERAL(15, 303, 15), // "QWebEnginePage*"
QT_MOC_LITERAL(16, 319, 6), // "source"
QT_MOC_LITERAL(17, 326, 22), // "handleFindTextFinished"
QT_MOC_LITERAL(18, 349, 24), // "QWebEngineFindTextResult"
QT_MOC_LITERAL(19, 374, 6) // "result"

    },
    "BrowserWindow\0handleNewWindowTriggered\0"
    "\0handleNewIncognitoWindowTriggered\0"
    "handleFileOpenTriggered\0"
    "handleFindActionTriggered\0"
    "handleShowWindowTriggered\0"
    "handleWebViewLoadProgress\0"
    "handleWebViewTitleChanged\0title\0"
    "handleWebActionEnabledChanged\0"
    "QWebEnginePage::WebAction\0action\0"
    "enabled\0handleDevToolsRequested\0"
    "QWebEnginePage*\0source\0handleFindTextFinished\0"
    "QWebEngineFindTextResult\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BrowserWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    1,   69,    2, 0x08 /* Private */,
       8,    1,   72,    2, 0x08 /* Private */,
      10,    2,   75,    2, 0x08 /* Private */,
      14,    1,   80,    2, 0x08 /* Private */,
      17,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool,   12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void BrowserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleNewWindowTriggered(); break;
        case 1: _t->handleNewIncognitoWindowTriggered(); break;
        case 2: _t->handleFileOpenTriggered(); break;
        case 3: _t->handleFindActionTriggered(); break;
        case 4: _t->handleShowWindowTriggered(); break;
        case 5: _t->handleWebViewLoadProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->handleWebViewTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->handleWebActionEnabledChanged((*reinterpret_cast< QWebEnginePage::WebAction(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->handleDevToolsRequested((*reinterpret_cast< QWebEnginePage*(*)>(_a[1]))); break;
        case 9: _t->handleFindTextFinished((*reinterpret_cast< const QWebEngineFindTextResult(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWebEnginePage* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BrowserWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_BrowserWindow.data,
    qt_meta_data_BrowserWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BrowserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BrowserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BrowserWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int BrowserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
