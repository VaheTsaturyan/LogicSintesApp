/****************************************************************************
** Meta object code from reading C++ file 'mainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Application/inc/GUI/mainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui__MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__MainWindow_t qt_meta_stringdata_gui__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 15), // "gui::MainWindow"
QT_MOC_LITERAL(1, 16, 7), // "addGate"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "gateType"
QT_MOC_LITERAL(4, 34, 10), // "addConnect"
QT_MOC_LITERAL(5, 45, 14), // "AGraphicsItem*"
QT_MOC_LITERAL(6, 60, 6), // "ithemC"
QT_MOC_LITERAL(7, 67, 6), // "ithemI"
QT_MOC_LITERAL(8, 74, 13), // "removeConnect"
QT_MOC_LITERAL(9, 88, 3), // "id1"
QT_MOC_LITERAL(10, 92, 3), // "id2"
QT_MOC_LITERAL(11, 96, 10), // "removeGate"
QT_MOC_LITERAL(12, 107, 2), // "id"
QT_MOC_LITERAL(13, 110, 10), // "updateView"
QT_MOC_LITERAL(14, 121, 7), // "newFile"
QT_MOC_LITERAL(15, 129, 8), // "openFile"
QT_MOC_LITERAL(16, 138, 8), // "saveFile"
QT_MOC_LITERAL(17, 147, 16), // "addProjectDialog"
QT_MOC_LITERAL(18, 164, 5), // "zoomH"
QT_MOC_LITERAL(19, 170, 9), // "eventName"
QT_MOC_LITERAL(20, 180, 12), // "addLogicGate"
QT_MOC_LITERAL(21, 193, 21), // "updateUndoRedoActions"
QT_MOC_LITERAL(22, 215, 11), // "redoActions"
QT_MOC_LITERAL(23, 227, 10), // "actionName"
QT_MOC_LITERAL(24, 238, 11), // "conectFiltr"
QT_MOC_LITERAL(25, 250, 11), // "sourcePoint"
QT_MOC_LITERAL(26, 262, 11) // "targetPoint"

    },
    "gui::MainWindow\0addGate\0\0gateType\0"
    "addConnect\0AGraphicsItem*\0ithemC\0"
    "ithemI\0removeConnect\0id1\0id2\0removeGate\0"
    "id\0updateView\0newFile\0openFile\0saveFile\0"
    "addProjectDialog\0zoomH\0eventName\0"
    "addLogicGate\0updateUndoRedoActions\0"
    "redoActions\0actionName\0conectFiltr\0"
    "sourcePoint\0targetPoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    2,   87,    2, 0x06 /* Public */,
       8,    2,   92,    2, 0x06 /* Public */,
      11,    1,   97,    2, 0x06 /* Public */,
      13,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    1,  105,    2, 0x08 /* Private */,
      20,    1,  108,    2, 0x08 /* Private */,
      21,    0,  111,    2, 0x08 /* Private */,
      22,    1,  112,    2, 0x08 /* Private */,
      24,    2,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    9,   10,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,   25,   26,

       0        // eod
};

void gui::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addGate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->addConnect((*reinterpret_cast< AGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< AGraphicsItem*(*)>(_a[2]))); break;
        case 2: _t->removeConnect((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 3: _t->removeGate((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->updateView(); break;
        case 5: _t->newFile(); break;
        case 6: _t->openFile(); break;
        case 7: _t->saveFile(); break;
        case 8: _t->addProjectDialog(); break;
        case 9: _t->zoomH((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->addLogicGate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->updateUndoRedoActions(); break;
        case 12: _t->redoActions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->conectFiltr((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::addGate)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(AGraphicsItem * , AGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::addConnect)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(unsigned int , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::removeConnect)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::removeGate)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateView)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_gui__MainWindow.data,
    qt_meta_data_gui__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int gui::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void gui::MainWindow::addGate(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gui::MainWindow::addConnect(AGraphicsItem * _t1, AGraphicsItem * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gui::MainWindow::removeConnect(unsigned int _t1, unsigned int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gui::MainWindow::removeGate(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gui::MainWindow::updateView()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
