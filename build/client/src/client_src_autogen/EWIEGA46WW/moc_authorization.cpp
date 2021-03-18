/****************************************************************************
** Meta object code from reading C++ file 'authorization.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../client/src/authorization.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'authorization.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Authorization_t {
    QByteArrayData data[20];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Authorization_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Authorization_t qt_meta_stringdata_Authorization = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Authorization"
QT_MOC_LITERAL(1, 14, 20), // "serverResponseSignIn"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "valid"
QT_MOC_LITERAL(4, 42, 5), // "login"
QT_MOC_LITERAL(5, 48, 4), // "mail"
QT_MOC_LITERAL(6, 53, 2), // "id"
QT_MOC_LITERAL(7, 56, 20), // "serverResponseSignUp"
QT_MOC_LITERAL(8, 77, 3), // "err"
QT_MOC_LITERAL(9, 81, 6), // "strErr"
QT_MOC_LITERAL(10, 88, 19), // "parseResponseSignIn"
QT_MOC_LITERAL(11, 108, 13), // "signUpHandler"
QT_MOC_LITERAL(12, 122, 8), // "password"
QT_MOC_LITERAL(13, 131, 13), // "signInHandler"
QT_MOC_LITERAL(14, 145, 5), // "ident"
QT_MOC_LITERAL(15, 151, 9), // "setUserId"
QT_MOC_LITERAL(16, 161, 11), // "SignUpError"
QT_MOC_LITERAL(17, 173, 6), // "NO_ERR"
QT_MOC_LITERAL(18, 180, 8), // "LOGIN_EX"
QT_MOC_LITERAL(19, 189, 7) // "MAIL_EX"

    },
    "Authorization\0serverResponseSignIn\0\0"
    "valid\0login\0mail\0id\0serverResponseSignUp\0"
    "err\0strErr\0parseResponseSignIn\0"
    "signUpHandler\0password\0signInHandler\0"
    "ident\0setUserId\0SignUpError\0NO_ERR\0"
    "LOGIN_EX\0MAIL_EX"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Authorization[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       1,  142, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   74,    2, 0x06 /* Public */,
       1,    3,   83,    2, 0x26 /* Public | MethodCloned */,
       1,    2,   90,    2, 0x26 /* Public | MethodCloned */,
       1,    1,   95,    2, 0x26 /* Public | MethodCloned */,
       7,    2,   98,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    4,  103,    2, 0x08 /* Private */,
      10,    3,  112,    2, 0x28 /* Private | MethodCloned */,
      10,    2,  119,    2, 0x28 /* Private | MethodCloned */,
      10,    1,  124,    2, 0x28 /* Private | MethodCloned */,

 // methods: name, argc, parameters, tag, flags
      11,    3,  127,    2, 0x02 /* Public */,
      13,    2,  134,    2, 0x02 /* Public */,
      15,    1,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   12,
    QMetaType::Void, QMetaType::Int,    6,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    3,  147,

 // enum data: key, value
      17, uint(Authorization::NO_ERR),
      18, uint(Authorization::LOGIN_EX),
      19, uint(Authorization::MAIL_EX),

       0        // eod
};

void Authorization::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Authorization *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serverResponseSignIn((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->serverResponseSignIn((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->serverResponseSignIn((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->serverResponseSignIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->serverResponseSignUp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->parseResponseSignIn((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 6: _t->parseResponseSignIn((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->parseResponseSignIn((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->parseResponseSignIn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->signUpHandler((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 10: _t->signInHandler((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->setUserId((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Authorization::*)(bool , const QString & , const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Authorization::serverResponseSignIn)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Authorization::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Authorization::serverResponseSignUp)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Authorization::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Authorization.data,
    qt_meta_data_Authorization,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Authorization::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Authorization::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Authorization.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Authorization::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Authorization::serverResponseSignIn(bool _t1, const QString & _t2, const QString & _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 4
void Authorization::serverResponseSignUp(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
