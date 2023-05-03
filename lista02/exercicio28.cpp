/******************************************************************************

                              Faça um programa que calcule o número médio de 
                              alunos por turma. Para	isto, peça a quantidade
                              de turmas e a quantidade de alunos para	cada
                              turma. As turmas não podem ter mais de 40 alunos.
*******************************************************************************/

#include <iostream>
using namespace std;
int turma=0;
int alunos=0;
int soma=0;
int media=0;

void mediaTurma(){
    cout<<"Quantidade de turmas: ";
    cin>>turma;
    for(int i=1;i<=turma;i++){
        cout<<"quantidade de alunos na "<<i<<" turma: ";
        cin>>alunos;
        if(alunos<=40 && alunos>0){
            soma+=alunos;
            media=soma/i;
        }else{
            cout<<"Valor invalido!"<<endl;
        }
    }
    cout<<"A média de alunos por turma é: "<<media<<endl;
}

int main() {
    
    mediaTurma();
   return 0;
}
