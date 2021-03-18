/****************************************************************************
** Meta object code from reading C++ file 'descriptionmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../client/src/model/descriptionmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'descriptionmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DescriptionModel_t {
    QByteArrayData data[11];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DescriptionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DescriptionModel_t qt_meta_stringdata_DescriptionModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DescriptionModel"
QT_MOC_LITERAL(1, 17, 18), // "getTaskDescription"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "getTaskTitle"
QT_MOC_LITERAL(4, 50, 9), // "getTaskId"
QT_MOC_LITERAL(5, 60, 6), // "insert"
QT_MOC_LITERAL(6, 67, 16), // "pointDescription"
QT_MOC_LITERAL(7, 84, 19), // "QPair<bool,QString>"
QT_MOC_LITERAL(8, 104, 4), // "pair"
QT_MOC_LITERAL(9, 109, 6), // "append"
QT_MOC_LITERAL(10, 116, 12) // "clearAllData"

    },
    "DescriptionModel\0getTaskDescription\0"
    "\0getTaskTitle\0getTaskId\0insert\0"
    "pointDescription\0QPair<bool,QString>\0"
    "pair\0append\0clearAllData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DescriptionModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x02 /* Public */,
       3,    0,   50,    2, 0x02 /* Public */,
       4,    0,   51,    2, 0x02 /* Public */,
       5,    1,   52,    2, 0x02 /* Public */,
       5,    1,   55,    2, 0x02 /* Public */,
       9,    0,   58,    2, 0x02 /* Public */,
      10,    0,   59,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DescriptionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DescriptionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->getTaskDescription();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->getTaskTitle();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->getTaskId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->insert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->insert((*reinterpret_cast< const QPair<bool,QString>(*)>(_a[1]))); break;
        case 5: _t->append(); break;
        case 6: _t->clearAllData(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DescriptionModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_DescriptionModel.data,
    qt_meta_data_DescriptionModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DescriptionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DescriptionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DescriptionModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int DescriptionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
