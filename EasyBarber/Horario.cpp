#include "horario.h"

Horario::Horario() {}

Horario::Horario(string data, int hora){
    this->data = data;
    this->hora = hora;
}

string Horario::getData() const{
    return data;
}
void Horario::setData(string data){
    this->data = data;
}


int Horario::getHora() const{
    return hora;
}
void Horario::setHora(int hora){
    this->hora = hora;
}
