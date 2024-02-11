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

    //nao tem como fazer update de bd aqui, porque no bd é necessario o email do barbeiro e do cliente para fazer a atualizacao
}


string Horario::getHora() const{
    return hora;
}
void Horario::setHora(string hora){
    this->hora = hora;

    //nao tem como fazer update de bd aqui, porque no bd é necessario o email do barbeiro e do cliente para fazer a atualizacao
}

string Horario::getEmailCliente(){
    return email_cliente;
}

string Horario::getEmailBarbeiro(){
    return email_barbeiro;
}
