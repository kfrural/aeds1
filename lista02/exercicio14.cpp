/******************************************************************************

                             Desenvolva um gerador de tabuada, capaz de gerar a
                             tabuada de multiplicação	de qualquer número 
                             inteiro entre 1 a 10. O usuário deve informar de 
                             qual numero ele deseja ver a tabuada. A saída deve
                             ser conforme o exemplo abaixo:

*******************************************************************************/

#include <iostream>
using namespace std;
int numTabuada=0;
int resultado=0;

void tabuada(){
    do{
        cout<<"- Gerador de tabuada - "<<endl;
        cout<<"Informe o numero q deseja ver a tabuada: ";
        cin>>numTabuada;
        if(numTabuada<=10){
            for(int i=0;i<=10;i++){
                resultado = numTabuada*i;
                cout<<numTabuada<<" X "<<i<<" = "<<resultado<<endl;
            }
        }else{
            cout<<"ERRO!"<<endl;
        }
    }while(numTabuada>10);
    
}
int main() {
    
    tabuada();
    
    return 0;
}
