/******************************************************************************

Faça um programa que cria um vetor com 5 elementos inteiros, lê 5 números do 
teclado, armazena os números no vetor e imprime o vetor na ordem inversa.

*******************************************************************************/

#include <iostream>
using namespace std;

void vetor(){
    int qtdTermos=5;
    int vetorzin[qtdTermos];
    
    cout<<"Digite 5 numeros: "<<endl;
    for(int i=0;i<qtdTermos;i++){
        cin>>vetorzin[i];
    }
    
    cout<<"Ordem inversa: ";
    for(int i=qtdTermos-1; i>=0; i--){
        cout<<vetorzin[i];
    }
}

int main() {

    vetor();
    return 0;
}
