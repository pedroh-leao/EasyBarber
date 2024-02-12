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
        ../../EasyBarber/Controller/controller_horario.cpp \
        ../../EasyBarber/DAO/dao_barbearia.cpp \
        ../../EasyBarber/DAO/dao_barbeiro.cpp \
        ../../EasyBarber/DAO/dao_cliente.cpp \
        ../../EasyBarber/DAO/dao_horario.cpp \
        ../../EasyBarber/DAO/dao_pessoa.cpp \
        ../../EasyBarber/Model/Barbeiro.cpp \
        ../../EasyBarber/Model/barbearia.cpp \
        ../../EasyBarber/Model/cliente.cpp \
        ../../EasyBarber/Model/horario.cpp \
        ../../EasyBarber/Model/pessoa.cpp \
        ../database/database.cpp \
        functional_tests.cpp \
        main.cpp

HEADERS += \
    ../../EasyBarber/Controller/controller_barbearia.h \
    ../../EasyBarber/Controller/controller_barbeiro.h \
    ../../EasyBarber/Controller/controller_cliente.h \
    ../../EasyBarber/Controller/controller_horario.h \
    ../../EasyBarber/DAO/dao_barbearia.h \
    ../../EasyBarber/DAO/dao_barbeiro.h \
    ../../EasyBarber/DAO/dao_cliente.h \
    ../../EasyBarber/DAO/dao_horario.h \
    ../../EasyBarber/DAO/dao_pessoa.h \
    ../../EasyBarber/Model/Barbeiro.h \
    ../../EasyBarber/Model/barbearia.h \
    ../../EasyBarber/Model/cliente.h \
    ../../EasyBarber/Model/horario.h \
    ../../EasyBarber/Model/pessoa.h \
    ../database/database.h \
    functional_tests.h
