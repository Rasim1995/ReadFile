/****************************************************************************
** Meta object code from reading C++ file 'LoadImageThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LoadImageThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoadImageThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoadImageThread_t {
    QByteArrayData data[14];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoadImageThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoadImageThread_t qt_meta_stringdata_LoadImageThread = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LoadImageThread"
QT_MOC_LITERAL(1, 16, 19), // "DataIsReadyBolometr"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "uchar*"
QT_MOC_LITERAL(4, 44, 3), // "img"
QT_MOC_LITERAL(5, 48, 16), // "DataIsReadyKreol"
QT_MOC_LITERAL(6, 65, 7), // "founded"
QT_MOC_LITERAL(7, 73, 5), // "value"
QT_MOC_LITERAL(8, 79, 13), // "nozzleChanged"
QT_MOC_LITERAL(9, 93, 15), // "setMaxCadrCount"
QT_MOC_LITERAL(10, 109, 5), // "count"
QT_MOC_LITERAL(11, 115, 17), // "cadrNumberChanged"
QT_MOC_LITERAL(12, 133, 6), // "number"
QT_MOC_LITERAL(13, 140, 9) // "onFounded"

    },
    "LoadImageThread\0DataIsReadyBolometr\0"
    "\0uchar*\0img\0DataIsReadyKreol\0founded\0"
    "value\0nozzleChanged\0setMaxCadrCount\0"
    "count\0cadrNumberChanged\0number\0onFounded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoadImageThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       8,    1,   58,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,
      11,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void LoadImageThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoadImageThread *_t = static_cast<LoadImageThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DataIsReadyBolometr((*reinterpret_cast< uchar*(*)>(_a[1]))); break;
        case 1: _t->DataIsReadyKreol((*reinterpret_cast< uchar*(*)>(_a[1]))); break;
        case 2: _t->founded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->nozzleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMaxCadrCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->cadrNumberChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onFounded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoadImageThread::*_t)(uchar * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadImageThread::DataIsReadyBolometr)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LoadImageThread::*_t)(uchar * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadImageThread::DataIsReadyKreol)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LoadImageThread::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadImageThread::founded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LoadImageThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadImageThread::nozzleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (LoadImageThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadImageThread::setMaxCadrCount)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (LoadImageThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoadImageThread::cadrNumberChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject LoadImageThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_LoadImageThread.data,
      qt_meta_data_LoadImageThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoadImageThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadImageThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoadImageThread.stringdata0))
        return static_cast<void*>(const_cast< LoadImageThread*>(this));
    return QThread::qt_metacast(_clname);
}

int LoadImageThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void LoadImageThread::DataIsReadyBolometr(uchar * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoadImageThread::DataIsReadyKreol(uchar * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LoadImageThread::founded(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LoadImageThread::nozzleChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LoadImageThread::setMaxCadrCount(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LoadImageThread::cadrNumberChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
