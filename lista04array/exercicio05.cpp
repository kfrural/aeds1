/******************************************************************************

                              Faça um algoritmo para ler um vetor de 10 
                              números. Após isto, ler mais um número qualquer, 
                              calcular e escrever quantas vezes esse número
                              aparece no vetor.!

*******************************************************************************/

#include <iostream>

using namespace std;
int* vet= new int[10];
int procura=0;
int cont;
int i=0;

void contaRepeticao(){
    for(i=0;i<10;i++){
        cout<<"Digite o "<<i+1 <<" numero: ";
        cin>>vet[i];
    }
    cout<<"Informe mais um numero: ";
    cin>>procura;
    for(int i=0;i<10;i++){
        if(vet[i]==procura){
            cont++;
        }
    }
    cout<<"Repete "<<cont<<" vezes"<<endl;
}

int main()
{
    contaRepeticao();

    return 0;
}
