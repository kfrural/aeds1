/******************************************************************************

                              Faça um programa que peça para N pessoas a sua
                              idade, ao final o programa deverá verificar se a
                              média de idade da turma varia entre	[0 e 25], 
                              [26 e 60] e [maior que 60]; e então, dizer se a
                              turma é jovem, adulta ou idosa, conforme a média 
                              calculada.
*******************************************************************************/

#include <iostream>
using namespace std;
int qtd=0;
int idade=0;
int soma=0;
float media=0.0;

void verificaIdade(){
    cout<<"quantidade de pessoas: ";
    cin>>qtd;
    for(int i=1;i<=qtd;i++){
        cout<<"Digite sua idade: ";
        cin>>idade;
        soma+=idade;
        media=soma/i;
    }
    cout<<"Média: "<<media<<endl;
    if(media>0 && media<=25){
        cout<<"Jovem";
    }else if(media>25 && media<=60){
        cout<<"Adulto";
    }else if(media>60){
        cout<<"Idoso";
    }else{
        cout<<"Valor invalido"<<endl;
    }
    
}

int main() {
    
    verificaIdade();
   return 0;
}
