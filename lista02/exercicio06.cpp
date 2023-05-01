/******************************************************************************

                              Faça	um programa que receba dois números
                              inteiros e gere os números inteiros que estão no
                              intervalo compreendido por eles.

*******************************************************************************/

#include <iostream>

using namespace std;
int num1=0;
int num2=0;
int intervalo=0;

void intervalos(int n1, int n2){
    if(n1<n2){
        for(int i=n1+1;i<n2;i++){
            cout<<i;
        }
    }else if(n1>n2){
        for(int i=n2+1;i<n1;i++){
            cout<<i;
        }
    }else{
        cout<<"Não ha intervalos!!"<<endl;
    }
    
}

int main()
{
    cout<<"Digite o primeiro numero: ";
    cin>>num1;
    cout<<"Digite o segundo numero: ";
    cin>>num2;
    
    intervalos(num1, num2);

    return 0;
}
