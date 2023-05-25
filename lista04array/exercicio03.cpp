/******************************************************************************

                              Faça um algoritmo para ler um vetor de 20 números.
                              Após isto, deverá ser lido mais um número qualquer
                              e verificar se esse número existe no vetor ou não.
                              Se existir, o algoritmo deve gerar um novo vetor
                              sem esse número. (Considere que não há números 
                              repetidos no vetor).

*******************************************************************************/

#include <iostream>

using namespace std;
    int tam=0;
    int *vetor= new int [tam];
    int maior=0;
    int posicao=0;
    int repete=0;
    int contRepete=0;
    
void digitaNum(){
    tam=5;
    for(int i=0;i<tam;i++){
        cout<<"Digite o "<<i+1<<"º numero: ";
        cin>>vetor[i];
        if(vetor[i]<=0){
             cout<<"Digite um numero maior q 0"<<endl;
             i--;
        }
    }
}
void verificaNum(){
    cout<<"Digite um numero para verificar: ";
    cin>>repete;
    for(int i=0;i<=tam;i++){
        if(vetor[i]==repete){
            contRepete++;
        }
    }
    if(contRepete==0){
        cout<<"Não repete";
    }else{
        cout<<"Repete "<<contRepete<<" vezes"<<endl;
    }
}

int main()
{
    digitaNum();
    verificaNum();
    
    return 0;
}
