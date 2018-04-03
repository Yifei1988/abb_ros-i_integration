/****************************************************************************
** Meta object code from reading C++ file 'asstmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AbbRosI-Intg-Asst/asstmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asstmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AsstMainWindow_t {
    QByteArrayData data[9];
    char stringdata[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AsstMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AsstMainWindow_t qt_meta_stringdata_AsstMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AsstMainWindow"
QT_MOC_LITERAL(1, 15, 25), // "on_btn_to_support_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 12), // "receiveState"
QT_MOC_LITERAL(4, 55, 5), // "state"
QT_MOC_LITERAL(5, 61, 23), // "on_btnToRosWiki_clicked"
QT_MOC_LITERAL(6, 85, 24), // "on_btnToRosiWiki_clicked"
QT_MOC_LITERAL(7, 110, 27), // "on_btnToRosCatkinWs_clicked"
QT_MOC_LITERAL(8, 138, 25) // "on_btnToDldPkgAbb_clicked"

    },
    "AsstMainWindow\0on_btn_to_support_clicked\0"
    "\0receiveState\0state\0on_btnToRosWiki_clicked\0"
    "on_btnToRosiWiki_clicked\0"
    "on_btnToRosCatkinWs_clicked\0"
    "on_btnToDldPkgAbb_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AsstMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AsstMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsstMainWindow *_t = static_cast<AsstMainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_btn_to_support_clicked(); break;
        case 1: _t->receiveState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_btnToRosWiki_clicked(); break;
        case 3: _t->on_btnToRosiWiki_clicked(); break;
        case 4: _t->on_btnToRosCatkinWs_clicked(); break;
        case 5: _t->on_btnToDldPkgAbb_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject AsstMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AsstMainWindow.data,
      qt_meta_data_AsstMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AsstMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AsstMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AsstMainWindow.stringdata))
        return static_cast<void*>(const_cast< AsstMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AsstMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
