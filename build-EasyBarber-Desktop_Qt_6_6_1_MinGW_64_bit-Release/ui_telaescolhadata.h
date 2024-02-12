/********************************************************************************
** Form generated from reading UI file 'telaescolhadata.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAESCOLHADATA_H
#define UI_TELAESCOLHADATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_telaEscolhaData
{
public:
    QDateEdit *campoData;
    QLabel *textobarbearia;
    QPushButton *okBotao;
    QPushButton *voltarBotao;

    void setupUi(QDialog *telaEscolhaData)
    {
        if (telaEscolhaData->objectName().isEmpty())
            telaEscolhaData->setObjectName("telaEscolhaData");
        telaEscolhaData->resize(394, 202);
        campoData = new QDateEdit(telaEscolhaData);
        campoData->setObjectName("campoData");
        campoData->setGeometry(QRect(140, 100, 110, 25));
        textobarbearia = new QLabel(telaEscolhaData);
        textobarbearia->setObjectName("textobarbearia");
        textobarbearia->setGeometry(QRect(10, 0, 371, 71));
        okBotao = new QPushButton(telaEscolhaData);
        okBotao->setObjectName("okBotao");
        okBotao->setGeometry(QRect(110, 150, 80, 24));
        voltarBotao = new QPushButton(telaEscolhaData);
        voltarBotao->setObjectName("voltarBotao");
        voltarBotao->setGeometry(QRect(200, 150, 80, 24));

        retranslateUi(telaEscolhaData);

        QMetaObject::connectSlotsByName(telaEscolhaData);
    } // setupUi

    void retranslateUi(QDialog *telaEscolhaData)
    {
        telaEscolhaData->setWindowTitle(QCoreApplication::translate("telaEscolhaData", "Dialog", nullptr));
        textobarbearia->setText(QCoreApplication::translate("telaEscolhaData", "TeInforma\303\247\303\265es da barbearia", nullptr));
        okBotao->setText(QCoreApplication::translate("telaEscolhaData", "OK", nullptr));
        voltarBotao->setText(QCoreApplication::translate("telaEscolhaData", "Voltar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaEscolhaData: public Ui_telaEscolhaData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAESCOLHADATA_H
