/****************************************************************************
** Meta object code from reading C++ file 'workflow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../client/src/workflow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'workflow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Workflow_t {
    QByteArrayData data[54];
    char stringdata0[814];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Workflow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Workflow_t qt_meta_stringdata_Workflow = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Workflow"
QT_MOC_LITERAL(1, 9, 11), // "gotTaskData"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 30), // "serverAllListWorkflowsResponse"
QT_MOC_LITERAL(4, 53, 5), // "array"
QT_MOC_LITERAL(5, 59, 28), // "serverCreateWorkflowResponse"
QT_MOC_LITERAL(6, 88, 5), // "title"
QT_MOC_LITERAL(7, 94, 2), // "id"
QT_MOC_LITERAL(8, 97, 27), // "serverWorkflowListsResponse"
QT_MOC_LITERAL(9, 125, 25), // "serverCreatedListResponse"
QT_MOC_LITERAL(10, 151, 24), // "serverCreateTaskResponse"
QT_MOC_LITERAL(11, 176, 6), // "listId"
QT_MOC_LITERAL(12, 183, 22), // "serverGetTasksResponse"
QT_MOC_LITERAL(13, 206, 22), // "serverMoveTaskResponse"
QT_MOC_LITERAL(14, 229, 3), // "msg"
QT_MOC_LITERAL(15, 233, 24), // "serverRemoveTaskResponse"
QT_MOC_LITERAL(16, 258, 6), // "taskId"
QT_MOC_LITERAL(17, 265, 25), // "serverGetTaskDataResponse"
QT_MOC_LITERAL(18, 291, 5), // "descr"
QT_MOC_LITERAL(19, 297, 3), // "obj"
QT_MOC_LITERAL(20, 301, 24), // "serverRemoveListResponse"
QT_MOC_LITERAL(21, 326, 24), // "serverRenameListResponse"
QT_MOC_LITERAL(22, 351, 4), // "name"
QT_MOC_LITERAL(23, 356, 24), // "serverRenameTaskResponse"
QT_MOC_LITERAL(24, 381, 21), // "parseAllListWorkflows"
QT_MOC_LITERAL(25, 403, 20), // "parseCreatedWorkflow"
QT_MOC_LITERAL(26, 424, 10), // "parseLists"
QT_MOC_LITERAL(27, 435, 16), // "parseCreatedList"
QT_MOC_LITERAL(28, 452, 15), // "parseCreateTask"
QT_MOC_LITERAL(29, 468, 13), // "parseGetTasks"
QT_MOC_LITERAL(30, 482, 13), // "parseMoveTask"
QT_MOC_LITERAL(31, 496, 15), // "parseRemoveTask"
QT_MOC_LITERAL(32, 512, 16), // "parseGetTaskData"
QT_MOC_LITERAL(33, 529, 3), // "obg"
QT_MOC_LITERAL(34, 533, 15), // "parseRemoveList"
QT_MOC_LITERAL(35, 549, 15), // "parseRenameList"
QT_MOC_LITERAL(36, 565, 15), // "parseRenameTask"
QT_MOC_LITERAL(37, 581, 18), // "getAllListWorkflow"
QT_MOC_LITERAL(38, 600, 14), // "createWorkflow"
QT_MOC_LITERAL(39, 615, 11), // "appendLists"
QT_MOC_LITERAL(40, 627, 10), // "removeList"
QT_MOC_LITERAL(41, 638, 10), // "renameList"
QT_MOC_LITERAL(42, 649, 10), // "appendTask"
QT_MOC_LITERAL(43, 660, 10), // "renameTask"
QT_MOC_LITERAL(44, 671, 15), // "openDescription"
QT_MOC_LITERAL(45, 687, 15), // "saveDescription"
QT_MOC_LITERAL(46, 703, 10), // "removeTask"
QT_MOC_LITERAL(47, 714, 13), // "moveSetCardId"
QT_MOC_LITERAL(48, 728, 15), // "moveSetToListId"
QT_MOC_LITERAL(49, 744, 17), // "moveSetCurrListId"
QT_MOC_LITERAL(50, 762, 11), // "moveRequest"
QT_MOC_LITERAL(51, 774, 11), // "toOtherList"
QT_MOC_LITERAL(52, 786, 5), // "index"
QT_MOC_LITERAL(53, 792, 21) // "getWorkflowsModelById"

    },
    "Workflow\0gotTaskData\0\0"
    "serverAllListWorkflowsResponse\0array\0"
    "serverCreateWorkflowResponse\0title\0"
    "id\0serverWorkflowListsResponse\0"
    "serverCreatedListResponse\0"
    "serverCreateTaskResponse\0listId\0"
    "serverGetTasksResponse\0serverMoveTaskResponse\0"
    "msg\0serverRemoveTaskResponse\0taskId\0"
    "serverGetTaskDataResponse\0descr\0obj\0"
    "serverRemoveListResponse\0"
    "serverRenameListResponse\0name\0"
    "serverRenameTaskResponse\0parseAllListWorkflows\0"
    "parseCreatedWorkflow\0parseLists\0"
    "parseCreatedList\0parseCreateTask\0"
    "parseGetTasks\0parseMoveTask\0parseRemoveTask\0"
    "parseGetTaskData\0obg\0parseRemoveList\0"
    "parseRenameList\0parseRenameTask\0"
    "getAllListWorkflow\0createWorkflow\0"
    "appendLists\0removeList\0renameList\0"
    "appendTask\0renameTask\0openDescription\0"
    "saveDescription\0removeTask\0moveSetCardId\0"
    "moveSetToListId\0moveSetCurrListId\0"
    "moveRequest\0toOtherList\0index\0"
    "getWorkflowsModelById"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Workflow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    1,  220,    2, 0x06 /* Public */,
       5,    2,  223,    2, 0x06 /* Public */,
       8,    1,  228,    2, 0x06 /* Public */,
       9,    2,  231,    2, 0x06 /* Public */,
      10,    3,  236,    2, 0x06 /* Public */,
      12,    1,  243,    2, 0x06 /* Public */,
      13,    1,  246,    2, 0x06 /* Public */,
      15,    3,  249,    2, 0x06 /* Public */,
      17,    4,  256,    2, 0x06 /* Public */,
      20,    2,  265,    2, 0x06 /* Public */,
      21,    3,  270,    2, 0x06 /* Public */,
      23,    4,  277,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    1,  286,    2, 0x08 /* Private */,
      25,    2,  289,    2, 0x08 /* Private */,
      26,    1,  294,    2, 0x08 /* Private */,
      27,    2,  297,    2, 0x08 /* Private */,
      28,    3,  302,    2, 0x08 /* Private */,
      29,    1,  309,    2, 0x08 /* Private */,
      30,    1,  312,    2, 0x08 /* Private */,
      31,    3,  315,    2, 0x08 /* Private */,
      32,    4,  322,    2, 0x08 /* Private */,
      34,    2,  331,    2, 0x08 /* Private */,
      35,    3,  336,    2, 0x08 /* Private */,
      36,    4,  343,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      37,    0,  352,    2, 0x02 /* Public */,
      38,    1,  353,    2, 0x02 /* Public */,
      39,    1,  356,    2, 0x02 /* Public */,
      40,    1,  359,    2, 0x02 /* Public */,
      41,    2,  362,    2, 0x02 /* Public */,
      42,    2,  367,    2, 0x02 /* Public */,
      43,    2,  372,    2, 0x02 /* Public */,
      44,    1,  377,    2, 0x02 /* Public */,
      45,    0,  380,    2, 0x02 /* Public */,
      46,    1,  381,    2, 0x02 /* Public */,
      47,    1,  384,    2, 0x02 /* Public */,
      48,    1,  387,    2, 0x02 /* Public */,
      49,    1,  390,    2, 0x02 /* Public */,
      50,    2,  393,    2, 0x02 /* Public */,
      50,    1,  398,    2, 0x22 /* Public | MethodCloned */,
      53,    1,  401,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonArray,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QJsonObject,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    7,   11,
    QMetaType::Void, QMetaType::QJsonObject,    4,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   14,   11,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QJsonArray, QMetaType::QJsonObject,   14,   18,    4,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   14,   11,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,   14,   11,   16,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonArray,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QJsonObject,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    6,    7,   11,
    QMetaType::Void, QMetaType::QJsonObject,    4,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   14,   11,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QJsonArray, QMetaType::QJsonObject,   14,   18,    4,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   14,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   14,   11,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QString,   14,   11,   16,   22,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   22,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int,   51,   52,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void Workflow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Workflow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->gotTaskData(); break;
        case 1: _t->serverAllListWorkflowsResponse((*reinterpret_cast< QJsonArray(*)>(_a[1]))); break;
        case 2: _t->serverCreateWorkflowResponse((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->serverWorkflowListsResponse((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 4: _t->serverCreatedListResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->serverCreateTaskResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->serverGetTasksResponse((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 7: _t->serverMoveTaskResponse((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->serverRemoveTaskResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->serverGetTaskDataResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QJsonArray(*)>(_a[3])),(*reinterpret_cast< QJsonObject(*)>(_a[4]))); break;
        case 10: _t->serverRemoveListResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->serverRenameListResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->serverRenameTaskResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 13: _t->parseAllListWorkflows((*reinterpret_cast< QJsonArray(*)>(_a[1]))); break;
        case 14: _t->parseCreatedWorkflow((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->parseLists((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 16: _t->parseCreatedList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->parseCreateTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 18: _t->parseGetTasks((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 19: _t->parseMoveTask((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->parseRemoveTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->parseGetTaskData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QJsonArray(*)>(_a[3])),(*reinterpret_cast< QJsonObject(*)>(_a[4]))); break;
        case 22: _t->parseRemoveList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->parseRenameList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 24: _t->parseRenameTask((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 25: _t->getAllListWorkflow(); break;
        case 26: _t->createWorkflow((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->appendLists((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 28: _t->removeList((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->renameList((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 30: _t->appendTask((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->renameTask((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->openDescription((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->saveDescription(); break;
        case 34: _t->removeTask((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->moveSetCardId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->moveSetToListId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->moveSetCurrListId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->moveRequest((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 39: _t->moveRequest((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->getWorkflowsModelById((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Workflow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::gotTaskData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverAllListWorkflowsResponse)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverCreateWorkflowResponse)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverWorkflowListsResponse)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverCreatedListResponse)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverCreateTaskResponse)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverGetTasksResponse)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverMoveTaskResponse)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverRemoveTaskResponse)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & , const QString & , QJsonArray , QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverGetTaskDataResponse)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverRemoveListResponse)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverRenameListResponse)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Workflow::*)(const QString & , int , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Workflow::serverRenameTaskResponse)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Workflow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Workflow.data,
    qt_meta_data_Workflow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Workflow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Workflow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Workflow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Workflow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void Workflow::gotTaskData()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Workflow::serverAllListWorkflowsResponse(QJsonArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Workflow::serverCreateWorkflowResponse(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Workflow::serverWorkflowListsResponse(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Workflow::serverCreatedListResponse(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Workflow::serverCreateTaskResponse(const QString & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Workflow::serverGetTasksResponse(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Workflow::serverMoveTaskResponse(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Workflow::serverRemoveTaskResponse(const QString & _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Workflow::serverGetTaskDataResponse(const QString & _t1, const QString & _t2, QJsonArray _t3, QJsonObject _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Workflow::serverRemoveListResponse(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Workflow::serverRenameListResponse(const QString & _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Workflow::serverRenameTaskResponse(const QString & _t1, int _t2, int _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
