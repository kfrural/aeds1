/******************************************************************************

                              Faça	um programa que leia um nome de usuário e a
                              sua senha e não aceite a senha igual ao nome do
                              usuário, mostrando uma mensagem de erro e 
                              voltando a pedir as informações.
                              Dica (#include<string>)

*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;
string usuario;
string senha;

void verificaUsuario(){
    do{
        cout<<"digite seu usuario: ";
        cin>>usuario;
        cout<<"Digite sua senha: ";
        cin>>senha;
        if(usuario==senha){
            cout<<"ERRO"<<endl;
        }else{
            cout<<"ENTROU"<<endl;
        }
    }while(usuario==senha);
}
int main()
{
    verificaUsuario();

    return 0;
}
