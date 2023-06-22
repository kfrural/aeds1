/******************************************************************************

                              Crie uma struct chamada "Livro" que armazene os 
                              seguintes dados: título (string), autor (string)
                              e ano de publicação (int). Crie uma função para exibir as informações de um livro.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int ano;
};
void preencher(Livro &l1){
    cout << "Digite seus dados abaixo: \n";
    cout << "Titulo: ";
    cin >> l1.titulo;
    cout << "Autor: ";
    cin >> l1.autor;
    cout << "Ano: ";
    cin >> l1.ano;
    
    
}


void exibir (Livro &l1){
    cout << "\n Impressao\n";
    cout << "\nTitulo: " << l1.titulo;
    cout << "\nAutor: " << l1.autor;
    cout << "\nAno: " << l1.ano;
}

int main()
{
    Livro l1;
    
    preencher(l1);
    exibir(l1);

    return 0;
}
