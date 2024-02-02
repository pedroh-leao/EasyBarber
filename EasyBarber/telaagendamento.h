#ifndef TELAAGENDAMENTO_H
#define TELAAGENDAMENTO_H

#include <QWidget>
#include <QLabel>
#include <QRadioButton>
#include <QGridLayout>
#include <QStringList>
#include <QPushButton>

class TelaAgendamento : public QWidget {
    Q_OBJECT
public:
    explicit TelaAgendamento(QWidget *parent = nullptr);
    ~TelaAgendamento();

private:
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *scheduleButton;

    void createLayout();
};

#endif // TELAAGENDAMENTO_H
