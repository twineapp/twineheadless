/****************************************************************************
** Meta object code from reading C++ file 'qfilesystemwatcher.h'
**
** Created: Mon Jul 1 18:27:52 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qfilesystemwatcher.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilesystemwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFileSystemWatcher[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x05,
      46,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      85,   72,   19,   19, 0x08,
     114,   72,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QFileSystemWatcher[] = {
    "QFileSystemWatcher\0\0path\0fileChanged(QString)\0"
    "directoryChanged(QString)\0path,removed\0"
    "_q_fileChanged(QString,bool)\0"
    "_q_directoryChanged(QString,bool)\0"
};

void QFileSystemWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QFileSystemWatcher *_t = static_cast<QFileSystemWatcher *>(_o);
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_fileChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->d_func()->_q_directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QFileSystemWatcher::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QFileSystemWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFileSystemWatcher,
      qt_meta_data_QFileSystemWatcher, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFileSystemWatcher::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFileSystemWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFileSystemWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFileSystemWatcher))
        return static_cast<void*>(const_cast< QFileSystemWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int QFileSystemWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QFileSystemWatcher::fileChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileSystemWatcher::directoryChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
