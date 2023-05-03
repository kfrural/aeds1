/******************************************************************************

                              Faça um programa que calcule o valor total
                              investido por um colecionador em sua coleção de 
                              CDs e o valor médio gasto em cada um deles. O
                              usuário deverá informar a quantidade de CDs e o
                              valor para em cada um.
*******************************************************************************/

#include <iostream>
using namespace std;
int cds=0;
int valorCd=0;
int soma=0;
int media=0;

void colecaoCD(){
    cout<<"Informe a quantidade de CD's: ";
    cin>>cds;
    for(int i=1; i<=cds;i++){
        cout<<"Informe o valor do "<<i<<" CD: ";
        cin>>valorCd;
        soma+=valorCd;
        media=soma/i;
    }
    cout<<"\n\nO valor total investido é: "<<soma<<endl;
    cout<<"A média gasta em Cds é: "<<media<<endl;
}

int main() {
    
    colecaoCD();
   return 0;
}
