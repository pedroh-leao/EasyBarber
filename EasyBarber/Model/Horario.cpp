#include "horario.h"

Horario::Horario(string data, string hora, string email_cliente, string email_barbeiro){
    this->data = data;
    this->hora = hora;
    this->email_cliente = email_cliente;
    this->email_barbeiro = email_barbeiro;
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

string Horario::getEmailCliente(){
    return email_cliente;
}

string Horario::getEmailBarbeiro(){
    return email_barbeiro;
}
