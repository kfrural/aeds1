/******************************************************************************

Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a 
seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no
vetor.

*******************************************************************************/

#include <iostream>
using namespace std;

void vetor(){
    int qtdTermos=20;
    int vetorzin[qtdTermos];
    
    cout<<"Digite 20 numeros: "<<endl;
    for(int i=0;i<qtdTermos;i++){
        cin>>vetorzin[i];
    }
    int maior= vetorzin[0];
    int posicao=0;
    for(int i=1;i<qtdTermos;i++){
        if(vetorzin[i]>maior){
            maior=vetorzin[i];
            posicao=i;
        }
    }
    cout<<"Maior: "<<maior<<endl;
    cout<<"Posicao: "<<posicao<<endl;
    
}

int main() {

    vetor();
    return 0;
}
