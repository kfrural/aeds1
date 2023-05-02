/******************************************************************************

                             Faça	um programa que peça dois números, base e
                             expoente, calcule e mostre o primeiro número 
                             elevado ao segundo número. Não utilize a função de
                             potência da linguagem.

*******************************************************************************/

#include <iostream>
using namespace std;
int base=0;
int expoente=0;
int resultado=1;

void dadosPotencia(){
    cout<<"Digite a base: ";
    cin>>base;
    cout<<"Digite o expoente: ";
    cin>>expoente;
    for(int i=1;i<=expoente;i++){
        resultado*=base;
    }
    cout<<"O resultado é: "<<resultado<<endl;
}


int main() {
    
    dadosPotencia();
    
    return 0;
}
