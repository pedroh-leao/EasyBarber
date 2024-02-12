#ifndef DAO_PESSOA_H
#define DAO_PESSOA_H

#include <QtSql>
#include "../Model/pessoa.h"

class DAO_Pessoa
{
public:
    /**
     * @brief Construtor padrão da classe DAO_Pessoa.
     */
    DAO_Pessoa();

    /**
     * @brief Busca os horários agendados para uma pessoa.
     * @param pessoa A pessoa para a qual os horários estão sendo buscados.
     * @param identifier Um identificador ('b' para Barbeiro, 'c' para Cliente).
     * @return Um vetor de ponteiros para Horario contendo os horários agendados.
     */
    virtual vector<Horario*> buscaHorariosAgendados(Pessoa * pessoa, char identifier);

    /**
     * @brief Remove um horário agendado para uma pessoa.
     * @param pessoa A pessoa da qual será removido o horário.
     * @param horario O horário a ser removido.
     * @return True se a remoção foi bem-sucedida, False caso contrário.
     */
    virtual bool removeHorario(Pessoa * pessoa, Horario * horario);

};

#endif // DAO_PESSOA_H
