#include <iostream>
#include <string>

using namespace std;

struct Transacao {
    string tipo;
    float valor;
    string data;
};

struct ContaBancaria {
    string numero;
    float saldo;
    Transacao* transacoes;
    int numTransacoes;
};

struct Banco {
    ContaBancaria* contas;
    int numContas;

    Banco(int numContas) {
        numContas = numContas;
        contas = new ContaBancaria[numContas];
    }

    ~Banco() {
        delete[] contas;
    }

    void deposito(string numeroConta, float valor, string data) {
        for (int i = 0; i < numContas; i++) {
						//encontrar a conta desejada
            if (contas[i].numero == numeroConta) {
                contas[i].saldo += valor;

                //vamos criar a transacao
								Transacao transacao;
                transacao.tipo = "Depósito";
                transacao.valor = valor;
                transacao.data = data;
								
								//vamos adicionar a transação na Conta
								int ultimaPosicao = contas[i].numTransacoes;
								ultimaPosicao++;
                contas[i].transacoes[ultimaPosicao] = transacao;
                cout << "Depósito realizado com sucesso na conta " << numeroConta << std::endl;
                return;
            }
        }
        cout << "Conta " << numeroConta << " não encontrada." << endl;
    }

    void saque(string numeroConta, float valor, string data) {				
        for (int i = 0; i < numContas; i++) {
            if (contas[i].numero == numeroConta) {
								//encontrar a conta desejada
                if (contas[i].saldo >= valor) {
                    contas[i].saldo -= valor;

										//vamos criar a transacao
                    Transacao transacao;
                    transacao.tipo = "Saque";
                    transacao.valor = valor;
                    transacao.data = data;
										//vamos adicionar a transação na Conta
										int ultimaPosicao = contas[i].numTransacoes;
										ultimaPosicao++;
                    contas[i].transacoes[ultimaPosicao] = transacao;
                    cout << "Saque realizado com sucesso na conta " << numeroConta << endl;
                } else {
                    cout << "Saldo insuficiente na conta " << numeroConta << endl;
                }
                return;
            }
        }
        cout << "Conta " << numeroConta << " não encontrada." << endl;
    }

   }

}

//fazer a main
