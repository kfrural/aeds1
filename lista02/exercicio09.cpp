/******************************************************************************

                              Faça	um programa que peça uma única nota, entre
                              zero e dez. Caso o valor informado seja inválido,
                              seu programa deve emitir uma mensagem de erro e
                              solicitar novamente a nota até que o usuário	
                              informe uma nota válida, entre zero e dez.

*******************************************************************************/

#include <iostream>

using namespace std;
float nota=0.0;

void verificaNota(){
    do{
        cout<<"Digite uma nota: ";
        cin>>nota;
        if(nota<0 || nota>10){
            cout<<"ERRO"<<endl;
        }else{
            cout<<"Nota: "<<nota<<endl;
        }
    }while(nota<0 || nota>10);
    
}

int main()
{
    verificaNota();

    return 0;
}
