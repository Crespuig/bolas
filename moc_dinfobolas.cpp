/****************************************************************************
** Meta object code from reading C++ file 'dinfobolas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dinfobolas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dinfobolas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetOndas_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetOndas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetOndas_t qt_meta_stringdata_WidgetOndas = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WidgetOndas"
QT_MOC_LITERAL(1, 12, 16), // "slotTemporizador"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "WidgetOndas\0slotTemporizador\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetOndas[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WidgetOndas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetOndas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTemporizador(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WidgetOndas::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_WidgetOndas.data,
    qt_meta_data_WidgetOndas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetOndas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetOndas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetOndas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetOndas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_DInfoBolas_t {
    QByteArrayData data[9];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DInfoBolas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DInfoBolas_t qt_meta_stringdata_DInfoBolas = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DInfoBolas"
QT_MOC_LITERAL(1, 11, 13), // "slotInfoBolas"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "slotOnda"
QT_MOC_LITERAL(4, 35, 4), // "posX"
QT_MOC_LITERAL(5, 40, 4), // "posY"
QT_MOC_LITERAL(6, 45, 5), // "Bola*"
QT_MOC_LITERAL(7, 51, 15), // "slotRecogerBola"
QT_MOC_LITERAL(8, 67, 16) // "QListWidgetItem*"

    },
    "DInfoBolas\0slotInfoBolas\0\0slotOnda\0"
    "posX\0posY\0Bola*\0slotRecogerBola\0"
    "QListWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DInfoBolas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    3,   30,    2, 0x0a /* Public */,
       7,    1,   37,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 6,    4,    5,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void DInfoBolas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DInfoBolas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotInfoBolas(); break;
        case 1: _t->slotOnda((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Bola*(*)>(_a[3]))); break;
        case 2: _t->slotRecogerBola((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DInfoBolas::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DInfoBolas.data,
    qt_meta_data_DInfoBolas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DInfoBolas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DInfoBolas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DInfoBolas.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DInfoBolas"))
        return static_cast< Ui::DInfoBolas*>(this);
    return QDialog::qt_metacast(_clname);
}

int DInfoBolas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
