/******************************************************************************

                              Crie uma struct chamada "TimeFutebol" que armazene
                              os seguintes dados: nome (string), cidade (string)
                              e quantidade de títulos (int). Crie uma função
                              para exibir as informações de um time de futebol.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

struct TimeFutebol{
    string nome;
    string cidade;
    int titulos;
};
void preencher(TimeFutebol &t1){
    cout << "Digite seus dados abaixo: \n";
    cout << "Nome: ";
    cin >> t1.nome;
    cout << "Cidade: ";
    cin >> t1.cidade;
    cout << "titulos: ";
    cin >> t1.titulos;
    
    
}


void exibir (TimeFutebol &t1){
    cout << "\n Impressao\n";
    cout << "\nNome: " << t1.nome;
    cout << "\nCidade: " << t1.cidade;
    cout << "\nTitulos : " << t1.titulos;
}

int main()
{
    TimeFutebol t1;
    
    preencher(t1);
    exibir(t1);

    return 0;
}
