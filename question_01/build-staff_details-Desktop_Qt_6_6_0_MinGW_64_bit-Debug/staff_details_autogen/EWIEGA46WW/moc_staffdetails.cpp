/****************************************************************************
** Meta object code from reading C++ file 'staffdetails.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../staff_details/staffdetails.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'staffdetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSStaffDetailsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSStaffDetailsENDCLASS = QtMocHelpers::stringData(
    "StaffDetails",
    "getAppointmentType",
    "",
    "appointmentType",
    "AppointmentTypes",
    "permanent",
    "part_time",
    "contract"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSStaffDetailsENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[17];
    char stringdata5[10];
    char stringdata6[10];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSStaffDetailsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSStaffDetailsENDCLASS_t qt_meta_stringdata_CLASSStaffDetailsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "StaffDetails"
        QT_MOC_LITERAL(13, 18),  // "getAppointmentType"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 15),  // "appointmentType"
        QT_MOC_LITERAL(49, 16),  // "AppointmentTypes"
        QT_MOC_LITERAL(66, 9),  // "permanent"
        QT_MOC_LITERAL(76, 9),  // "part_time"
        QT_MOC_LITERAL(86, 8)   // "contract"
    },
    "StaffDetails",
    "getAppointmentType",
    "",
    "appointmentType",
    "AppointmentTypes",
    "permanent",
    "part_time",
    "contract"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSStaffDetailsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // enums: name, alias, flags, count, data
       4,    4, 0x0,    3,   28,

 // enum data: key, value
       5, uint(StaffDetails::permanent),
       6, uint(StaffDetails::part_time),
       7, uint(StaffDetails::contract),

       0        // eod
};

Q_CONSTINIT const QMetaObject StaffDetails::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSStaffDetailsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSStaffDetailsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSStaffDetailsENDCLASS_t,
        // enum 'AppointmentTypes'
        QtPrivate::TypeAndForceComplete<StaffDetails::AppointmentTypes, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StaffDetails, std::true_type>,
        // method 'getAppointmentType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void StaffDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StaffDetails *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getAppointmentType((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *StaffDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StaffDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSStaffDetailsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StaffDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
