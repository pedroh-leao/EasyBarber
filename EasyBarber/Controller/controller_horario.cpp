#include "controller_horario.h"

Controller_Horario::Controller_Horario() {
    dao_horario = new DAO_Horario();
}

bool Controller_Horario::adicionarHorario(Barbeiro* barbeiro, Cliente* cliente, Horario* horario){
    return dao_horario->adicionarHorario(barbeiro, cliente, horario);
}
bool Controller_Horario::deletarHorario(Horario * horario, Pessoa * pessoa, Barbearia * barbearia){
    if (!dao_horario->deletarHorario(horario)) {qDebug() << "Erro no banco de dados"; return false;}

    if(dynamic_cast<Cliente*>(pessoa)) {
        qDebug() << "Entro";
        pessoa->remove(horario);

        for(auto it = barbearia->barbeirosBegin(); it != barbearia->barbeirosEnd(); it++){
            if((*it)->getEmail() == horario->getEmailBarbeiro()){
                (*it)->remove(horario);
                return true;
            }
        }
    }
    else{
        // caso estivesse logado como barbeiro
    }

    qDebug() << "Não foi possível remover localmente";
    return false;

}
