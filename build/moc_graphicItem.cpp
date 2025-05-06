/****************************************************************************
** Meta object code from reading C++ file 'graphicItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Application/inc/GUI/Components/graphicItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui__AGraphicsItem_t {
    QByteArrayData data[21];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__AGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__AGraphicsItem_t qt_meta_stringdata_gui__AGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "gui::AGraphicsItem"
QT_MOC_LITERAL(1, 19, 12), // "scaleChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 5), // "scale"
QT_MOC_LITERAL(4, 39, 18), // "mouseButtonPressed"
QT_MOC_LITERAL(5, 58, 8), // "buttonId"
QT_MOC_LITERAL(6, 67, 19), // "mouseButtonReleased"
QT_MOC_LITERAL(7, 87, 3), // "pos"
QT_MOC_LITERAL(8, 91, 21), // "rightButtonQuickPress"
QT_MOC_LITERAL(9, 113, 2), // "id"
QT_MOC_LITERAL(10, 116, 15), // "rightButtonHold"
QT_MOC_LITERAL(11, 132, 15), // "positionChanged"
QT_MOC_LITERAL(12, 148, 6), // "itemId"
QT_MOC_LITERAL(13, 155, 14), // "inputSubmitted"
QT_MOC_LITERAL(14, 170, 4), // "text"
QT_MOC_LITERAL(15, 175, 12), // "itemSelected"
QT_MOC_LITERAL(16, 188, 11), // "itemDeleted"
QT_MOC_LITERAL(17, 200, 7), // "scaleUp"
QT_MOC_LITERAL(18, 208, 9), // "scaleDown"
QT_MOC_LITERAL(19, 218, 14), // "setCustomScale"
QT_MOC_LITERAL(20, 233, 24) // "handleRightButtonTimeout"

    },
    "gui::AGraphicsItem\0scaleChanged\0\0scale\0"
    "mouseButtonPressed\0buttonId\0"
    "mouseButtonReleased\0pos\0rightButtonQuickPress\0"
    "id\0rightButtonHold\0positionChanged\0"
    "itemId\0inputSubmitted\0text\0itemSelected\0"
    "itemDeleted\0scaleUp\0scaleDown\0"
    "setCustomScale\0handleRightButtonTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__AGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    2,   85,    2, 0x06 /* Public */,
       8,    1,   90,    2, 0x06 /* Public */,
      10,    1,   93,    2, 0x06 /* Public */,
      11,    2,   96,    2, 0x06 /* Public */,
      13,    2,  101,    2, 0x06 /* Public */,
      15,    1,  106,    2, 0x06 /* Public */,
      16,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  112,    2, 0x0a /* Public */,
      18,    0,  113,    2, 0x0a /* Public */,
      19,    1,  114,    2, 0x0a /* Public */,
      20,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QPointF,    5,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QPointF,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QPointF,   12,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QString,   12,   14,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void, QMetaType::LongLong,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void,

       0        // eod
};

void gui::AGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AGraphicsItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->scaleChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->mouseButtonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->mouseButtonReleased((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 3: _t->rightButtonQuickPress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->rightButtonHold((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 5: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 6: _t->inputSubmitted((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->itemSelected((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->itemDeleted((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->scaleUp(); break;
        case 10: _t->scaleDown(); break;
        case 11: _t->setCustomScale((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 12: _t->handleRightButtonTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AGraphicsItem::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::scaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::mouseButtonPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(int , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::mouseButtonReleased)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::rightButtonQuickPress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::rightButtonHold)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(qint64 , QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::positionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(qint64 , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::inputSubmitted)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::itemSelected)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AGraphicsItem::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AGraphicsItem::itemDeleted)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::AGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_gui__AGraphicsItem.data,
    qt_meta_data_gui__AGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::AGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::AGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__AGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int gui::AGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void gui::AGraphicsItem::scaleChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gui::AGraphicsItem::mouseButtonPressed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gui::AGraphicsItem::mouseButtonReleased(int _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gui::AGraphicsItem::rightButtonQuickPress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gui::AGraphicsItem::rightButtonHold(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gui::AGraphicsItem::positionChanged(qint64 _t1, QPointF _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gui::AGraphicsItem::inputSubmitted(qint64 _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gui::AGraphicsItem::itemSelected(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void gui::AGraphicsItem::itemDeleted(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
struct qt_meta_stringdata_gui__AndGraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__AndGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__AndGraphicsItem_t qt_meta_stringdata_gui__AndGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 20) // "gui::AndGraphicsItem"

    },
    "gui::AndGraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__AndGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::AndGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::AndGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__AndGraphicsItem.data,
    qt_meta_data_gui__AndGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::AndGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::AndGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__AndGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::AndGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__And3GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__And3GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__And3GraphicsItem_t qt_meta_stringdata_gui__And3GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::And3GraphicsItem"

    },
    "gui::And3GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__And3GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::And3GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::And3GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__And3GraphicsItem.data,
    qt_meta_data_gui__And3GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::And3GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::And3GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__And3GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::And3GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__And4GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__And4GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__And4GraphicsItem_t qt_meta_stringdata_gui__And4GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::And4GraphicsItem"

    },
    "gui::And4GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__And4GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::And4GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::And4GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__And4GraphicsItem.data,
    qt_meta_data_gui__And4GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::And4GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::And4GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__And4GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::And4GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__OrGraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__OrGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__OrGraphicsItem_t qt_meta_stringdata_gui__OrGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 19) // "gui::OrGraphicsItem"

    },
    "gui::OrGraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__OrGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::OrGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::OrGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__OrGraphicsItem.data,
    qt_meta_data_gui__OrGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::OrGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::OrGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__OrGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::OrGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Or3GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Or3GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Or3GraphicsItem_t qt_meta_stringdata_gui__Or3GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 20) // "gui::Or3GraphicsItem"

    },
    "gui::Or3GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Or3GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Or3GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Or3GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Or3GraphicsItem.data,
    qt_meta_data_gui__Or3GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Or3GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Or3GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Or3GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Or3GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Or4GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Or4GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Or4GraphicsItem_t qt_meta_stringdata_gui__Or4GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 20) // "gui::Or4GraphicsItem"

    },
    "gui::Or4GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Or4GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Or4GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Or4GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Or4GraphicsItem.data,
    qt_meta_data_gui__Or4GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Or4GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Or4GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Or4GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Or4GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__NandGraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__NandGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__NandGraphicsItem_t qt_meta_stringdata_gui__NandGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::NandGraphicsItem"

    },
    "gui::NandGraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__NandGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::NandGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::NandGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__NandGraphicsItem.data,
    qt_meta_data_gui__NandGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::NandGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::NandGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__NandGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::NandGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Nand3GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Nand3GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Nand3GraphicsItem_t qt_meta_stringdata_gui__Nand3GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 22) // "gui::Nand3GraphicsItem"

    },
    "gui::Nand3GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Nand3GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Nand3GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Nand3GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Nand3GraphicsItem.data,
    qt_meta_data_gui__Nand3GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Nand3GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Nand3GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Nand3GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Nand3GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Nand4GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Nand4GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Nand4GraphicsItem_t qt_meta_stringdata_gui__Nand4GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 22) // "gui::Nand4GraphicsItem"

    },
    "gui::Nand4GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Nand4GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Nand4GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Nand4GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Nand4GraphicsItem.data,
    qt_meta_data_gui__Nand4GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Nand4GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Nand4GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Nand4GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Nand4GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__NorGraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__NorGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__NorGraphicsItem_t qt_meta_stringdata_gui__NorGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 20) // "gui::NorGraphicsItem"

    },
    "gui::NorGraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__NorGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::NorGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::NorGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__NorGraphicsItem.data,
    qt_meta_data_gui__NorGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::NorGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::NorGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__NorGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::NorGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Nor3GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Nor3GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Nor3GraphicsItem_t qt_meta_stringdata_gui__Nor3GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::Nor3GraphicsItem"

    },
    "gui::Nor3GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Nor3GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Nor3GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Nor3GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Nor3GraphicsItem.data,
    qt_meta_data_gui__Nor3GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Nor3GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Nor3GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Nor3GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Nor3GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Nor4GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Nor4GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Nor4GraphicsItem_t qt_meta_stringdata_gui__Nor4GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::Nor4GraphicsItem"

    },
    "gui::Nor4GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Nor4GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Nor4GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Nor4GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Nor4GraphicsItem.data,
    qt_meta_data_gui__Nor4GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Nor4GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Nor4GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Nor4GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Nor4GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__NotGraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__NotGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__NotGraphicsItem_t qt_meta_stringdata_gui__NotGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 20) // "gui::NotGraphicsItem"

    },
    "gui::NotGraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__NotGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::NotGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::NotGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__NotGraphicsItem.data,
    qt_meta_data_gui__NotGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::NotGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::NotGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__NotGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::NotGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__XorGraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__XorGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__XorGraphicsItem_t qt_meta_stringdata_gui__XorGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 20) // "gui::XorGraphicsItem"

    },
    "gui::XorGraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__XorGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::XorGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::XorGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__XorGraphicsItem.data,
    qt_meta_data_gui__XorGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::XorGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::XorGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__XorGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::XorGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Xor3GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Xor3GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Xor3GraphicsItem_t qt_meta_stringdata_gui__Xor3GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::Xor3GraphicsItem"

    },
    "gui::Xor3GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Xor3GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Xor3GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Xor3GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Xor3GraphicsItem.data,
    qt_meta_data_gui__Xor3GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Xor3GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Xor3GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Xor3GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Xor3GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Xor4GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Xor4GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Xor4GraphicsItem_t qt_meta_stringdata_gui__Xor4GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::Xor4GraphicsItem"

    },
    "gui::Xor4GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Xor4GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Xor4GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Xor4GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Xor4GraphicsItem.data,
    qt_meta_data_gui__Xor4GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Xor4GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Xor4GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Xor4GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Xor4GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__XnorGraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__XnorGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__XnorGraphicsItem_t qt_meta_stringdata_gui__XnorGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::XnorGraphicsItem"

    },
    "gui::XnorGraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__XnorGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::XnorGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::XnorGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__XnorGraphicsItem.data,
    qt_meta_data_gui__XnorGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::XnorGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::XnorGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__XnorGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::XnorGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Xnor3GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Xnor3GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Xnor3GraphicsItem_t qt_meta_stringdata_gui__Xnor3GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 22) // "gui::Xnor3GraphicsItem"

    },
    "gui::Xnor3GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Xnor3GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Xnor3GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Xnor3GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Xnor3GraphicsItem.data,
    qt_meta_data_gui__Xnor3GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Xnor3GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Xnor3GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Xnor3GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Xnor3GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Xnor4GraphicsItem_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Xnor4GraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Xnor4GraphicsItem_t qt_meta_stringdata_gui__Xnor4GraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 22) // "gui::Xnor4GraphicsItem"

    },
    "gui::Xnor4GraphicsItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Xnor4GraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Xnor4GraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Xnor4GraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Xnor4GraphicsItem.data,
    qt_meta_data_gui__Xnor4GraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Xnor4GraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Xnor4GraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Xnor4GraphicsItem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Xnor4GraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__InputGraphicIthem_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__InputGraphicIthem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__InputGraphicIthem_t qt_meta_stringdata_gui__InputGraphicIthem = {
    {
QT_MOC_LITERAL(0, 0, 22) // "gui::InputGraphicIthem"

    },
    "gui::InputGraphicIthem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__InputGraphicIthem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::InputGraphicIthem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::InputGraphicIthem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__InputGraphicIthem.data,
    qt_meta_data_gui__InputGraphicIthem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::InputGraphicIthem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::InputGraphicIthem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__InputGraphicIthem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::InputGraphicIthem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__OutputGraphicIthem_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__OutputGraphicIthem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__OutputGraphicIthem_t qt_meta_stringdata_gui__OutputGraphicIthem = {
    {
QT_MOC_LITERAL(0, 0, 23) // "gui::OutputGraphicIthem"

    },
    "gui::OutputGraphicIthem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__OutputGraphicIthem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::OutputGraphicIthem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::OutputGraphicIthem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__OutputGraphicIthem.data,
    qt_meta_data_gui__OutputGraphicIthem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::OutputGraphicIthem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::OutputGraphicIthem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__OutputGraphicIthem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::OutputGraphicIthem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Mux2GraphicIthem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Mux2GraphicIthem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Mux2GraphicIthem_t qt_meta_stringdata_gui__Mux2GraphicIthem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::Mux2GraphicIthem"

    },
    "gui::Mux2GraphicIthem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Mux2GraphicIthem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Mux2GraphicIthem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Mux2GraphicIthem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Mux2GraphicIthem.data,
    qt_meta_data_gui__Mux2GraphicIthem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Mux2GraphicIthem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Mux2GraphicIthem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Mux2GraphicIthem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Mux2GraphicIthem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__Mux4GraphicIthem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__Mux4GraphicIthem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__Mux4GraphicIthem_t qt_meta_stringdata_gui__Mux4GraphicIthem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "gui::Mux4GraphicIthem"

    },
    "gui::Mux4GraphicIthem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__Mux4GraphicIthem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::Mux4GraphicIthem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::Mux4GraphicIthem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__Mux4GraphicIthem.data,
    qt_meta_data_gui__Mux4GraphicIthem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::Mux4GraphicIthem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::Mux4GraphicIthem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__Mux4GraphicIthem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::Mux4GraphicIthem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__HalfAdderGraphicIthem_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__HalfAdderGraphicIthem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__HalfAdderGraphicIthem_t qt_meta_stringdata_gui__HalfAdderGraphicIthem = {
    {
QT_MOC_LITERAL(0, 0, 26) // "gui::HalfAdderGraphicIthem"

    },
    "gui::HalfAdderGraphicIthem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__HalfAdderGraphicIthem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::HalfAdderGraphicIthem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::HalfAdderGraphicIthem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__HalfAdderGraphicIthem.data,
    qt_meta_data_gui__HalfAdderGraphicIthem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::HalfAdderGraphicIthem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::HalfAdderGraphicIthem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__HalfAdderGraphicIthem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::HalfAdderGraphicIthem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_gui__FullAdderGraphicIthem_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__FullAdderGraphicIthem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__FullAdderGraphicIthem_t qt_meta_stringdata_gui__FullAdderGraphicIthem = {
    {
QT_MOC_LITERAL(0, 0, 26) // "gui::FullAdderGraphicIthem"

    },
    "gui::FullAdderGraphicIthem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__FullAdderGraphicIthem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void gui::FullAdderGraphicIthem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject gui::FullAdderGraphicIthem::staticMetaObject = { {
    QMetaObject::SuperData::link<AGraphicsItem::staticMetaObject>(),
    qt_meta_stringdata_gui__FullAdderGraphicIthem.data,
    qt_meta_data_gui__FullAdderGraphicIthem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::FullAdderGraphicIthem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::FullAdderGraphicIthem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__FullAdderGraphicIthem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return AGraphicsItem::qt_metacast(_clname);
}

int gui::FullAdderGraphicIthem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AGraphicsItem::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
