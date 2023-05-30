/******************************************************************************

                              Escreva um algoritmo em C que receba quinze 
                              números do usuário e armazene em um vetor a raiz 
                              quadrada de cada número. Caso o valor digitado
                              seja menor que zero o número -1 deve ser atribuído
                              ao elemento do vetor. Após isso, o algoritmo deve
                              imprimir todos os valores armazenados.

*******************************************************************************/

#include <iostream>

using namespace std;

void quadradoNumero(){
    int* vet=new int [15];
    int quadrado=0;
    for(int i=0;i<15;i++){
        cout<<"Digite o "<<i+1<<" numero: ";
        cin>>vet[i];
    }
    for(int i=0;i<15;i++){
        if(vet[i]>0){
            quadrado=vet[i]*vet[i];
        }else{
            quadrado= -1;
        }
        cout<<quadrado<<endl;
    }
}

int main()
{
    quadradoNumero();

    return 0;
}
