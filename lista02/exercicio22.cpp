/******************************************************************************

                              Altere o programa de cálculo do fatorial, 
                              permitindo ao usuário calcular o fatorial várias
                              vezes e limitando o fatorial a números inteiros 
                              positivos e menores que 16.
*******************************************************************************/

#include <iostream>

using namespace std;
int numero=1;
int fat=1;

void fatorial(){
    do{
        cout<<"Indique um numero: ";
        cin>>numero;
        if(numero>0 || numero<=16){
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
        }else if(numero!=0){
            cout<<"ERRO!"<<endl;
        }
    }while(numero!=0);
}

int main()
{
    fatorial();

    return 0;
}
