/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "senyalBolaNueva"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "Bola*"
QT_MOC_LITERAL(4, 34, 14), // "jugadorChoqued"
QT_MOC_LITERAL(5, 49, 12), // "slotRepintar"
QT_MOC_LITERAL(6, 62, 16), // "slotDInformacion"
QT_MOC_LITERAL(7, 79, 14), // "slotDInfoBolas"
QT_MOC_LITERAL(8, 94, 15), // "slotDTablaBolas"
QT_MOC_LITERAL(9, 110, 17), // "slotDControlBolas"
QT_MOC_LITERAL(10, 128, 15), // "slotDArbolBolas"
QT_MOC_LITERAL(11, 144, 10), // "slotChocar"
QT_MOC_LITERAL(12, 155, 18), // "slotGuardarPartida"
QT_MOC_LITERAL(13, 174, 17), // "slotCargarPartida"
QT_MOC_LITERAL(14, 192, 10), // "slotDChart"
QT_MOC_LITERAL(15, 203, 14), // "slotDTablaInfo"
QT_MOC_LITERAL(16, 218, 14), // "slotDInfoHijas"
QT_MOC_LITERAL(17, 233, 24), // "slotGuardarConfiguracion"
QT_MOC_LITERAL(18, 258, 23) // "slotCargarConfiguracion"

    },
    "MainWindow\0senyalBolaNueva\0\0Bola*\0"
    "jugadorChoqued\0slotRepintar\0"
    "slotDInformacion\0slotDInfoBolas\0"
    "slotDTablaBolas\0slotDControlBolas\0"
    "slotDArbolBolas\0slotChocar\0"
    "slotGuardarPartida\0slotCargarPartida\0"
    "slotDChart\0slotDTablaInfo\0slotDInfoHijas\0"
    "slotGuardarConfiguracion\0"
    "slotCargarConfiguracion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    0,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   98,    2, 0x0a /* Public */,
       6,    0,   99,    2, 0x0a /* Public */,
       7,    0,  100,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    0,  103,    2, 0x0a /* Public */,
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    0,  107,    2, 0x0a /* Public */,
      15,    0,  108,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      17,    0,  110,    2, 0x0a /* Public */,
      18,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->senyalBolaNueva((*reinterpret_cast< Bola*(*)>(_a[1]))); break;
        case 1: _t->jugadorChoqued(); break;
        case 2: _t->slotRepintar(); break;
        case 3: _t->slotDInformacion(); break;
        case 4: _t->slotDInfoBolas(); break;
        case 5: _t->slotDTablaBolas(); break;
        case 6: _t->slotDControlBolas(); break;
        case 7: _t->slotDArbolBolas(); break;
        case 8: _t->slotChocar(); break;
        case 9: _t->slotGuardarPartida(); break;
        case 10: _t->slotCargarPartida(); break;
        case 11: _t->slotDChart(); break;
        case 12: _t->slotDTablaInfo(); break;
        case 13: _t->slotDInfoHijas(); break;
        case 14: _t->slotGuardarConfiguracion(); break;
        case 15: _t->slotCargarConfiguracion(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(Bola * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::senyalBolaNueva)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::jugadorChoqued)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::senyalBolaNueva(Bola * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::jugadorChoqued()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
