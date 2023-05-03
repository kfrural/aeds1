/******************************************************************************

                              Faça	um programa que, dado um conjunto de N 
                              números, determine o menor	valor, o maior valor
                              e a soma dos valores.
*******************************************************************************/

#include <iostream>

using namespace std;
int qtd=0;
int num=0;
int maior=0;
int menor=999999;
int soma=0;

void valores(){
    cout<<"Indique a qtd de numeros que quer digitar: ";
    cin>>qtd;
    for(int i=1;i<=qtd;i++){
        cout<<"digite um numero: ";
        cin>>num;
        if(num>maior){
            maior=num;
        }if(num<menor){
            menor=num;
        }
        soma+=num;
    }
    cout<<"\nO maior numero é: "<<maior<<endl;
    cout<<"O menor numero é: "<<menor<<endl;
    cout<<"A soma de todos os numeros é: "<<soma<<endl;
}

int main()
{
    valores();

    return 0;
}
