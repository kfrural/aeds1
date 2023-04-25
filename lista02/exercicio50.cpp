/******************************************************************************

                              Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um
                              programa que calcule o valor de H com N termos.

*******************************************************************************/

#include <iostream>

using namespace std;
int num=0;
double h=0.0;

void valorH(int num){
    for(int i=1; i<=num; i++){
        h+= 1.0/num;
    }
    cout<<"O valor de H: "<<h<<" com "<<num<<" termos "<<endl;
}

int main()
{
    int nTermos=0;
    
    cout<<"Digite um valor para N termos: ";
    cin>>nTermos;
    
    valorH(nTermos);
    
    return 0;
}
