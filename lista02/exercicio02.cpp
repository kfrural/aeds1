/******************************************************************************

                             Faça um programa que leia N números e informe o
                             maior número.

*******************************************************************************/

#include <iostream>

using namespace std;


int imprimeMaior(int n){
    int x=0;
    int maior=0;
    for(int i=1;i<=n;i++){
        cout<<"digite um numero: ";
        cin>>x;
        
        if(x>maior){
            maior = x;
        }
    }
    return maior;
}

int main()
{
    int num=0;
    int maior=0;
    cout<<"Digite a quantidade de numeros: ";
    cin>> num;
    
  maior = imprimeMaior(num);
  
  cout<<"O maior numero digitado foi: "<<maior<<endl;

    return 0;
}
