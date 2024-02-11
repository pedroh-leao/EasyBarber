QT       += core gui sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        ../../EasyBarber/Controller/controller_barbearia.cpp \
        ../../EasyBarber/Controller/controller_barbeiro.cpp \
        ../../EasyBarber/Controller/controller_cliente.cpp \
        ../../EasyBarber/DAO/dao_barbearia.cpp \
        ../../EasyBarber/DAO/dao_barbeiro.cpp \
        ../../EasyBarber/DAO/dao_cliente.cpp \
        ../../EasyBarber/DAO/dao_pessoa.cpp \
        ../../EasyBarber/Model/Barbeiro.cpp \
        ../../EasyBarber/Model/Cliente.cpp \
        ../../EasyBarber/Model/Horario.cpp \
        ../../EasyBarber/Model/barbearia.cpp \
        ../../EasyBarber/Model/pessoa.cpp \
        ../database/database.cpp \
        main.cpp \
        unit_barbearia.cpp \
        unit_barbeiro.cpp \
        unit_cliente.cpp \
        unit_horario.cpp \
        unit_pessoa.cpp

HEADERS += \
    ../../EasyBarber/Controller/controller_barbearia.h \
    ../../EasyBarber/Controller/controller_barbeiro.h \
    ../../EasyBarber/Controller/controller_cliente.h \
    ../../EasyBarber/DAO/dao_barbearia.h \
    ../../EasyBarber/DAO/dao_barbeiro.h \
    ../../EasyBarber/DAO/dao_cliente.h \
    ../../EasyBarber/DAO/dao_pessoa.h \
    ../../EasyBarber/Model/Barbeiro.h \
    ../../EasyBarber/Model/Cliente.h \
    ../../EasyBarber/Model/Horario.h \
    ../../EasyBarber/Model/barbearia.h \
    ../../EasyBarber/Model/pessoa.h \
    ../database/database.h \
    unit_barbearia.h \
    unit_barbeiro.h \
    unit_cliente.h \
    unit_horario.h \
    unit_pessoa.h
