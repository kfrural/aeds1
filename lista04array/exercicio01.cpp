/******************************************************************************

                              Faça um programa que cria um vetor com 5
                              elementos inteiros, lê 5 números do teclado,
                              armazena os números no vetor e imprime o vetor na
                              ordem inversa.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int tam=0;
    int *vetor= new int [tam];
    tam=5;
    for(int i=0;i<tam;i++){
        cout<<"Digite o "<<i+1<<"º numero: ";
        cin>>vetor[i];
    }
    for(int i=tam-1;i>=0;i--){
        cout<<vetor[i];
    }

    return 0;
}
