/****************************************************************************
** Meta object code from reading C++ file 'uiobserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DesignPattern/Observer/uiobserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiobserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UIObserver_t {
    QByteArrayData data[11];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_UIObserver_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_UIObserver_t qt_meta_stringdata_UIObserver = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 17),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 17),
QT_MOC_LITERAL(4, 48, 17),
QT_MOC_LITERAL(5, 66, 18),
QT_MOC_LITERAL(6, 85, 18),
QT_MOC_LITERAL(7, 104, 18),
QT_MOC_LITERAL(8, 123, 16),
QT_MOC_LITERAL(9, 140, 16),
QT_MOC_LITERAL(10, 157, 16)
    },
    "UIObserver\0on_btn_11_clicked\0\0"
    "on_btn_22_clicked\0on_btn_33_clicked\0"
    "on_btn_111_clicked\0on_btn_222_clicked\0"
    "on_btn_333_clicked\0on_btn_1_clicked\0"
    "on_btn_2_clicked\0on_btn_3_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UIObserver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08,
       3,    0,   60,    2, 0x08,
       4,    0,   61,    2, 0x08,
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    0,   67,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UIObserver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UIObserver *_t = static_cast<UIObserver *>(_o);
        switch (_id) {
        case 0: _t->on_btn_11_clicked(); break;
        case 1: _t->on_btn_22_clicked(); break;
        case 2: _t->on_btn_33_clicked(); break;
        case 3: _t->on_btn_111_clicked(); break;
        case 4: _t->on_btn_222_clicked(); break;
        case 5: _t->on_btn_333_clicked(); break;
        case 6: _t->on_btn_1_clicked(); break;
        case 7: _t->on_btn_2_clicked(); break;
        case 8: _t->on_btn_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject UIObserver::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UIObserver.data,
      qt_meta_data_UIObserver,  qt_static_metacall, 0, 0}
};


const QMetaObject *UIObserver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UIObserver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIObserver.stringdata))
        return static_cast<void*>(const_cast< UIObserver*>(this));
    return QWidget::qt_metacast(_clname);
}

int UIObserver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
