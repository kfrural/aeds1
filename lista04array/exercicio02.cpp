/******************************************************************************

                              Ler um vetor Q de 20 posições (aceitar somente
                              números positivos). Escrever a seguir o valor do 
                              maior elemento de Q e a respectiva posição que 
                              ele ocupa no vetor.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int tam=0;
    int *vetor= new int [tam];
    tam=20;
    int maior=0;
    int posicao=0;
    for(int i=0;i<tam;i++){
        cout<<"Digite o "<<i+1<<"º numero: ";
        cin>>vetor[i];
        if(vetor[i]<=0){
             cout<<"Digite um numero maior q 0"<<endl;
             i--;
        }
    }
    for(int i=1;i<tam;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            posicao=i;
        }
    }
    cout<<"O maior é "<<maior<<endl;
        cout<<"Ele está na "<<posicao<<"ª posição"<<endl;

    return 0;
}
