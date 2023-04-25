/******************************************************************************

                              Faça	um programa que calcule o fatorial
                              de um número. Lembre-se que
                              o	fatorial de 0 é 1..

*******************************************************************************/

#include <iostream>

using namespace std;
int num=0;
int fat=1;

void fatorial(int num){
    if(num<0){
        cout<<"ERRO!"<<endl;
    }else if(num == 0){
        cout<<"o fatorial de 0 é 1"<<endl;
    }else{
        for(int i=1; i<=num; i++){
            fat*=i;
        }
    }
    
    cout<<"O fatorial de "<<num<<" é "<<fat<<endl;

}
int main()
{
    int numero=0;
    cout<<"Digite um numero: ";
    cin>>numero;
    
    fatorial(numero);
    
    return 0;
}
