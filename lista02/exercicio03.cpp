/******************************************************************************

                             Faça um programa que leia N números e informe a 
                             soma e a média dos números.

*******************************************************************************/

#include <iostream>

using namespace std;
int x=0;
int soma=0;
float media=0.0;
void somaDosNumeros(int n){
    for(int i=1; i<=n;i++){
        cout<<"Digite um numero: ";
        cin>>x;
        soma += x;
    }
    cout<<"A soma é :"<<soma<<endl;
}
void mediaDosNumeros(int n){
    for(int i=1; i<=n;i++){
        media=soma/n;
    }
    cout<<"A media é: "<<media;
}
int main()
{
    int num=0;
    int maior=0;
    cout<<"Digite a quantidade de numeros: ";
    cin>> num;
    
    somaDosNumeros(num);
  mediaDosNumeros(num);
 

    return 0;
}
