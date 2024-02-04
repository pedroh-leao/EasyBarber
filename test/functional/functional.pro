TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ../../EasyBarber/Barbeiro.cpp \
        ../../EasyBarber/barbearia.cpp \
        ../../EasyBarber/cliente.cpp \
        ../../EasyBarber/horario.cpp \
        ../../EasyBarber/pessoa.cpp \
        functional_tests.cpp \
        main.cpp

HEADERS += \
    ../../EasyBarber/Barbeiro.h \
    ../../EasyBarber/barbearia.h \
    ../../EasyBarber/cliente.h \
    ../../EasyBarber/horario.h \
    ../../EasyBarber/pessoa.h \
    functional_tests.h
