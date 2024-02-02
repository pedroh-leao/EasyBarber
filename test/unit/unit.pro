TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../../EasyBarber/barbearia.cpp \
        ../../EasyBarber/barbeiro.cpp \
        ../../EasyBarber/cliente.cpp \
        ../../EasyBarber/horario.cpp \
        ../../EasyBarber/pessoa.cpp \
        main.cpp \
        unit_barbearia.cpp \
        unit_barbeiro.cpp \
        unit_cliente.cpp \
        unit_horario.cpp \
        unit_pessoa.cpp

HEADERS += \
    ../../EasyBarber/barbearia.h \
    ../../EasyBarber/barbeiro.h \
    ../../EasyBarber/cliente.h \
    ../../EasyBarber/horario.h \
    ../../EasyBarber/pessoa.h \
    unit_barbearia.h \
    unit_barbeiro.h \
    unit_cliente.h \
    unit_horario.h \
    unit_pessoa.h
