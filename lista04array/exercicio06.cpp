/******************************************************************************

                              Escreva um algoritmo em C que armazene em um 
                              vetor todos os números inteiros de 0 a 50 . Após 
                              isso, o algoritmo deve imprimir todos os valores 
                              armazenados.

*******************************************************************************/

#include <iostream>

using namespace std;

void armazenaInteiros(){
    int* vet= new int[50];
    for(int i=0; i<=50;i++){
        vet[i]=i;
        cout<<vet[i]<<" "<<endl;
    }
}

int main()
{
    armazenaInteiros();

    return 0;
}
