/******************************************************************************

                              Faça	um programa que calcule o fatorial de um 
                              número inteiro fornecido	pelo usuário. A saída 
                              deve ser conforme o exemplo abaixo:

*******************************************************************************/

#include <iostream>

using namespace std;
int numero=1;
int fat=1;

void fatorial(){
    cout<<"Indique um numero: ";
    cin>>numero;
    for(int i=numero;i>0;i--){
        fat*= i;
    }
    cout<<numero<<"! = ";
    for(int i=numero;i>0;i--){
        cout<<i;
        if(i>1){
            cout<<" . ";    
        }
    }
    cout<<" = "<<fat;
}

int main()
{
    fatorial();

    return 0;
}
