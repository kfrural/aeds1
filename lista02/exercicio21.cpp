/******************************************************************************

                              Altere o programa anterior para que ele aceite 
                              apenas números entre 0 e	1000.
*******************************************************************************/

#include <iostream>

using namespace std;
int qtd=0;
int num=0;
int maior=0;
int menor=999999;
int soma=0;

void valores(){
    do{
        cout<<"Indique a qtd de numeros que quer digitar: ";
        cin>>qtd;
        if(qtd>0 || qtd<1000){
            for(int i=1;i<=qtd;i++){
            cout<<"digite um numero: ";
            cin>>num;
            if(num>maior){
                maior=num;
            }if(num<menor){
                menor=num;
            }
            soma+=num;
        }
        cout<<"\nO maior numero é: "<<maior<<endl;
        cout<<"O menor numero é: "<<menor<<endl;
        cout<<"A soma de todos os numeros é: "<<soma<<endl;
        }else{
            cout<<"ERRO!"<<endl;
        }
    }while(qtd<0 || qtd>1000);
    }

int main()
{
    valores();

    return 0;
}
