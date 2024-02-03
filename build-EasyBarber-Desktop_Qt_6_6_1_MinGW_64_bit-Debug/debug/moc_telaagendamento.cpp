/****************************************************************************
** Meta object code from reading C++ file 'telaagendamento.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EasyBarber/telaagendamento.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telaagendamento.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS = QtMocHelpers::stringData(
    "TelaAgendamento",
    "realizaAgendamento",
    "",
    "Barbearia*",
    "barbearia",
    "Barbeiro*",
    "barbeiro",
    "Cliente*",
    "cliente",
    "habilitaRealizaAgendBtn",
    "string",
    "time"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[16];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[8];
    char stringdata9[24];
    char stringdata10[7];
    char stringdata11[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS_t qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "TelaAgendamento"
        QT_MOC_LITERAL(16, 18),  // "realizaAgendamento"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 10),  // "Barbearia*"
        QT_MOC_LITERAL(47, 9),  // "barbearia"
        QT_MOC_LITERAL(57, 9),  // "Barbeiro*"
        QT_MOC_LITERAL(67, 8),  // "barbeiro"
        QT_MOC_LITERAL(76, 8),  // "Cliente*"
        QT_MOC_LITERAL(85, 7),  // "cliente"
        QT_MOC_LITERAL(93, 23),  // "habilitaRealizaAgendBtn"
        QT_MOC_LITERAL(117, 6),  // "string"
        QT_MOC_LITERAL(124, 4)   // "time"
    },
    "TelaAgendamento",
    "realizaAgendamento",
    "",
    "Barbearia*",
    "barbearia",
    "Barbeiro*",
    "barbeiro",
    "Cliente*",
    "cliente",
    "habilitaRealizaAgendBtn",
    "string",
    "time"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTelaAgendamentoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   26,    2, 0x0a,    1 /* Public */,
       9,    1,   33,    2, 0x0a,    5 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject TelaAgendamento::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTelaAgendamentoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TelaAgendamento, std::true_type>,
        // method 'realizaAgendamento'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Barbearia *, std::false_type>,
        QtPrivate::TypeAndForceComplete<Barbeiro *, std::false_type>,
        QtPrivate::TypeAndForceComplete<Cliente *, std::false_type>,
        // method 'habilitaRealizaAgendBtn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<string, std::false_type>
    >,
    nullptr
} };

void TelaAgendamento::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelaAgendamento *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->realizaAgendamento((*reinterpret_cast< std::add_pointer_t<Barbearia*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Barbeiro*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Cliente*>>(_a[3]))); break;
        case 1: _t->habilitaRealizaAgendBtn((*reinterpret_cast< std::add_pointer_t<string>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TelaAgendamento::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaAgendamento::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTelaAgendamentoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TelaAgendamento::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
