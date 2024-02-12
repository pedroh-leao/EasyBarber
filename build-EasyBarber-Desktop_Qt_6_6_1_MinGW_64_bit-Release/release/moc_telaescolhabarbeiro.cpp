/****************************************************************************
** Meta object code from reading C++ file 'telaescolhabarbeiro.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EasyBarber/View/telaescolhabarbeiro.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telaescolhabarbeiro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS = QtMocHelpers::stringData(
    "TelaEscolhaBarbeiro",
    "abrirTelaEscolhaData",
    "",
    "Barbeiro*",
    "barbeiro"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[20];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS_t qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "TelaEscolhaBarbeiro"
        QT_MOC_LITERAL(20, 20),  // "abrirTelaEscolhaData"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 9),  // "Barbeiro*"
        QT_MOC_LITERAL(52, 8)   // "barbeiro"
    },
    "TelaEscolhaBarbeiro",
    "abrirTelaEscolhaData",
    "",
    "Barbeiro*",
    "barbeiro"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTelaEscolhaBarbeiroENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject TelaEscolhaBarbeiro::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTelaEscolhaBarbeiroENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TelaEscolhaBarbeiro, std::true_type>,
        // method 'abrirTelaEscolhaData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Barbeiro *, std::false_type>
    >,
    nullptr
} };

void TelaEscolhaBarbeiro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelaEscolhaBarbeiro *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->abrirTelaEscolhaData((*reinterpret_cast< std::add_pointer_t<Barbeiro*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TelaEscolhaBarbeiro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaEscolhaBarbeiro::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTelaEscolhaBarbeiroENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TelaEscolhaBarbeiro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
