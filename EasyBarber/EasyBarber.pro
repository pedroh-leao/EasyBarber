QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DAO/dao_barbearia.cpp \
    DAO/dao_barbeiro.cpp \
    DAO/dao_cliente.cpp \
    DAO/dao_pessoa.cpp \
    Model/barbearia.cpp \
    Model/barbeiro.cpp \
    Model/cliente.cpp \
    Model/horario.cpp \
    Model/pessoa.cpp \
    main.cpp \
    View/telaagendamento.cpp \
    View/telaescolhabarbeiro.cpp \
    View/telaescolhadata.cpp \
    Controller/controller_barbearia.cpp \
    Controller/controller_cliente.cpp \
    Controller/controller_barbeiro.cpp

HEADERS += \
    DAO/dao_barbearia.h \
    DAO/dao_barbeiro.h \
    DAO/dao_cliente.h \
    DAO/dao_pessoa.h \
    Model/barbearia.h \
    Model/barbeiro.h \
    Model/cliente.h \
    Model/horario.h \
    Model/pessoa.h \
    View/telaagendamento.h \
    View/telaescolhabarbeiro.h \
    View/telaescolhadata.h \
    Controller/controller_barbearia.h \
    Controller/controller_cliente.h \
    Controller/controller_barbeiro.h

FORMS += \
    View/telaescolhadata.ui \
    View/telaescolhadata.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
