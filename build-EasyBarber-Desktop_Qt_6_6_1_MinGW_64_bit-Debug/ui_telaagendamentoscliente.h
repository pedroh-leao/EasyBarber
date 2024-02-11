/********************************************************************************
** Form generated from reading UI file 'telaagendamentoscliente.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAAGENDAMENTOSCLIENTE_H
#define UI_TELAAGENDAMENTOSCLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaAgendamentosCliente
{
public:
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *TelaAgendamentosCliente)
    {
        if (TelaAgendamentosCliente->objectName().isEmpty())
            TelaAgendamentosCliente->setObjectName("TelaAgendamentosCliente");
        TelaAgendamentosCliente->resize(400, 300);
        listWidget = new QListWidget(TelaAgendamentosCliente);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 50, 291, 201));
        label = new QLabel(TelaAgendamentosCliente);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 161, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(TelaAgendamentosCliente);

        QMetaObject::connectSlotsByName(TelaAgendamentosCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaAgendamentosCliente)
    {
        TelaAgendamentosCliente->setWindowTitle(QCoreApplication::translate("TelaAgendamentosCliente", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TelaAgendamentosCliente", "Hor\303\241rios Agendados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaAgendamentosCliente: public Ui_TelaAgendamentosCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAAGENDAMENTOSCLIENTE_H
