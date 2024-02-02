#include "horario.h"

Horario::Horario() {}

Horario::Horario(string data, string hora){
    this->data = data;
    this->hora = hora;
}

string Horario::getData() const{
    return data;
}
void Horario::setData(string data){
    this->data = data;
}


string Horario::getHora() const{
    return hora;
}
void Horario::setHora(string hora){
    this->hora = hora;
}
