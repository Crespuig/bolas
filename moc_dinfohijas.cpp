/****************************************************************************
** Meta object code from reading C++ file 'dinfohijas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dinfohijas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dinfohijas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DInfoHijas_t {
    QByteArrayData data[4];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DInfoHijas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DInfoHijas_t qt_meta_stringdata_DInfoHijas = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DInfoHijas"
QT_MOC_LITERAL(1, 11, 13), // "slotBolaNueva"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5) // "Bola*"

    },
    "DInfoHijas\0slotBolaNueva\0\0Bola*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DInfoHijas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void DInfoHijas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DInfoHijas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotBolaNueva((*reinterpret_cast< Bola*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DInfoHijas::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DInfoHijas.data,
    qt_meta_data_DInfoHijas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DInfoHijas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DInfoHijas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DInfoHijas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DinfoHijas"))
        return static_cast< Ui::DinfoHijas*>(this);
    return QDialog::qt_metacast(_clname);
}

int DInfoHijas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
