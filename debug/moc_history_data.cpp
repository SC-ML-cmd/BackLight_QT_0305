/****************************************************************************
** Meta object code from reading C++ file 'history_data.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../history_data.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'history_data.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_history_data_t {
    QByteArrayData data[20];
    char stringdata0[342];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_history_data_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_history_data_t qt_meta_stringdata_history_data = {
    {
QT_MOC_LITERAL(0, 0, 12), // "history_data"
QT_MOC_LITERAL(1, 13, 9), // "sendBatch"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 1), // "a"
QT_MOC_LITERAL(4, 26, 3), // "sig"
QT_MOC_LITERAL(5, 30, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 52, 26), // "on_tableView_doubleClicked"
QT_MOC_LITERAL(7, 79, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 91, 5), // "index"
QT_MOC_LITERAL(9, 97, 11), // "receiveData"
QT_MOC_LITERAL(10, 109, 1), // "e"
QT_MOC_LITERAL(11, 111, 25), // "on_btn_OutputData_clicked"
QT_MOC_LITERAL(12, 137, 23), // "on_btn_FindData_clicked"
QT_MOC_LITERAL(13, 161, 25), // "on_btn_DeleteData_clicked"
QT_MOC_LITERAL(14, 187, 28), // "on_TV_ShowData_doubleClicked"
QT_MOC_LITERAL(15, 216, 26), // "on_action_delete_triggered"
QT_MOC_LITERAL(16, 243, 19), // "on_action_triggered"
QT_MOC_LITERAL(17, 263, 26), // "on_action_detail_triggered"
QT_MOC_LITERAL(18, 290, 26), // "on_action_return_triggered"
QT_MOC_LITERAL(19, 317, 24) // "on_action_find_triggered"

    },
    "history_data\0sendBatch\0\0a\0sig\0"
    "on_pushButton_clicked\0on_tableView_doubleClicked\0"
    "QModelIndex\0index\0receiveData\0e\0"
    "on_btn_OutputData_clicked\0"
    "on_btn_FindData_clicked\0"
    "on_btn_DeleteData_clicked\0"
    "on_TV_ShowData_doubleClicked\0"
    "on_action_delete_triggered\0"
    "on_action_triggered\0on_action_detail_triggered\0"
    "on_action_return_triggered\0"
    "on_action_find_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_history_data[] = {

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
       4,    0,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   88,    2, 0x08 /* Private */,
       6,    1,   89,    2, 0x08 /* Private */,
       9,    1,   92,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    1,   98,    2, 0x08 /* Private */,
      15,    0,  101,    2, 0x08 /* Private */,
      16,    0,  102,    2, 0x08 /* Private */,
      17,    0,  103,    2, 0x08 /* Private */,
      18,    0,  104,    2, 0x08 /* Private */,
      19,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void history_data::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        history_data *_t = static_cast<history_data *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendBatch((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sig(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_tableView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->receiveData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_btn_OutputData_clicked(); break;
        case 6: _t->on_btn_FindData_clicked(); break;
        case 7: _t->on_btn_DeleteData_clicked(); break;
        case 8: _t->on_TV_ShowData_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->on_action_delete_triggered(); break;
        case 10: _t->on_action_triggered(); break;
        case 11: _t->on_action_detail_triggered(); break;
        case 12: _t->on_action_return_triggered(); break;
        case 13: _t->on_action_find_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (history_data::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&history_data::sendBatch)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (history_data::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&history_data::sig)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject history_data::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_history_data.data,
    qt_meta_data_history_data,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *history_data::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *history_data::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_history_data.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int history_data::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void history_data::sendBatch(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void history_data::sig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
