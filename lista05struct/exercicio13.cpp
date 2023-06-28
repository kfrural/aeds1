/*Crie uma struct chamada "Agenda" que armazene um array de structs
"Contato". Cada contato deve ter um nome (string) e um número de telefone 
(string). Adicione métodos para adicionar novos contatos, excluir contatos
existentes e exibir todos os contatos da agenda.*/

#include <iostream>
#include <string>

using namespace std; 


struct Contato {
    string nome;
    string telefone;
};

struct Agenda {
    Contato *contatos;
    int numContatos;
    int tam;

    void adicionarContato(string nome, string telefone) {
        if (numContatos < tam) {
            Contato novo;
            novo.nome = nome;
            novo.telefone = telefone;
            contatos[numContatos] = novo;

            numContatos++;
            cout << "Contato adicionado com sucesso!" << endl;
        } else {
            cout << "A agenda está cheia. Não é possível adicionar mais contatos." << std::endl;
        }
    }

    void excluirContato(string nome) {
        bool contatoEncontrado = false;
        for (int i = 0; i < numContatos; i++) {
            if (contatos[i].nome == nome) {
                // Deslocar os contatos para preencher o espaço do contato excluído
                for (int j = i; j < numContatos - 1; j++) {
                    contatos[j] = contatos[j + 1];
                }
                numContatos--;
                contatoEncontrado = true;
                cout << "Contato excluído com sucesso!" << endl;
                break;
            }
        }
        if (!contatoEncontrado) {
            cout << "Contato não encontrado na agenda." << endl;
        }
    }

    void exibirContatos() {
        cout << "Lista de contatos na agenda:" << std::endl;
        for (int i = 0; i < numContatos; i++) {
            cout << "Nome: " << contatos[i].nome << ", Telefone: " << contatos[i].telefone << std::endl;
        }
    }
};

int main() {
    Agenda agenda;
    agenda.numContatos = 0;
    
    cout << "Informe o tamanho MAX da sua agenda:";
    cin >> agenda.tam;
    agenda.contatos = new Contato[agenda.tam];

    agenda.adicionarContato("João", "111111111");
    agenda.adicionarContato("Maria", "222222222");
    agenda.adicionarContato("Carlos", "333333333");
    agenda.exibirContatos();

    agenda.excluirContato("Maria");
    agenda.exibirContatos();

    return 0;
}
