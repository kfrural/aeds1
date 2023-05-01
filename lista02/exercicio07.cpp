/******************************************************************************

                              Altere o programa anterior para mostrar no final 
                              a soma dos números.

*******************************************************************************/

#include <iostream>

using namespace std;
int num1=0;
int num2=0;
int soma=0;

void intervalo(int n1, int n2){
    if(n1<n2){
        for(int i=n1+1;i<n2;i++){
            soma=soma+i;
        }
        cout<<soma;
    }else if(n1>n2){
        for(int i=n2+1;i<n1;i++){
            soma=soma+i;
        }
        cout<<soma;
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
    
    intervalo(num1, num2);

    return 0;
}
