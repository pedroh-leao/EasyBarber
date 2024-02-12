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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListaAgendamentos
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QWidget *widget;
    QFormLayout *formLayout;
    QPushButton *desmarcarBtn;
    QPushButton *voltarBtn;

    void setupUi(QDialog *TelaListaAgendamentos)
    {
        if (TelaListaAgendamentos->objectName().isEmpty())
            TelaListaAgendamentos->setObjectName("TelaListaAgendamentos");
        TelaListaAgendamentos->resize(580, 300);
        label = new QLabel(TelaListaAgendamentos);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 491, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(TelaListaAgendamentos);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 50, 491, 201));
        widget = new QWidget(TelaListaAgendamentos);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(210, 260, 168, 26));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        desmarcarBtn = new QPushButton(widget);
        desmarcarBtn->setObjectName("desmarcarBtn");

        formLayout->setWidget(0, QFormLayout::LabelRole, desmarcarBtn);

        voltarBtn = new QPushButton(widget);
        voltarBtn->setObjectName("voltarBtn");

        formLayout->setWidget(0, QFormLayout::FieldRole, voltarBtn);


        retranslateUi(TelaListaAgendamentos);

        QMetaObject::connectSlotsByName(TelaListaAgendamentos);
    } // setupUi

    void retranslateUi(QDialog *TelaListaAgendamentos)
    {
        TelaListaAgendamentos->setWindowTitle(QCoreApplication::translate("TelaListaAgendamentos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TelaListaAgendamentos", "Hor\303\241rios Agendados", nullptr));
        desmarcarBtn->setText(QCoreApplication::translate("TelaListaAgendamentos", "Desmarcar", nullptr));
        voltarBtn->setText(QCoreApplication::translate("TelaListaAgendamentos", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListaAgendamentos: public Ui_TelaListaAgendamentos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTAAGENDAMENTOS_H
