/****************************************************************************
** Meta object code from reading C++ file 'responses.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../server/src/responses.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'responses.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractRequestHandler_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractRequestHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractRequestHandler_t qt_meta_stringdata_AbstractRequestHandler = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AbstractRequestHandler"
QT_MOC_LITERAL(1, 23, 14), // "responseInited"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "itemObject"
QT_MOC_LITERAL(4, 50, 12) // "responseSend"

    },
    "AbstractRequestHandler\0responseInited\0"
    "\0itemObject\0responseSend"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractRequestHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void AbstractRequestHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractRequestHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseInited((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 1: _t->responseSend((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractRequestHandler::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractRequestHandler::responseInited)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractRequestHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AbstractRequestHandler.data,
    qt_meta_data_AbstractRequestHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractRequestHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractRequestHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractRequestHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractRequestHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AbstractRequestHandler::responseInited(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ToSignUp_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToSignUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToSignUp_t qt_meta_stringdata_ToSignUp = {
    {
QT_MOC_LITERAL(0, 0, 8) // "ToSignUp"

    },
    "ToSignUp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToSignUp[] = {

 // content:
       8,       // revision
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

void ToSignUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToSignUp::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToSignUp.data,
    qt_meta_data_ToSignUp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToSignUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToSignUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToSignUp.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToSignUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToSignIn_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToSignIn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToSignIn_t qt_meta_stringdata_ToSignIn = {
    {
QT_MOC_LITERAL(0, 0, 8) // "ToSignIn"

    },
    "ToSignIn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToSignIn[] = {

 // content:
       8,       // revision
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

void ToSignIn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToSignIn::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToSignIn.data,
    qt_meta_data_ToSignIn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToSignIn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToSignIn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToSignIn.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToSignIn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToSignInWithGoogle_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToSignInWithGoogle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToSignInWithGoogle_t qt_meta_stringdata_ToSignInWithGoogle = {
    {
QT_MOC_LITERAL(0, 0, 18) // "ToSignInWithGoogle"

    },
    "ToSignInWithGoogle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToSignInWithGoogle[] = {

 // content:
       8,       // revision
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

void ToSignInWithGoogle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToSignInWithGoogle::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToSignInWithGoogle.data,
    qt_meta_data_ToSignInWithGoogle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToSignInWithGoogle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToSignInWithGoogle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToSignInWithGoogle.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToSignInWithGoogle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToAutoSignIn_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToAutoSignIn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToAutoSignIn_t qt_meta_stringdata_ToAutoSignIn = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ToAutoSignIn"

    },
    "ToAutoSignIn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToAutoSignIn[] = {

 // content:
       8,       // revision
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

void ToAutoSignIn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToAutoSignIn::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToAutoSignIn.data,
    qt_meta_data_ToAutoSignIn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToAutoSignIn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToAutoSignIn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToAutoSignIn.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToAutoSignIn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToLogOut_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToLogOut_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToLogOut_t qt_meta_stringdata_ToLogOut = {
    {
QT_MOC_LITERAL(0, 0, 8) // "ToLogOut"

    },
    "ToLogOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToLogOut[] = {

 // content:
       8,       // revision
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

void ToLogOut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToLogOut::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToLogOut.data,
    qt_meta_data_ToLogOut,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToLogOut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToLogOut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToLogOut.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToLogOut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToCreatedWorkflow_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToCreatedWorkflow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToCreatedWorkflow_t qt_meta_stringdata_ToCreatedWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 17) // "ToCreatedWorkflow"

    },
    "ToCreatedWorkflow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToCreatedWorkflow[] = {

 // content:
       8,       // revision
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

void ToCreatedWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToCreatedWorkflow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToCreatedWorkflow.data,
    qt_meta_data_ToCreatedWorkflow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToCreatedWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToCreatedWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToCreatedWorkflow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToCreatedWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToUpdateWorkflow_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToUpdateWorkflow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToUpdateWorkflow_t qt_meta_stringdata_ToUpdateWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ToUpdateWorkflow"

    },
    "ToUpdateWorkflow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToUpdateWorkflow[] = {

 // content:
       8,       // revision
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

void ToUpdateWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToUpdateWorkflow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToUpdateWorkflow.data,
    qt_meta_data_ToUpdateWorkflow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToUpdateWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToUpdateWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToUpdateWorkflow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToUpdateWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_toArchieveWorkflow_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_toArchieveWorkflow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_toArchieveWorkflow_t qt_meta_stringdata_toArchieveWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 18) // "toArchieveWorkflow"

    },
    "toArchieveWorkflow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_toArchieveWorkflow[] = {

 // content:
       8,       // revision
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

void toArchieveWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject toArchieveWorkflow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_toArchieveWorkflow.data,
    qt_meta_data_toArchieveWorkflow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *toArchieveWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *toArchieveWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_toArchieveWorkflow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int toArchieveWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToInvitedToWorkflow_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToInvitedToWorkflow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToInvitedToWorkflow_t qt_meta_stringdata_ToInvitedToWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ToInvitedToWorkflow"

    },
    "ToInvitedToWorkflow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToInvitedToWorkflow[] = {

 // content:
       8,       // revision
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

void ToInvitedToWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToInvitedToWorkflow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToInvitedToWorkflow.data,
    qt_meta_data_ToInvitedToWorkflow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToInvitedToWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToInvitedToWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToInvitedToWorkflow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToInvitedToWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToRemoveFromWorkflow_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToRemoveFromWorkflow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToRemoveFromWorkflow_t qt_meta_stringdata_ToRemoveFromWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 20) // "ToRemoveFromWorkflow"

    },
    "ToRemoveFromWorkflow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToRemoveFromWorkflow[] = {

 // content:
       8,       // revision
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

void ToRemoveFromWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToRemoveFromWorkflow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToRemoveFromWorkflow.data,
    qt_meta_data_ToRemoveFromWorkflow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToRemoveFromWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToRemoveFromWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToRemoveFromWorkflow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToRemoveFromWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToGetUsersFromWorkflow_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToGetUsersFromWorkflow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToGetUsersFromWorkflow_t qt_meta_stringdata_ToGetUsersFromWorkflow = {
    {
QT_MOC_LITERAL(0, 0, 22) // "ToGetUsersFromWorkflow"

    },
    "ToGetUsersFromWorkflow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToGetUsersFromWorkflow[] = {

 // content:
       8,       // revision
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

void ToGetUsersFromWorkflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToGetUsersFromWorkflow::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToGetUsersFromWorkflow.data,
    qt_meta_data_ToGetUsersFromWorkflow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToGetUsersFromWorkflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToGetUsersFromWorkflow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToGetUsersFromWorkflow.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToGetUsersFromWorkflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SendAllWorkflows_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendAllWorkflows_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendAllWorkflows_t qt_meta_stringdata_SendAllWorkflows = {
    {
QT_MOC_LITERAL(0, 0, 16) // "SendAllWorkflows"

    },
    "SendAllWorkflows"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendAllWorkflows[] = {

 // content:
       8,       // revision
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

void SendAllWorkflows::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SendAllWorkflows::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_SendAllWorkflows.data,
    qt_meta_data_SendAllWorkflows,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendAllWorkflows::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendAllWorkflows::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendAllWorkflows.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int SendAllWorkflows::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SendSingleWorkflowData_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendSingleWorkflowData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendSingleWorkflowData_t qt_meta_stringdata_SendSingleWorkflowData = {
    {
QT_MOC_LITERAL(0, 0, 22) // "SendSingleWorkflowData"

    },
    "SendSingleWorkflowData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendSingleWorkflowData[] = {

 // content:
       8,       // revision
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

void SendSingleWorkflowData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SendSingleWorkflowData::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_SendSingleWorkflowData.data,
    qt_meta_data_SendSingleWorkflowData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendSingleWorkflowData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendSingleWorkflowData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendSingleWorkflowData.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int SendSingleWorkflowData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SendStatistics_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendStatistics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendStatistics_t qt_meta_stringdata_SendStatistics = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SendStatistics"

    },
    "SendStatistics"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendStatistics[] = {

 // content:
       8,       // revision
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

void SendStatistics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SendStatistics::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_SendStatistics.data,
    qt_meta_data_SendStatistics,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendStatistics::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendStatistics::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendStatistics.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int SendStatistics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SendProfile_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendProfile_t qt_meta_stringdata_SendProfile = {
    {
QT_MOC_LITERAL(0, 0, 11) // "SendProfile"

    },
    "SendProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendProfile[] = {

 // content:
       8,       // revision
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

void SendProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SendProfile::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_SendProfile.data,
    qt_meta_data_SendProfile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendProfile.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int SendProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToUpdateProfile_t {
    QByteArrayData data[1];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToUpdateProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToUpdateProfile_t qt_meta_stringdata_ToUpdateProfile = {
    {
QT_MOC_LITERAL(0, 0, 15) // "ToUpdateProfile"

    },
    "ToUpdateProfile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToUpdateProfile[] = {

 // content:
       8,       // revision
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

void ToUpdateProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToUpdateProfile::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToUpdateProfile.data,
    qt_meta_data_ToUpdateProfile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToUpdateProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToUpdateProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToUpdateProfile.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToUpdateProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToCreateList_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToCreateList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToCreateList_t qt_meta_stringdata_ToCreateList = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ToCreateList"

    },
    "ToCreateList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToCreateList[] = {

 // content:
       8,       // revision
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

void ToCreateList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToCreateList::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToCreateList.data,
    qt_meta_data_ToCreateList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToCreateList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToCreateList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToCreateList.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToCreateList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToRenameList_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToRenameList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToRenameList_t qt_meta_stringdata_ToRenameList = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ToRenameList"

    },
    "ToRenameList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToRenameList[] = {

 // content:
       8,       // revision
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

void ToRenameList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToRenameList::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToRenameList.data,
    qt_meta_data_ToRenameList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToRenameList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToRenameList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToRenameList.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToRenameList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToGetLists_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToGetLists_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToGetLists_t qt_meta_stringdata_ToGetLists = {
    {
QT_MOC_LITERAL(0, 0, 10) // "ToGetLists"

    },
    "ToGetLists"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToGetLists[] = {

 // content:
       8,       // revision
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

void ToGetLists::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToGetLists::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToGetLists.data,
    qt_meta_data_ToGetLists,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToGetLists::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToGetLists::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToGetLists.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToGetLists::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToRemoveList_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToRemoveList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToRemoveList_t qt_meta_stringdata_ToRemoveList = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ToRemoveList"

    },
    "ToRemoveList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToRemoveList[] = {

 // content:
       8,       // revision
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

void ToRemoveList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToRemoveList::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToRemoveList.data,
    qt_meta_data_ToRemoveList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToRemoveList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToRemoveList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToRemoveList.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToRemoveList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToCreateTask_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToCreateTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToCreateTask_t qt_meta_stringdata_ToCreateTask = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ToCreateTask"

    },
    "ToCreateTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToCreateTask[] = {

 // content:
       8,       // revision
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

void ToCreateTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToCreateTask::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToCreateTask.data,
    qt_meta_data_ToCreateTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToCreateTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToCreateTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToCreateTask.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToCreateTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToGetTasks_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToGetTasks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToGetTasks_t qt_meta_stringdata_ToGetTasks = {
    {
QT_MOC_LITERAL(0, 0, 10) // "ToGetTasks"

    },
    "ToGetTasks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToGetTasks[] = {

 // content:
       8,       // revision
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

void ToGetTasks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToGetTasks::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToGetTasks.data,
    qt_meta_data_ToGetTasks,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToGetTasks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToGetTasks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToGetTasks.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToGetTasks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToUpdateTask_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToUpdateTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToUpdateTask_t qt_meta_stringdata_ToUpdateTask = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ToUpdateTask"

    },
    "ToUpdateTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToUpdateTask[] = {

 // content:
       8,       // revision
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

void ToUpdateTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToUpdateTask::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToUpdateTask.data,
    qt_meta_data_ToUpdateTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToUpdateTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToUpdateTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToUpdateTask.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToUpdateTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToMoveTask_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToMoveTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToMoveTask_t qt_meta_stringdata_ToMoveTask = {
    {
QT_MOC_LITERAL(0, 0, 10) // "ToMoveTask"

    },
    "ToMoveTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToMoveTask[] = {

 // content:
       8,       // revision
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

void ToMoveTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToMoveTask::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToMoveTask.data,
    qt_meta_data_ToMoveTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToMoveTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToMoveTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToMoveTask.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToMoveTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ToRemoveTask_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToRemoveTask_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToRemoveTask_t qt_meta_stringdata_ToRemoveTask = {
    {
QT_MOC_LITERAL(0, 0, 12) // "ToRemoveTask"

    },
    "ToRemoveTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToRemoveTask[] = {

 // content:
       8,       // revision
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

void ToRemoveTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ToRemoveTask::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_ToRemoveTask.data,
    qt_meta_data_ToRemoveTask,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToRemoveTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToRemoveTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToRemoveTask.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int ToRemoveTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SendTaskData_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendTaskData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendTaskData_t qt_meta_stringdata_SendTaskData = {
    {
QT_MOC_LITERAL(0, 0, 12) // "SendTaskData"

    },
    "SendTaskData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendTaskData[] = {

 // content:
       8,       // revision
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

void SendTaskData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SendTaskData::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractRequestHandler::staticMetaObject>(),
    qt_meta_stringdata_SendTaskData.data,
    qt_meta_data_SendTaskData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendTaskData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendTaskData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendTaskData.stringdata0))
        return static_cast<void*>(this);
    return AbstractRequestHandler::qt_metacast(_clname);
}

int SendTaskData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractRequestHandler::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
