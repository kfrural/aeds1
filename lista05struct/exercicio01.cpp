/******************************************************************************

                              Crie uma struct chamada "Pessoa" que armazene os
                              seguintes dados: nome (string), idade (int) e 
                              altura (float). Crie uma função para preencher os
                              dados de uma pessoa e outra função para exibir
                              esses dados.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
    float altura;
};
void preencher(Pessoa &p1){
    cout << "Digite seus dados abaixo: \n";
    cout << "Nome: ";
    cin >> p1.nome;
    cout << "Idade: ";
    cin >> p1.idade;
    cout << "Altura: ";
    cin >> p1.altura;
}

void exibir (Pessoa &p1){
    cout << "\n Impressao\n";
    cout << "\nNome: " << p1.nome;
    cout << "\nIdade: " << p1.idade;
    cout << "\nAltura: " << p1.altura;
}

int main()
{
    Pessoa p1;
    
    preencher(p1);
    exibir(p1);

    return 0;
}
