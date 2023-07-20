/****************************************************************************
** Meta object code from reading C++ file 'datamanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "datamanager.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datamanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDataManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDataManagerENDCLASS = QtMocHelpers::stringData(
    "DataManager",
    "update",
    "",
    "key",
    "Color",
    "colorlink",
    "htmlURL",
    "getjson",
    "getBackgrand",
    "getBackdigram",
    "getfont",
    "getparent",
    "str",
    "getChildren",
    "data"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDataManagerENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[12];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[8];
    char stringdata7[8];
    char stringdata8[13];
    char stringdata9[14];
    char stringdata10[8];
    char stringdata11[10];
    char stringdata12[4];
    char stringdata13[12];
    char stringdata14[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDataManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDataManagerENDCLASS_t qt_meta_stringdata_CLASSDataManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "DataManager"
        QT_MOC_LITERAL(12, 6),  // "update"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 3),  // "key"
        QT_MOC_LITERAL(24, 5),  // "Color"
        QT_MOC_LITERAL(30, 9),  // "colorlink"
        QT_MOC_LITERAL(40, 7),  // "htmlURL"
        QT_MOC_LITERAL(48, 7),  // "getjson"
        QT_MOC_LITERAL(56, 12),  // "getBackgrand"
        QT_MOC_LITERAL(69, 13),  // "getBackdigram"
        QT_MOC_LITERAL(83, 7),  // "getfont"
        QT_MOC_LITERAL(91, 9),  // "getparent"
        QT_MOC_LITERAL(101, 3),  // "str"
        QT_MOC_LITERAL(105, 11),  // "getChildren"
        QT_MOC_LITERAL(117, 4)   // "data"
    },
    "DataManager",
    "update",
    "",
    "key",
    "Color",
    "colorlink",
    "htmlURL",
    "getjson",
    "getBackgrand",
    "getBackdigram",
    "getfont",
    "getparent",
    "str",
    "getChildren",
    "data"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDataManagerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   69,    2, 0x10a,    5 /* Public | MethodIsConst  */,
       7,    0,   70,    2, 0x10a,    6 /* Public | MethodIsConst  */,
       8,    0,   71,    2, 0x10a,    7 /* Public | MethodIsConst  */,
       9,    0,   72,    2, 0x10a,    8 /* Public | MethodIsConst  */,
      10,    0,   73,    2, 0x10a,    9 /* Public | MethodIsConst  */,
      11,    1,   74,    2, 0x0a,   10 /* Public */,
      13,    1,   77,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,

 // slots: parameters
    QMetaType::QString,
    QMetaType::QJsonValue,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QStringList,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject DataManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDataManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDataManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDataManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DataManager, std::true_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'htmlURL'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getjson'
        QtPrivate::TypeAndForceComplete<QJsonValue, std::false_type>,
        // method 'getBackgrand'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getBackdigram'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getfont'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getparent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'getChildren'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QString> &, std::false_type>
    >,
    nullptr
} };

void DataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: { QString _r = _t->htmlURL();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QJsonValue _r = _t->getjson();
            if (_a[0]) *reinterpret_cast< QJsonValue*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getBackgrand();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getBackdigram();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->getfont();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->getparent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->getChildren((*reinterpret_cast< std::add_pointer_t<QList<QString>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataManager::*)(int , QString , QString );
            if (_t _q_method = &DataManager::update; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *DataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDataManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DataManager::update(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
