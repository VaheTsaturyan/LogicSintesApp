/****************************************************************************
** Meta object code from reading C++ file 'graphicScen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Application/inc/GUI/Components/graphicScen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graphicScen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gui__CustomGraphicsScene_t {
    QByteArrayData data[19];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui__CustomGraphicsScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui__CustomGraphicsScene_t qt_meta_stringdata_gui__CustomGraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 24), // "gui::CustomGraphicsScene"
QT_MOC_LITERAL(1, 25, 13), // "itemsSelected"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "QVector<qint64>"
QT_MOC_LITERAL(4, 56, 7), // "itemIds"
QT_MOC_LITERAL(5, 64, 14), // "itemsConnected"
QT_MOC_LITERAL(6, 79, 8), // "sourceId"
QT_MOC_LITERAL(7, 88, 8), // "targetId"
QT_MOC_LITERAL(8, 97, 16), // "allItemsSelected"
QT_MOC_LITERAL(9, 114, 21), // "QList<QGraphicsItem*>"
QT_MOC_LITERAL(10, 136, 5), // "items"
QT_MOC_LITERAL(11, 142, 15), // "addScalableItem"
QT_MOC_LITERAL(12, 158, 14), // "AGraphicsItem*"
QT_MOC_LITERAL(13, 173, 8), // "gateType"
QT_MOC_LITERAL(14, 182, 15), // "scaleUpSelected"
QT_MOC_LITERAL(15, 198, 17), // "scaleDownSelected"
QT_MOC_LITERAL(16, 216, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(17, 239, 20), // "updateSelectionRects"
QT_MOC_LITERAL(18, 260, 19) // "clearSelectionRects"

    },
    "gui::CustomGraphicsScene\0itemsSelected\0"
    "\0QVector<qint64>\0itemIds\0itemsConnected\0"
    "sourceId\0targetId\0allItemsSelected\0"
    "QList<QGraphicsItem*>\0items\0addScalableItem\0"
    "AGraphicsItem*\0gateType\0scaleUpSelected\0"
    "scaleDownSelected\0handleSelectionChanged\0"
    "updateSelectionRects\0clearSelectionRects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui__CustomGraphicsScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    2,   62,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   70,    2, 0x0a /* Public */,
      14,    0,   73,    2, 0x0a /* Public */,
      15,    0,   74,    2, 0x0a /* Public */,
      16,    0,   75,    2, 0x08 /* Private */,
      17,    0,   76,    2, 0x08 /* Private */,
      18,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    0x80000000 | 12, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gui::CustomGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CustomGraphicsScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemsSelected((*reinterpret_cast< QVector<qint64>(*)>(_a[1]))); break;
        case 1: _t->itemsConnected((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->allItemsSelected((*reinterpret_cast< QList<QGraphicsItem*>(*)>(_a[1]))); break;
        case 3: { AGraphicsItem* _r = _t->addScalableItem((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AGraphicsItem**>(_a[0]) = std::move(_r); }  break;
        case 4: _t->scaleUpSelected(); break;
        case 5: _t->scaleDownSelected(); break;
        case 6: _t->handleSelectionChanged(); break;
        case 7: _t->updateSelectionRects(); break;
        case 8: _t->clearSelectionRects(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<qint64> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QGraphicsItem*> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CustomGraphicsScene::*)(QVector<qint64> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomGraphicsScene::itemsSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CustomGraphicsScene::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomGraphicsScene::itemsConnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CustomGraphicsScene::*)(QList<QGraphicsItem*> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CustomGraphicsScene::allItemsSelected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gui::CustomGraphicsScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_gui__CustomGraphicsScene.data,
    qt_meta_data_gui__CustomGraphicsScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gui::CustomGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::CustomGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gui__CustomGraphicsScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int gui::CustomGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
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
void gui::CustomGraphicsScene::itemsSelected(QVector<qint64> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gui::CustomGraphicsScene::itemsConnected(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gui::CustomGraphicsScene::allItemsSelected(QList<QGraphicsItem*> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
