/******************************************************************************

                              11. Faça	um programa que leia e valide as 
                              seguintes informações:
                                1. Idade: entre 0 e 150;
                                2. Salário: maior que zero;
                                3. Estado Civil: 's', 'c', 'v', 'd';

*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;
int idade=0;
float salario=0.0;
char civil='-';

void verificaIdade(){
    cout<<"Informe sua idade: ";
    cin>>idade;
    while(idade<0 || idade>50){
        cout<<"ERRO!"<<endl;
        cout<<"Informe sua idade: ";
        cin>>idade;
    }
    cout<<"Idade OK"<<endl;
}
   
void verificaSalario(){
    do{
        cout<<"Informe seu salario: ";
        cin>>salario;
        if(salario>0){
            cout<<"Salario OK"<<endl;
        }else{
            cout<<"ERRO!"<<endl;
        }
    }while(salario<0);
}

void verificaEstadoCivil(){
    do{
        cout<<"\t---DEFINA SEU ESTADO CIVIL---\n s - solterio\n c - casado\n v - viuvo\n d - divorciado"<<endl;
        cin>>civil;
        if(civil !='s' || civil !='c' || civil!='v' || civil!='d'){
            cout<<"ERRO!"<<endl;
        }else{
            cout<<"Estado Civil OK"<<endl;
        }
    }while(civil=='s' || civil=='c' || civil=='v' || civil=='d');
}

int main()
{
    verificaIdade();
    verificaSalario();
    verificaEstadoCivil();

    return 0;
}
