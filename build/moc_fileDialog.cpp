/****************************************************************************
** Meta object code from reading C++ file 'fileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Application/inc/GUI/Components/fileDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui__SaveJsonFileDialog_t {
    QByteArrayData data[7];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__SaveJsonFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__SaveJsonFileDialog_t qt_meta_stringdata_gui__SaveJsonFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "gui::SaveJsonFileDialog"
QT_MOC_LITERAL(1, 24, 20), // "jsonFilePathSelected"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "fullPath"
QT_MOC_LITERAL(4, 55, 12), // "selectFolder"
QT_MOC_LITERAL(5, 68, 13), // "validateInput"
QT_MOC_LITERAL(6, 82, 16) // "emitSelectedPath"

    },
    "gui::SaveJsonFileDialog\0jsonFilePathSelected\0"
    "\0fullPath\0selectFolder\0validateInput\0"
    "emitSelectedPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__SaveJsonFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gui::SaveJsonFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveJsonFileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonFilePathSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectFolder(); break;
        case 2: _t->validateInput(); break;
        case 3: _t->emitSelectedPath(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SaveJsonFileDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SaveJsonFileDialog::jsonFilePathSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::SaveJsonFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_gui__SaveJsonFileDialog.data,
    qt_meta_data_gui__SaveJsonFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::SaveJsonFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::SaveJsonFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__SaveJsonFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gui::SaveJsonFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void gui::SaveJsonFileDialog::jsonFilePathSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_gui__JsonFileDialog_t {
    QByteArrayData data[9];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__JsonFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__JsonFileDialog_t qt_meta_stringdata_gui__JsonFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "gui::JsonFileDialog"
QT_MOC_LITERAL(1, 20, 16), // "jsonFileSelected"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "filePath"
QT_MOC_LITERAL(4, 47, 12), // "folderOpened"
QT_MOC_LITERAL(5, 60, 10), // "folderName"
QT_MOC_LITERAL(6, 71, 19), // "handleFileSelection"
QT_MOC_LITERAL(7, 91, 4), // "path"
QT_MOC_LITERAL(8, 96, 21) // "handleDirectoryChange"

    },
    "gui::JsonFileDialog\0jsonFileSelected\0"
    "\0filePath\0folderOpened\0folderName\0"
    "handleFileSelection\0path\0handleDirectoryChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__JsonFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void gui::JsonFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JsonFileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonFileSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->folderOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleFileSelection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleDirectoryChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JsonFileDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonFileDialog::jsonFileSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (JsonFileDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JsonFileDialog::folderOpened)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::JsonFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFileDialog::staticMetaObject>(),
    qt_meta_stringdata_gui__JsonFileDialog.data,
    qt_meta_data_gui__JsonFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::JsonFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::JsonFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__JsonFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QFileDialog::qt_metacast(_clname);
}

int gui::JsonFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
void gui::JsonFileDialog::jsonFileSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gui::JsonFileDialog::folderOpened(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_gui__AddProjectFileDialog_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__AddProjectFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__AddProjectFileDialog_t qt_meta_stringdata_gui__AddProjectFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "gui::AddProjectFileDialog"
QT_MOC_LITERAL(1, 26, 16), // "jsonFileSelected"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8), // "filePath"
QT_MOC_LITERAL(4, 53, 12), // "folderOpened"
QT_MOC_LITERAL(5, 66, 10), // "folderName"
QT_MOC_LITERAL(6, 77, 19), // "handleFileSelection"
QT_MOC_LITERAL(7, 97, 4), // "path"
QT_MOC_LITERAL(8, 102, 21) // "handleDirectoryChange"

    },
    "gui::AddProjectFileDialog\0jsonFileSelected\0"
    "\0filePath\0folderOpened\0folderName\0"
    "handleFileSelection\0path\0handleDirectoryChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__AddProjectFileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x08 /* Private */,
       8,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void gui::AddProjectFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddProjectFileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->jsonFileSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->folderOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleFileSelection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->handleDirectoryChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddProjectFileDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddProjectFileDialog::jsonFileSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddProjectFileDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddProjectFileDialog::folderOpened)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::AddProjectFileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFileDialog::staticMetaObject>(),
    qt_meta_stringdata_gui__AddProjectFileDialog.data,
    qt_meta_data_gui__AddProjectFileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::AddProjectFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::AddProjectFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__AddProjectFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QFileDialog::qt_metacast(_clname);
}

int gui::AddProjectFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
void gui::AddProjectFileDialog::jsonFileSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gui::AddProjectFileDialog::folderOpened(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
