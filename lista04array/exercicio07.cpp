/******************************************************************************

                              Escreva um algoritmo em C que armazene em um vetor
                              os 100 primeiros números ímpares. Após isso, o 
                              algoritmo deve imprimir todos os valores 
                              armazenados.

*******************************************************************************/

#include <iostream>

using namespace std;

void armazenaInteiros(){
    int* vet= new int[100];
    for(int i=0; i<=100;i++){
        if(i %2 != 0){
            vet[i]=i;
            cout<<vet[i]<<" "<<endl;
        }
    }
}

int main()
{
    armazenaInteiros();

    return 0;
}
