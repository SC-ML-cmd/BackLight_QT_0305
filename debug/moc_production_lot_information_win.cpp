/****************************************************************************
** Meta object code from reading C++ file 'production_lot_information_win.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../production_lot_information_win.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'production_lot_information_win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_production_lot_information_win_t {
    QByteArrayData data[17];
    char stringdata0[264];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_production_lot_information_win_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_production_lot_information_win_t qt_meta_stringdata_production_lot_information_win = {
    {
QT_MOC_LITERAL(0, 0, 30), // "production_lot_information_win"
QT_MOC_LITERAL(1, 31, 8), // "infoSend"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "on_action_triggered"
QT_MOC_LITERAL(4, 61, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(5, 83, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(6, 105, 14), // "onTableClicked"
QT_MOC_LITERAL(7, 120, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 132, 5), // "index"
QT_MOC_LITERAL(9, 138, 21), // "on_action_4_triggered"
QT_MOC_LITERAL(10, 160, 22), // "SlotCurrentPageChanged"
QT_MOC_LITERAL(11, 183, 4), // "page"
QT_MOC_LITERAL(12, 188, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 210, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(14, 234, 10), // "closeEvent"
QT_MOC_LITERAL(15, 245, 12), // "QCloseEvent*"
QT_MOC_LITERAL(16, 258, 5) // "event"

    },
    "production_lot_information_win\0infoSend\0"
    "\0on_action_triggered\0on_action_2_triggered\0"
    "on_action_3_triggered\0onTableClicked\0"
    "QModelIndex\0index\0on_action_4_triggered\0"
    "SlotCurrentPageChanged\0page\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "closeEvent\0QCloseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_production_lot_information_win[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   69,    2, 0x08 /* Private */,
       4,    0,   70,    2, 0x08 /* Private */,
       5,    0,   71,    2, 0x08 /* Private */,
       6,    1,   72,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    1,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void production_lot_information_win::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        production_lot_information_win *_t = static_cast<production_lot_information_win *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoSend((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_action_triggered(); break;
        case 2: _t->on_action_2_triggered(); break;
        case 3: _t->on_action_3_triggered(); break;
        case 4: _t->onTableClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_action_4_triggered(); break;
        case 6: _t->SlotCurrentPageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        case 9: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (production_lot_information_win::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&production_lot_information_win::infoSend)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject production_lot_information_win::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_production_lot_information_win.data,
    qt_meta_data_production_lot_information_win,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *production_lot_information_win::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *production_lot_information_win::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_production_lot_information_win.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int production_lot_information_win::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void production_lot_information_win::infoSend(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
