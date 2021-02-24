/****************************************************************************
** Meta object code from reading C++ file 'dframeprueba.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dframeprueba.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dframeprueba.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetLineas_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetLineas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetLineas_t qt_meta_stringdata_WidgetLineas = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WidgetLineas"
QT_MOC_LITERAL(1, 13, 16), // "slotTemporizador"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "WidgetLineas\0slotTemporizador\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetLineas[] = {

 // content:
       7,       // revision
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

void WidgetLineas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetLineas *_t = static_cast<WidgetLineas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotTemporizador(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WidgetLineas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetLineas.data,
      qt_meta_data_WidgetLineas,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WidgetLineas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetLineas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetLineas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetLineas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_DFramePrueba_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DFramePrueba_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DFramePrueba_t qt_meta_stringdata_DFramePrueba = {
    {
QT_MOC_LITERAL(0, 0, 12) // "DFramePrueba"

    },
    "DFramePrueba"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DFramePrueba[] = {

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

void DFramePrueba::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DFramePrueba::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DFramePrueba.data,
      qt_meta_data_DFramePrueba,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DFramePrueba::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DFramePrueba::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DFramePrueba.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DFramePrueba"))
        return static_cast< Ui::DFramePrueba*>(this);
    return QDialog::qt_metacast(_clname);
}

int DFramePrueba::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
