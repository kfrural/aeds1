/******************************************************************************

                             Faça	um programa que peça 10 números inteiros,
                             calcule e mostre a	quantidade de números pares e a
                             quantidade de números impares.

*******************************************************************************/

#include <iostream>
using namespace std;
int num=0;
int soma=0;
int impar=0;
int par=0;

void calculos(){
    for(int i=1;i<=10;i++){
        cout<<"Digite um numero: ";
        cin>>num;
        if(num%2==0){
            par++;
        }else{
            impar++;
        }
        soma+=num;
    }
    cout<<"Soma: "<<soma<<endl;
    cout<<par<<" são pares "<<endl;
    cout<<impar<<" são impares "<<endl;
}

int main() {
    
    calculos();
    
    return 0;
}
