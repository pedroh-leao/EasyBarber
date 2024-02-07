#ifndef TELAAGENDAMENTO_H
#define TELAAGENDAMENTO_H

#include <QWidget>
#include <QLabel>
#include <QRadioButton>
#include <QGridLayout>
#include <QStringList>
#include <QPushButton>
#include <QTime>
#include "barbearia.h"

/**
 * @brief Classe que representa a tela de agendamento de atendimentos em uma barbearia.
 */
class TelaAgendamento : public QWidget {
    Q_OBJECT

protected:
    Barbearia *barbearia;
    Barbeiro *barbeiro;
    Cliente *cliente;
    Horario *horarioSelecionado;

public:
    /**
     * @brief Construtor da classe TelaAgendamento.
     * @param barbearia Ponteiro para a barbearia associada à tela.
     * @param barbeiro Ponteiro para o barbeiro associado à tela.
     * @param horarioSelecionado Ponteiro para o horário selecionado na tela.
     * @param cliente Ponteiro para o cliente associado à tela.
     * @param parent Ponteiro para o widget pai da tela.
     */
    explicit TelaAgendamento(Barbearia *barbearia = nullptr, Barbeiro *barbeiro = nullptr, Horario *horarioSelecionado = nullptr, Cliente *cliente = nullptr, QWidget *parent = nullptr);

    /**
     * @brief Destrutor da classe TelaAgendamento.
     */
    ~TelaAgendamento();

private:
    QLabel *label;
    QGridLayout *gridLayout;
    QPushButton *scheduleButton;

    /**
     * @brief Cria o layout da tela de agendamento.
     */
    void createLayout();

    /**
     * @brief Seta o texto do topo da tela de agendamento.
     */
    void setTextoTopo();

    /**
     * @brief Gera uma QStringList com os horários disponíveis para agendamento com esse barbeiro.
     */
    QStringList geraHorariosDisponiveis();

    /**
     * @brief Cria radio buttons dos horários disponíveis para agendamento para a tela de agendamento.
     */
    void createRadioButtonsHorario();

    /**
     * @brief Cria botão para realizar o agendamento para tela de agendamento.
     */
    void createScheduleButton();

public slots:
    /**
     * @brief Realiza o agendamento do atendimento na barbearia.
     * @param barbearia Ponteiro para a barbearia onde o agendamento será realizado.
     * @param barbeiro Ponteiro para o barbeiro responsável pelo atendimento.
     * @param cliente Ponteiro para o cliente que está realizando o agendamento.
     */
    void realizaAgendamento(Barbearia *barbearia, Barbeiro *barbeiro, Cliente *cliente);

    /**
     * @brief Habilita o botão de agendamento quando um horário é selecionado.
     * @param time String representando o horário selecionado.
     */
    void habilitaRealizaAgendBtn(string time);
};

#endif // TELAAGENDAMENTO_H
