/****************************************************************************
** Meta object code from reading C++ file 'promodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../promodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'promodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_promodel_t {
    QByteArrayData data[18];
    char stringdata0[251];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_promodel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_promodel_t qt_meta_stringdata_promodel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "promodel"
QT_MOC_LITERAL(1, 9, 9), // "infoSend2"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "infoSend7"
QT_MOC_LITERAL(4, 30, 19), // "on_action_triggered"
QT_MOC_LITERAL(5, 50, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(6, 72, 21), // "on_action_5_triggered"
QT_MOC_LITERAL(7, 94, 21), // "on_action_6_triggered"
QT_MOC_LITERAL(8, 116, 21), // "on_action_4_triggered"
QT_MOC_LITERAL(9, 138, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(10, 160, 21), // "on_action_7_triggered"
QT_MOC_LITERAL(11, 182, 10), // "closeEvent"
QT_MOC_LITERAL(12, 193, 12), // "QCloseEvent*"
QT_MOC_LITERAL(13, 206, 5), // "event"
QT_MOC_LITERAL(14, 212, 8), // "infoRecv"
QT_MOC_LITERAL(15, 221, 9), // "infoRecv3"
QT_MOC_LITERAL(16, 231, 9), // "infoRecv4"
QT_MOC_LITERAL(17, 241, 9) // "infoRecv5"

    },
    "promodel\0infoSend2\0\0infoSend7\0"
    "on_action_triggered\0on_action_2_triggered\0"
    "on_action_5_triggered\0on_action_6_triggered\0"
    "on_action_4_triggered\0on_action_3_triggered\0"
    "on_action_7_triggered\0closeEvent\0"
    "QCloseEvent*\0event\0infoRecv\0infoRecv3\0"
    "infoRecv4\0infoRecv5"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_promodel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   90,    2, 0x08 /* Private */,
       5,    0,   91,    2, 0x08 /* Private */,
       6,    0,   92,    2, 0x08 /* Private */,
       7,    0,   93,    2, 0x08 /* Private */,
       8,    0,   94,    2, 0x08 /* Private */,
       9,    0,   95,    2, 0x08 /* Private */,
      10,    0,   96,    2, 0x08 /* Private */,
      11,    1,   97,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x0a /* Public */,
      15,    1,  103,    2, 0x0a /* Public */,
      16,    7,  106,    2, 0x0a /* Public */,
      17,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void promodel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        promodel *_t = static_cast<promodel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoSend2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->infoSend7((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_action_triggered(); break;
        case 3: _t->on_action_2_triggered(); break;
        case 4: _t->on_action_5_triggered(); break;
        case 5: _t->on_action_6_triggered(); break;
        case 6: _t->on_action_4_triggered(); break;
        case 7: _t->on_action_3_triggered(); break;
        case 8: _t->on_action_7_triggered(); break;
        case 9: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 10: _t->infoRecv((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->infoRecv3((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->infoRecv4((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 13: _t->infoRecv5((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (promodel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&promodel::infoSend2)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (promodel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&promodel::infoSend7)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject promodel::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_promodel.data,
    qt_meta_data_promodel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *promodel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *promodel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_promodel.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int promodel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void promodel::infoSend2(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void promodel::infoSend7(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
