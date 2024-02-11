/********************************************************************************
** Form generated from reading UI file 'telaagendamentos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAAGENDAMENTOS_H
#define UI_TELAAGENDAMENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaAgendamentos
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QPushButton *desmarcarBtn;
    QPushButton *voltarBtn;

    void setupUi(QDialog *TelaAgendamentos)
    {
        if (TelaAgendamentos->objectName().isEmpty())
            TelaAgendamentos->setObjectName("TelaAgendamentos");
        TelaAgendamentos->resize(400, 300);
        label = new QLabel(TelaAgendamentos);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 161, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        listWidget = new QListWidget(TelaAgendamentos);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 50, 291, 201));
        desmarcarBtn = new QPushButton(TelaAgendamentos);
        desmarcarBtn->setObjectName("desmarcarBtn");
        desmarcarBtn->setGeometry(QRect(110, 260, 80, 24));
        voltarBtn = new QPushButton(TelaAgendamentos);
        voltarBtn->setObjectName("voltarBtn");
        voltarBtn->setGeometry(QRect(210, 260, 80, 24));

        retranslateUi(TelaAgendamentos);

        QMetaObject::connectSlotsByName(TelaAgendamentos);
    } // setupUi

    void retranslateUi(QDialog *TelaAgendamentos)
    {
        TelaAgendamentos->setWindowTitle(QCoreApplication::translate("TelaAgendamentos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TelaAgendamentos", "Hor\303\241rios Agendados", nullptr));
        desmarcarBtn->setText(QCoreApplication::translate("TelaAgendamentos", "Desmarcar", nullptr));
        voltarBtn->setText(QCoreApplication::translate("TelaAgendamentos", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaAgendamentos: public Ui_TelaAgendamentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAAGENDAMENTOS_H
