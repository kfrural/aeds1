/******************************************************************************

                              Escreva um algoritmo em C que receba dez números
                              do usuário e armazene em um vetor a metade de 
                              cada número. Após isso, o algoritmo deve imprimir
                              todos os valores armazenados.

*******************************************************************************/

#include <iostream>

using namespace std;

void armazenaInteiros(){
    int* vet= new int[10];
    int fim=0;
    for(int i=0; i<10;i++){
        cout<<"Digite o "<<i+1<<" numero: ";
        cin>>vet[i];
        
    }
    for(int i=0;i<10;i++){
        fim=vet[i]/2;
        cout<<fim<<endl;
    }
}

int main()
{
    armazenaInteiros();

    return 0;
}
