#include "controller_barbearia.h"

Controller_Barbearia::Controller_Barbearia(){
    dao_barbearia = new DAO_Barbearia();
}

Barbearia* Controller_Barbearia::buscarBarbeariaPeloEmail(string emailBarbearia){
    return dao_barbearia->buscaBarbeariaPeloEmail(emailBarbearia);
}
void Controller_Barbearia::buscaBarbeirosAssociados(Barbearia * barbearia){
    dao_barbearia->buscaBarbeirosAssociados(barbearia);
}
void Controller_Barbearia::buscarHorariosAgendados(Barbearia * barbearia){
    dao_barbearia->buscarHorariosAgendados(barbearia);
}

bool Controller_Barbearia::realizarAgendamento(Barbearia * barbearia, Barbeiro* barbeiro, Cliente* cliente, Horario* horario){
    if(!barbearia->horarioEstaLivre(barbeiro, cliente, horario)) return false;

    bool requisicao = dao_barbearia->realizarAgendamento(barbeiro, cliente, horario);

    if(!requisicao) {
        qDebug() << "Erro ao tentar inserir novo horário de agendamento!";
        return false;        
    }

    barbearia->realizarAgendamento(barbeiro, cliente, horario);

    return true;
}
bool Controller_Barbearia::removerBarbeiro(Barbearia * barbearia, Barbeiro * barbeiro){
    bool requisicao = dao_barbearia->removerBarbeiro(barbeiro);

    if(!requisicao){
        qDebug() << "Erro ao tentar remover barbeiro do banco de dados!";
        return false;
    }

    return barbearia->remove(barbeiro);
}

bool Controller_Barbearia::atualizarNome(Barbearia * barbearia, string nome){
    string campo = "nome";
    string email = barbearia->getEmail();
    bool requisicao = dao_barbearia->atualizarCampoString(campo, nome, email);
    if(!requisicao) return false;
    barbearia->setNome(nome);
    return true;
}
bool Controller_Barbearia::atualizarEndereco(Barbearia * barbearia, string endereco){
    string campo = "endereco";
    string email = barbearia->getEmail();
    bool requisicao = dao_barbearia->atualizarCampoString(campo, endereco, email);
    if(!requisicao) return false;
    barbearia->setEmail(endereco);
    return true;
}
bool Controller_Barbearia::atualizarTelefone(Barbearia * barbearia, string telefone){
    string campo = "telefone";
    string email = barbearia->getEmail();
    bool requisicao = dao_barbearia->atualizarCampoString(campo, telefone, email);
    if(!requisicao) return false;
    barbearia->setTelefone(telefone);
    return true;
}
bool Controller_Barbearia::atualizarInicioDeFuncionamento(Barbearia * barbearia, string inicioDeFuncionamento){
    string campo = "inicioDeFuncionamento";
    string email = barbearia->getEmail();
    bool requisicao = dao_barbearia->atualizarCampoString(campo, inicioDeFuncionamento, email);
    if(!requisicao) return false;
    barbearia->setInicioDeFuncionamento(inicioDeFuncionamento);
    return true;
}
bool Controller_Barbearia::atualizarFimDeFuncionamento(Barbearia * barbearia, string fimDeFuncionamento){
    string campo = "fimDeFuncionamento";
    string email = barbearia->getEmail();
    bool requisicao = dao_barbearia->atualizarCampoString(campo, fimDeFuncionamento, email);
    if(!requisicao) return false;
    barbearia->setFimDeFuncionamento(fimDeFuncionamento);
    return true;
}
