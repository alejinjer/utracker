/****************************************************************************
** Meta object code from reading C++ file 'responsehandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../client/src/responsehandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'responsehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AbstractResponseHandler_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AbstractResponseHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AbstractResponseHandler_t qt_meta_stringdata_AbstractResponseHandler = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AbstractResponseHandler"
QT_MOC_LITERAL(1, 24, 12), // "handleInited"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "itemObject"
QT_MOC_LITERAL(4, 49, 14) // "responseHandle"

    },
    "AbstractResponseHandler\0handleInited\0"
    "\0itemObject\0responseHandle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbstractResponseHandler[] = {

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

void AbstractResponseHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractResponseHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleInited((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 1: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractResponseHandler::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractResponseHandler::handleInited)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AbstractResponseHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AbstractResponseHandler.data,
    qt_meta_data_AbstractResponseHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AbstractResponseHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbstractResponseHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractResponseHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AbstractResponseHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AbstractResponseHandler::handleInited(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SignUpResponse_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignUpResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignUpResponse_t qt_meta_stringdata_SignUpResponse = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SignUpResponse"
QT_MOC_LITERAL(1, 15, 14), // "responseHandle"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10) // "itemObject"

    },
    "SignUpResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignUpResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void SignUpResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignUpResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SignUpResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_SignUpResponse.data,
    qt_meta_data_SignUpResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SignUpResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignUpResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SignUpResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int SignUpResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SignInResponse_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignInResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignInResponse_t qt_meta_stringdata_SignInResponse = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SignInResponse"
QT_MOC_LITERAL(1, 15, 14), // "responseHandle"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10) // "itemObject"

    },
    "SignInResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignInResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void SignInResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignInResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SignInResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_SignInResponse.data,
    qt_meta_data_SignInResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SignInResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignInResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SignInResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int SignInResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SignInWithGoogleResponse_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SignInWithGoogleResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SignInWithGoogleResponse_t qt_meta_stringdata_SignInWithGoogleResponse = {
    {
QT_MOC_LITERAL(0, 0, 24), // "SignInWithGoogleResponse"
QT_MOC_LITERAL(1, 25, 14), // "responseHandle"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10) // "itemObject"

    },
    "SignInWithGoogleResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SignInWithGoogleResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void SignInWithGoogleResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SignInWithGoogleResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SignInWithGoogleResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_SignInWithGoogleResponse.data,
    qt_meta_data_SignInWithGoogleResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SignInWithGoogleResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SignInWithGoogleResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SignInWithGoogleResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int SignInWithGoogleResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AutoSignInResponse_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoSignInResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoSignInResponse_t qt_meta_stringdata_AutoSignInResponse = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AutoSignInResponse"
QT_MOC_LITERAL(1, 19, 14), // "responseHandle"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10) // "itemObject"

    },
    "AutoSignInResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoSignInResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void AutoSignInResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoSignInResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutoSignInResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_AutoSignInResponse.data,
    qt_meta_data_AutoSignInResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoSignInResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoSignInResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoSignInResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int AutoSignInResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LogOutResponse_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogOutResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogOutResponse_t qt_meta_stringdata_LogOutResponse = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LogOutResponse"
QT_MOC_LITERAL(1, 15, 14), // "responseHandle"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10) // "itemObject"

    },
    "LogOutResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogOutResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void LogOutResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogOutResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LogOutResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_LogOutResponse.data,
    qt_meta_data_LogOutResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LogOutResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogOutResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LogOutResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int LogOutResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CreatedWorkflowResponse_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreatedWorkflowResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreatedWorkflowResponse_t qt_meta_stringdata_CreatedWorkflowResponse = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CreatedWorkflowResponse"
QT_MOC_LITERAL(1, 24, 14), // "responseHandle"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10) // "itemObject"

    },
    "CreatedWorkflowResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreatedWorkflowResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void CreatedWorkflowResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CreatedWorkflowResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CreatedWorkflowResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_CreatedWorkflowResponse.data,
    qt_meta_data_CreatedWorkflowResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CreatedWorkflowResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreatedWorkflowResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CreatedWorkflowResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int CreatedWorkflowResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_RemovedFromWorkflowResponse_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemovedFromWorkflowResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemovedFromWorkflowResponse_t qt_meta_stringdata_RemovedFromWorkflowResponse = {
    {
QT_MOC_LITERAL(0, 0, 27), // "RemovedFromWorkflowResponse"
QT_MOC_LITERAL(1, 28, 14), // "responseHandle"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 10) // "itemObject"

    },
    "RemovedFromWorkflowResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemovedFromWorkflowResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void RemovedFromWorkflowResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemovedFromWorkflowResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemovedFromWorkflowResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_RemovedFromWorkflowResponse.data,
    qt_meta_data_RemovedFromWorkflowResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemovedFromWorkflowResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemovedFromWorkflowResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemovedFromWorkflowResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int RemovedFromWorkflowResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_GetUsersFromWorkflowResponse_t {
    QByteArrayData data[4];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetUsersFromWorkflowResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetUsersFromWorkflowResponse_t qt_meta_stringdata_GetUsersFromWorkflowResponse = {
    {
QT_MOC_LITERAL(0, 0, 28), // "GetUsersFromWorkflowResponse"
QT_MOC_LITERAL(1, 29, 14), // "responseHandle"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10) // "itemObject"

    },
    "GetUsersFromWorkflowResponse\0"
    "responseHandle\0\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetUsersFromWorkflowResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void GetUsersFromWorkflowResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GetUsersFromWorkflowResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetUsersFromWorkflowResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_GetUsersFromWorkflowResponse.data,
    qt_meta_data_GetUsersFromWorkflowResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GetUsersFromWorkflowResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetUsersFromWorkflowResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetUsersFromWorkflowResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int GetUsersFromWorkflowResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ArchieveWorkflowResponse_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArchieveWorkflowResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArchieveWorkflowResponse_t qt_meta_stringdata_ArchieveWorkflowResponse = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ArchieveWorkflowResponse"
QT_MOC_LITERAL(1, 25, 14), // "responseHandle"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10) // "itemObject"

    },
    "ArchieveWorkflowResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArchieveWorkflowResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ArchieveWorkflowResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArchieveWorkflowResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ArchieveWorkflowResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ArchieveWorkflowResponse.data,
    qt_meta_data_ArchieveWorkflowResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ArchieveWorkflowResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArchieveWorkflowResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArchieveWorkflowResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ArchieveWorkflowResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_UpdateWorkflowResponse_t {
    QByteArrayData data[4];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateWorkflowResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateWorkflowResponse_t qt_meta_stringdata_UpdateWorkflowResponse = {
    {
QT_MOC_LITERAL(0, 0, 22), // "UpdateWorkflowResponse"
QT_MOC_LITERAL(1, 23, 14), // "responseHandle"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10) // "itemObject"

    },
    "UpdateWorkflowResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateWorkflowResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void UpdateWorkflowResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateWorkflowResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UpdateWorkflowResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_UpdateWorkflowResponse.data,
    qt_meta_data_UpdateWorkflowResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UpdateWorkflowResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateWorkflowResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateWorkflowResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int UpdateWorkflowResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_InvitedToWorkflowResponse_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InvitedToWorkflowResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InvitedToWorkflowResponse_t qt_meta_stringdata_InvitedToWorkflowResponse = {
    {
QT_MOC_LITERAL(0, 0, 25), // "InvitedToWorkflowResponse"
QT_MOC_LITERAL(1, 26, 14), // "responseHandle"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10) // "itemObject"

    },
    "InvitedToWorkflowResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InvitedToWorkflowResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void InvitedToWorkflowResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InvitedToWorkflowResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InvitedToWorkflowResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_InvitedToWorkflowResponse.data,
    qt_meta_data_InvitedToWorkflowResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InvitedToWorkflowResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InvitedToWorkflowResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InvitedToWorkflowResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int InvitedToWorkflowResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AllWorkflowsResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AllWorkflowsResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AllWorkflowsResponse_t qt_meta_stringdata_AllWorkflowsResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AllWorkflowsResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "AllWorkflowsResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AllWorkflowsResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void AllWorkflowsResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AllWorkflowsResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AllWorkflowsResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_AllWorkflowsResponse.data,
    qt_meta_data_AllWorkflowsResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AllWorkflowsResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AllWorkflowsResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AllWorkflowsResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int AllWorkflowsResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SingleWorkflowDataResponse_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SingleWorkflowDataResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SingleWorkflowDataResponse_t qt_meta_stringdata_SingleWorkflowDataResponse = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SingleWorkflowDataResponse"
QT_MOC_LITERAL(1, 27, 14), // "responseHandle"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10) // "itemObject"

    },
    "SingleWorkflowDataResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SingleWorkflowDataResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void SingleWorkflowDataResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SingleWorkflowDataResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SingleWorkflowDataResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_SingleWorkflowDataResponse.data,
    qt_meta_data_SingleWorkflowDataResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SingleWorkflowDataResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SingleWorkflowDataResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SingleWorkflowDataResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int SingleWorkflowDataResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SendStatistics_t {
    QByteArrayData data[4];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendStatistics_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendStatistics_t qt_meta_stringdata_SendStatistics = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SendStatistics"
QT_MOC_LITERAL(1, 15, 14), // "responseHandle"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10) // "itemObject"

    },
    "SendStatistics\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendStatistics[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void SendStatistics::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SendStatistics *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendStatistics::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
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
    return AbstractResponseHandler::qt_metacast(_clname);
}

int SendStatistics::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SendProfileResponse_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendProfileResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendProfileResponse_t qt_meta_stringdata_SendProfileResponse = {
    {
QT_MOC_LITERAL(0, 0, 19), // "SendProfileResponse"
QT_MOC_LITERAL(1, 20, 14), // "responseHandle"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10) // "itemObject"

    },
    "SendProfileResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendProfileResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void SendProfileResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SendProfileResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendProfileResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_SendProfileResponse.data,
    qt_meta_data_SendProfileResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendProfileResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendProfileResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendProfileResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int SendProfileResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToUpdateProfileResponse_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToUpdateProfileResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToUpdateProfileResponse_t qt_meta_stringdata_ToUpdateProfileResponse = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ToUpdateProfileResponse"
QT_MOC_LITERAL(1, 24, 14), // "responseHandle"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 10) // "itemObject"

    },
    "ToUpdateProfileResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToUpdateProfileResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToUpdateProfileResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToUpdateProfileResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToUpdateProfileResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToUpdateProfileResponse.data,
    qt_meta_data_ToUpdateProfileResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToUpdateProfileResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToUpdateProfileResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToUpdateProfileResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToUpdateProfileResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToCreateListResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToCreateListResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToCreateListResponse_t qt_meta_stringdata_ToCreateListResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ToCreateListResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "ToCreateListResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToCreateListResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToCreateListResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToCreateListResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToCreateListResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToCreateListResponse.data,
    qt_meta_data_ToCreateListResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToCreateListResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToCreateListResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToCreateListResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToCreateListResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToRenameListResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToRenameListResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToRenameListResponse_t qt_meta_stringdata_ToRenameListResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ToRenameListResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "ToRenameListResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToRenameListResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToRenameListResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToRenameListResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToRenameListResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToRenameListResponse.data,
    qt_meta_data_ToRenameListResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToRenameListResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToRenameListResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToRenameListResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToRenameListResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToGetListsResponse_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToGetListsResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToGetListsResponse_t qt_meta_stringdata_ToGetListsResponse = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ToGetListsResponse"
QT_MOC_LITERAL(1, 19, 14), // "responseHandle"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10) // "itemObject"

    },
    "ToGetListsResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToGetListsResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToGetListsResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToGetListsResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToGetListsResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToGetListsResponse.data,
    qt_meta_data_ToGetListsResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToGetListsResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToGetListsResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToGetListsResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToGetListsResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToRemoveListResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToRemoveListResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToRemoveListResponse_t qt_meta_stringdata_ToRemoveListResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ToRemoveListResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "ToRemoveListResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToRemoveListResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToRemoveListResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToRemoveListResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToRemoveListResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToRemoveListResponse.data,
    qt_meta_data_ToRemoveListResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToRemoveListResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToRemoveListResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToRemoveListResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToRemoveListResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToCreateTaskResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToCreateTaskResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToCreateTaskResponse_t qt_meta_stringdata_ToCreateTaskResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ToCreateTaskResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "ToCreateTaskResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToCreateTaskResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToCreateTaskResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToCreateTaskResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToCreateTaskResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToCreateTaskResponse.data,
    qt_meta_data_ToCreateTaskResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToCreateTaskResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToCreateTaskResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToCreateTaskResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToCreateTaskResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToGetTasksResponse_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToGetTasksResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToGetTasksResponse_t qt_meta_stringdata_ToGetTasksResponse = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ToGetTasksResponse"
QT_MOC_LITERAL(1, 19, 14), // "responseHandle"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10) // "itemObject"

    },
    "ToGetTasksResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToGetTasksResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToGetTasksResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToGetTasksResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToGetTasksResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToGetTasksResponse.data,
    qt_meta_data_ToGetTasksResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToGetTasksResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToGetTasksResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToGetTasksResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToGetTasksResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToUpdateTaskResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToUpdateTaskResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToUpdateTaskResponse_t qt_meta_stringdata_ToUpdateTaskResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ToUpdateTaskResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "ToUpdateTaskResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToUpdateTaskResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToUpdateTaskResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToUpdateTaskResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToUpdateTaskResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToUpdateTaskResponse.data,
    qt_meta_data_ToUpdateTaskResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToUpdateTaskResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToUpdateTaskResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToUpdateTaskResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToUpdateTaskResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToMoveTaskResponse_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToMoveTaskResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToMoveTaskResponse_t qt_meta_stringdata_ToMoveTaskResponse = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ToMoveTaskResponse"
QT_MOC_LITERAL(1, 19, 14), // "responseHandle"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10) // "itemObject"

    },
    "ToMoveTaskResponse\0responseHandle\0\0"
    "itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToMoveTaskResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToMoveTaskResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToMoveTaskResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToMoveTaskResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToMoveTaskResponse.data,
    qt_meta_data_ToMoveTaskResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToMoveTaskResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToMoveTaskResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToMoveTaskResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToMoveTaskResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ToRemoveTaskResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToRemoveTaskResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToRemoveTaskResponse_t qt_meta_stringdata_ToRemoveTaskResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ToRemoveTaskResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "ToRemoveTaskResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToRemoveTaskResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void ToRemoveTaskResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ToRemoveTaskResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ToRemoveTaskResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_ToRemoveTaskResponse.data,
    qt_meta_data_ToRemoveTaskResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ToRemoveTaskResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToRemoveTaskResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ToRemoveTaskResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int ToRemoveTaskResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_SendTaskDataResponse_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendTaskDataResponse_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendTaskDataResponse_t qt_meta_stringdata_SendTaskDataResponse = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SendTaskDataResponse"
QT_MOC_LITERAL(1, 21, 14), // "responseHandle"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10) // "itemObject"

    },
    "SendTaskDataResponse\0responseHandle\0"
    "\0itemObject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendTaskDataResponse[] = {

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
    QMetaType::Void, QMetaType::QJsonObject,    3,

       0        // eod
};

void SendTaskDataResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SendTaskDataResponse *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->responseHandle((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendTaskDataResponse::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractResponseHandler::staticMetaObject>(),
    qt_meta_stringdata_SendTaskDataResponse.data,
    qt_meta_data_SendTaskDataResponse,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendTaskDataResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendTaskDataResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendTaskDataResponse.stringdata0))
        return static_cast<void*>(this);
    return AbstractResponseHandler::qt_metacast(_clname);
}

int SendTaskDataResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractResponseHandler::qt_metacall(_c, _id, _a);
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
