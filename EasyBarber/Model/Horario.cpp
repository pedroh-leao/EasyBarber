#include "horario.h"

Horario::Horario(string data, string hora){
    this->data = data;
    this->hora = hora;
}

string Horario::getData() const{
    return data;
}
void Horario::setData(string data){
    this->data = data;

    //nao tem como fazer update de bd aqui, porque no bd é necessario o email do barbeiro e do cliente para fazer a atualizacao
}


string Horario::getHora() const{
    return hora;
}
void Horario::setHora(string hora){
    this->hora = hora;

    //nao tem como fazer update de bd aqui, porque no bd é necessario o email do barbeiro e do cliente para fazer a atualizacao
}
