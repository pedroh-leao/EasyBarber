#include "Pessoa.h"
#include <QDebug>

Pessoa::Pessoa(string nome, string endereco, string telefone, string email, string senha)
    : nome(nome), endereco(endereco), telefone(telefone), email(email), senha(senha) {}

Pessoa::~Pessoa() {}

// Getters
string Pessoa::getNome() const {
    return nome;
}

string Pessoa::getEndereco() const {
    return endereco;
}

string Pessoa::getTelefone() const {
    return telefone;
}

string Pessoa::getEmail() const {
    return email;
}

string Pessoa::getSenha() const {
    return senha;
}

// Setters
void Pessoa::setNome(const string& nome) {
    this->nome = nome;

    /*
    string sqlText = "update tb_cliente set nome='" + nome + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->nome = nome;
    else
        qDebug() << "Erro na atualização do cliente.";

    */

    /*
    string sqlText = "update tb_barbeiro set nome='" + nome + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->nome = nome;
    else
        qDebug() << "Erro na atualização do barbeiro.";
    */
}

void Pessoa::setEndereco(const string& endereco) {
    this->endereco = endereco;

    /*
    string sqlText = "update tb_cliente set endereco='" + endereco + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->endereco = endereco;
    else
        qDebug() << "Erro na atualização do cliente.";
    */

    /*
    string sqlText = "update tb_barbeiro set endereco='" + endereco + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->endereco = endereco;
    else
        qDebug() << "Erro na atualização do barbeiro.";
    */
}

void Pessoa::setTelefone(const string& telefone) {
    this->telefone = telefone;

    /*
    string sqlText = "update tb_cliente set telefone='" + telefone + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->telefone = telefone;
    else
        qDebug() << "Erro na atualização do cliente.";
    */

    /*
    string sqlText = "update tb_barbeiro set telefone='" + telefone + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->telefone = telefone;
    else
        qDebug() << "Erro na atualização do barbeiro.";
    */
}

void Pessoa::setEmail(const string& email) {
    this->email = email;
}

void Pessoa::setSenha(const string& senha) {
    this->senha = senha;

    /*
    string sqlText = "update tb_cliente set senha='" + senha + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->senha = senha;
    else
        qDebug() << "Erro na atualização do cliente.";
    */

    /*
    string sqlText = "update tb_barbeiro set senha='" + senha + "' where email='" + email + "'";
    if(query.exec(QString::fromStdString(sqlText)))
        this->senha = senha;
    else
        qDebug() << "Erro na atualização do barbeiro.";
    */
}

Pessoa::horariosAgendadosIterator Pessoa::horariosAgendadosBegin(){
    return horariosAgendados.begin();
}

Pessoa::horariosAgendadosIterator Pessoa::horariosAgendadosEnd(){
    return horariosAgendados.end();
}

bool Pessoa::add(Horario* horario){
    unsigned long long lenBefore = horariosAgendados.size();

    horariosAgendados.push_back(horario);

    return (lenBefore != horariosAgendados.size());
}

bool Pessoa::remove(Horario* horario){
    QSqlQuery query;
    string sqlText = "delete from tb_horario where (email_cliente = '" + email + "' or "
                     "email_barbeiro = '" + email + "') and "
                               "hora = '" + horario->getHora() + "' and data = '" + horario->getData() + "'";

    if(query.exec(QString::fromStdString(sqlText))){
        for(Pessoa::horariosAgendadosIterator it = horariosAgendadosBegin(); it < horariosAgendadosEnd(); it++){
            if(*it == horario){
                horariosAgendados.erase(it);
                //delete horario;
                return true;
            }
        }
    }
    else qDebug()<<"Erro ao tentar remover o horário de agendamento do banco de dados.";

    return false;
}

bool Pessoa::existsHorario(Horario *horario){
    for(Pessoa::horariosAgendadosIterator it = horariosAgendadosBegin(); it < horariosAgendadosEnd(); it++){
        if((*it)->getData() == horario->getData() && (*it)->getHora() == horario->getHora())
            return true;
    }

    return false;
}
