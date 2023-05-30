/******************************************************************************

                              12. Escreva um algoritmo em C, que leia um 
                              conjunto de 50 fichas correspondente à alunos e 
                              armazene-as em vetores, cada uma contendo, a 
                              altura e o código do sexo de uma pessoa, e 
                              calcule e imprima:
                                1. A maior e a menor altura da turma;
                                2. As mulheres com altura acima da média da 
                                altura das mulheres;
                                3. As pessoas com altura abaixo da média da 
                                turma.

*******************************************************************************/

#include <iostream>

using namespace std;

void quadradoNumero(){
    string* nome= new string[50];
    float* altura=new float [50];
    char* sexo= new char[50];
    float maiorAltura=0;
    float menorAltura=999999;
    float somaF=0;
    float mediaF=0;
    float media=0;
    float soma=0;
    int contF=0;
    int cont=0;
    for(int i=0;i<50;i++){
        cout<<"DIgite o nome do "<<i+1<<" aluno: ";
        cin>>nome[i];
        cout<<"Digite a altura desse aluno: ";
        cin>>altura[i];
        cout<<"digite o sexo desse aluno em F ou M: ";
        cin>>sexo[i];
        if(altura[i]>maiorAltura){
            maiorAltura=altura[i];
        }if(altura[i]<menorAltura){
            menorAltura=altura[i];
            soma+=altura[i];
            media=soma/i;
            if(altura[i]<media){
                cont++;
            }
        }if(sexo[i]=='F'){
            somaF+=altura[i];
            mediaF=somaF/i;
            if(altura[i]>mediaF){
                contF++;
            }
        }
    }
    cout<<"\n\nA maior altura da turma é: "<<maiorAltura<<endl;
    cout<<"A menor altura da turma é: "<<menorAltura<<endl;
    cout<<contF<<" mulheres tem altura acima da media das outras"<<endl;
    cout<<cont<<" pessoas tem altura abaixo da media"<<endl;
}

int main()
{
    quadradoNumero();

    return 0;
}
