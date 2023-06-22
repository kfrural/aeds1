/******************************************************************************

                              Crie uma struct chamada "Aluno" que armazene os
                              seguintes dados: matrícula (int), nome (string) e 
                              notas (array de floats). Crie uma função para
                              preencher as notas de um aluno e outra função para
                              calcular a média das notas.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

struct Aluno{
    int matricula;
    string nome;
    float *nota = new float [4];
};
void preencher(Aluno &a1){
    cout << "Digite seus dados abaixo: \n";
    cout << "Matricula: ";
    cin >> a1.matricula;
    cout << "Nome: ";
    cin >> a1.nome;
    for(int i = 0; i < 4; i++){
        cout << "Digite a " << i+1 << " nota: ";
        cin >> a1.nota[i];
    }
    
}

float mediaNotas(Aluno &a1){
    float soma = 0;
    float media = 0.0;
    for(int i = 0; i < 4; i++){
        soma += a1.nota[i];
    }
    media = soma/4;
    return media;
}


void exibir (Aluno &a1){
    cout << "\n Impressao\n";
    cout << "\nMatricula: " << a1.matricula;
    cout << "\nNome: " << a1.nome;
    cout << "\nMedia: " << mediaNotas(a1);
}

int main()
{
    Aluno a1;
    
    preencher(a1);
    exibir(a1);

    return 0;
}
