#ifndef CONTROLLER_HORARIO_H
#define CONTROLLER_HORARIO_H

#include <QDebug>
#include "../DAO/dao_horario.h"
#include "../Model/horario.h"
#include "../Model/pessoa.h"
#include "../Model/barbearia.h"

class Controller_Horario
{

protected:
    DAO_Horario * dao_horario;

public:
    Controller_Horario();

    bool adicionarHorario(Barbeiro* barbeiro, Cliente* cliente, Horario* horario);
    bool deletarHorario(Horario * horario, Pessoa * pessoa, Barbearia * barbearia);
};

#endif // CONTROLLER_HORARIO_H
