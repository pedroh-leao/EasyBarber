#ifndef DAO_HORARIO_H
#define DAO_HORARIO_H

#include <QtSql>
#include <QString>
#include "../Model/Barbeiro.h"
#include "../Model/Cliente.h"
#include "../Model/Horario.h"

class DAO_Horario
{
public:
    DAO_Horario();

    bool adicionarHorario(Barbeiro* barbeiro, Cliente* cliente, Horario* horario);
    bool deletarHorario(Horario * horario);
};

#endif // DAO_HORARIO_H
