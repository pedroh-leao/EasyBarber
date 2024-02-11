#ifndef DAO_PESSOA_H
#define DAO_PESSOA_H

#include <QtSql>
#include "../Model/pessoa.h"

class DAO_Pessoa
{
public:
    DAO_Pessoa();
    virtual vector<Horario*> buscaHorariosAgendados(Pessoa * pessoa, char identifier);
    virtual bool removeHorario(Pessoa * pessoa, Horario * horario);
};

#endif // DAO_PESSOA_H
