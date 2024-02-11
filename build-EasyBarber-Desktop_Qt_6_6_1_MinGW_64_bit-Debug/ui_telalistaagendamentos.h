/********************************************************************************
** Form generated from reading UI file 'telalistaagendamentos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTAAGENDAMENTOS_H
#define UI_TELALISTAAGENDAMENTOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaListaAgendamentos
{
public:
    QPushButton *desmarcarBtn;
    QPushButton *voltarBtn;
    QLabel *label;
    QListWidget *listWidget;

    void setupUi(QDialog *TelaListaAgendamentos)
    {
        if (TelaListaAgendamentos->objectName().isEmpty())
            TelaListaAgendamentos->setObjectName("TelaListaAgendamentos");
        TelaListaAgendamentos->resize(400, 300);
        desmarcarBtn = new QPushButton(TelaListaAgendamentos);
        desmarcarBtn->setObjectName("desmarcarBtn");
        desmarcarBtn->setGeometry(QRect(110, 260, 80, 24));
        voltarBtn = new QPushButton(TelaListaAgendamentos);
        voltarBtn->setObjectName("voltarBtn");
        voltarBtn->setGeometry(QRect(210, 260, 80, 24));
        label = new QLabel(TelaListaAgendamentos);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 20, 161, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        listWidget = new QListWidget(TelaListaAgendamentos);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 50, 291, 201));

        retranslateUi(TelaListaAgendamentos);

        QMetaObject::connectSlotsByName(TelaListaAgendamentos);
    } // setupUi

    void retranslateUi(QDialog *TelaListaAgendamentos)
    {
        TelaListaAgendamentos->setWindowTitle(QCoreApplication::translate("TelaListaAgendamentos", "Dialog", nullptr));
        desmarcarBtn->setText(QCoreApplication::translate("TelaListaAgendamentos", "Desmarcar", nullptr));
        voltarBtn->setText(QCoreApplication::translate("TelaListaAgendamentos", "Voltar", nullptr));
        label->setText(QCoreApplication::translate("TelaListaAgendamentos", "Hor\303\241rios Agendados", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListaAgendamentos: public Ui_TelaListaAgendamentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTAAGENDAMENTOS_H
