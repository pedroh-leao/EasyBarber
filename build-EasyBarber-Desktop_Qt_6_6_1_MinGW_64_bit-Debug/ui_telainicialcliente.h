/********************************************************************************
** Form generated from reading UI file 'telainicialcliente.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIALCLIENTE_H
#define UI_TELAINICIALCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaInicialCliente
{
public:
    QPushButton *realizarAgendamentoBtn;
    QPushButton *horariosAgendadosBtn;

    void setupUi(QDialog *TelaInicialCliente)
    {
        if (TelaInicialCliente->objectName().isEmpty())
            TelaInicialCliente->setObjectName("TelaInicialCliente");
        TelaInicialCliente->resize(400, 300);
        realizarAgendamentoBtn = new QPushButton(TelaInicialCliente);
        realizarAgendamentoBtn->setObjectName("realizarAgendamentoBtn");
        realizarAgendamentoBtn->setGeometry(QRect(140, 90, 131, 31));
        horariosAgendadosBtn = new QPushButton(TelaInicialCliente);
        horariosAgendadosBtn->setObjectName("horariosAgendadosBtn");
        horariosAgendadosBtn->setGeometry(QRect(140, 170, 131, 31));

        retranslateUi(TelaInicialCliente);

        QMetaObject::connectSlotsByName(TelaInicialCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaInicialCliente)
    {
        TelaInicialCliente->setWindowTitle(QCoreApplication::translate("TelaInicialCliente", "Dialog", nullptr));
        realizarAgendamentoBtn->setText(QCoreApplication::translate("TelaInicialCliente", "Realizar Agendamento", nullptr));
        horariosAgendadosBtn->setText(QCoreApplication::translate("TelaInicialCliente", "Hor\303\241rios Agendados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicialCliente: public Ui_TelaInicialCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIALCLIENTE_H
