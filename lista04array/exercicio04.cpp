/******************************************************************************

                              Faça um programa que cria um vetor com 7 
                              elementos inteiros, lê 7 números do teclado,
                              armazena os números no vetor e imprime em ordem
                              crescente (do menor para o maior valor). OBS: É 
                              permitido trocar os elementos do vetor de posição!

*******************************************************************************/

#include <iostream>

using namespace std;

void troca(int *vet, int tam){
    for(int i=0; i<tam-1;i++){
        for(int j=0;j< tam-i-1; j++){
            if(*(vet+j)> *(vet+j+1)){
                int t=*(vet+j);
                *(vet+j)=*(vet+j+1);
                *(vet+j+1)=t;
            }
        }
    }
}
void leNum(){
    int tam=7;
    int *vet= new int[tam];
    for(int i=0; i<tam;i++){
        cout<<"Digita o "<<i+1<<" numero: ";
        cin>>*(vet+i);
    }
    troca(vet, tam);
    cout<< "Ordem crescente: "<<endl;
    for(int i=0; i<tam; i++){
        cout<<*(vet+i)<<" ";
    }
}

int main()
{
    leNum();

    return 0;
}
