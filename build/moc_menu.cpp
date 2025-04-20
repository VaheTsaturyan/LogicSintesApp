/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Application/inc/GUI/Components/menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui__FileMenu_t {
    QByteArrayData data[6];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__FileMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__FileMenu_t qt_meta_stringdata_gui__FileMenu = {
    {
QT_MOC_LITERAL(0, 0, 13), // "gui::FileMenu"
QT_MOC_LITERAL(1, 14, 16), // "newFileRequested"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "openFileRequested"
QT_MOC_LITERAL(4, 50, 17), // "saveFileRequested"
QT_MOC_LITERAL(5, 68, 13) // "exitRequested"

    },
    "gui::FileMenu\0newFileRequested\0\0"
    "openFileRequested\0saveFileRequested\0"
    "exitRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__FileMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gui::FileMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileMenu *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newFileRequested(); break;
        case 1: _t->openFileRequested(); break;
        case 2: _t->saveFileRequested(); break;
        case 3: _t->exitRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::newFileRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::openFileRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::saveFileRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileMenu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileMenu::exitRequested)) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::FileMenu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenu::staticMetaObject>(),
    qt_meta_stringdata_gui__FileMenu.data,
    qt_meta_data_gui__FileMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::FileMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::FileMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__FileMenu.stringdata0))
        return static_cast<void*>(this);
    return QMenu::qt_metacast(_clname);
}

int gui::FileMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void gui::FileMenu::newFileRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void gui::FileMenu::openFileRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void gui::FileMenu::saveFileRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void gui::FileMenu::exitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
