/****************************************************************************
** Meta object code from reading C++ file 'dtablaexamen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dtablaexamen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dtablaexamen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DTablaExamen_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DTablaExamen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DTablaExamen_t qt_meta_stringdata_DTablaExamen = {
    {
QT_MOC_LITERAL(0, 0, 12) // "DTablaExamen"

    },
    "DTablaExamen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DTablaExamen[] = {

 // content:
       7,       // revision
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

void DTablaExamen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DTablaExamen::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DTablaExamen.data,
      qt_meta_data_DTablaExamen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DTablaExamen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DTablaExamen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DTablaExamen.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DTablaExamen"))
        return static_cast< Ui::DTablaExamen*>(this);
    return QDialog::qt_metacast(_clname);
}

int DTablaExamen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ModeloTablaExamen_t {
    QByteArrayData data[4];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModeloTablaExamen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModeloTablaExamen_t qt_meta_stringdata_ModeloTablaExamen = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ModeloTablaExamen"
QT_MOC_LITERAL(1, 18, 19), // "slotActualizarDatos"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23) // "slotActualizarDatosTemp"

    },
    "ModeloTablaExamen\0slotActualizarDatos\0"
    "\0slotActualizarDatosTemp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModeloTablaExamen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModeloTablaExamen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModeloTablaExamen *_t = static_cast<ModeloTablaExamen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotActualizarDatos(); break;
        case 1: _t->slotActualizarDatosTemp(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModeloTablaExamen::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_ModeloTablaExamen.data,
      qt_meta_data_ModeloTablaExamen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModeloTablaExamen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModeloTablaExamen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModeloTablaExamen.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTableModel::qt_metacast(_clname);
}

int ModeloTablaExamen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
