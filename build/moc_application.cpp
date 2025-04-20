/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Application/inc/application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyApplication_t {
    QByteArrayData data[19];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyApplication_t qt_meta_stringdata_MyApplication = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MyApplication"
QT_MOC_LITERAL(1, 14, 30), // "SignaLLineAndGraphicSchenBridg"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 11), // "sourcePoint"
QT_MOC_LITERAL(4, 58, 11), // "targetPoint"
QT_MOC_LITERAL(5, 70, 12), // "openJsonFile"
QT_MOC_LITERAL(6, 83, 4), // "path"
QT_MOC_LITERAL(7, 88, 12), // "saveJsonFile"
QT_MOC_LITERAL(8, 101, 11), // "newDocument"
QT_MOC_LITERAL(9, 113, 18), // "addProjectJsonFile"
QT_MOC_LITERAL(10, 132, 13), // "editorControl"
QT_MOC_LITERAL(11, 146, 10), // "actionName"
QT_MOC_LITERAL(12, 157, 12), // "addGateInDoc"
QT_MOC_LITERAL(13, 170, 8), // "gateType"
QT_MOC_LITERAL(14, 179, 24), // "lineAndGraphicSchenBridg"
QT_MOC_LITERAL(15, 204, 10), // "addConnect"
QT_MOC_LITERAL(16, 215, 19), // "gui::AGraphicsItem*"
QT_MOC_LITERAL(17, 235, 6), // "ithemC"
QT_MOC_LITERAL(18, 242, 6) // "ithemI"

    },
    "MyApplication\0SignaLLineAndGraphicSchenBridg\0"
    "\0sourcePoint\0targetPoint\0openJsonFile\0"
    "path\0saveJsonFile\0newDocument\0"
    "addProjectJsonFile\0editorControl\0"
    "actionName\0addGateInDoc\0gateType\0"
    "lineAndGraphicSchenBridg\0addConnect\0"
    "gui::AGraphicsItem*\0ithemC\0ithemI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   64,    2, 0x0a /* Public */,
       7,    1,   67,    2, 0x0a /* Public */,
       8,    1,   70,    2, 0x0a /* Public */,
       9,    1,   73,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,
      14,    2,   82,    2, 0x0a /* Public */,
      15,    2,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QPointF, QMetaType::QPointF,    3,    4,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,

       0        // eod
};

void MyApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyApplication *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SignaLLineAndGraphicSchenBridg((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 1: _t->openJsonFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->saveJsonFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->newDocument((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->addProjectJsonFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->editorControl((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->addGateInDoc((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->lineAndGraphicSchenBridg((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 8: _t->addConnect((*reinterpret_cast< gui::AGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< gui::AGraphicsItem*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< gui::AGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyApplication::*)(const QPointF & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyApplication::SignaLLineAndGraphicSchenBridg)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyApplication::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_MyApplication.data,
    qt_meta_data_MyApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int MyApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MyApplication::SignaLLineAndGraphicSchenBridg(const QPointF & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
