/******************************************************************************

                              Crie uma struct chamada "Retângulo" que armazene
                              os seguintes dados: largura (float) e altura 
                              (float). Crie uma função para calcular a área do 
                              retângulo e outra função para calcular o perímetro

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

struct Retangulo{
    float largura;
    float altura;
};
void preencher(Retangulo &r1){
    cout << "Digite seus dados abaixo: \n";
    cout << "Largura: ";
    cin >> r1.largura;
    cout << "Altura: ";
    cin >> r1.altura;
    
}

float area(Retangulo &r1){
    float resultado = 0;
    resultado = r1.largura * r1.altura;
    return resultado;
}

float perimetro(Retangulo &r1){
    float resultado = 0;
    resultado = (2* r1.largura) + (2* r1.altura);
    return resultado;
}

void exibir (Retangulo &r1){
    cout << "\n Impressao\n";
    cout << "\nArea: " << area(r1);
    cout << "\nAltura: " << perimetro(r1);
}

int main()
{
    Retangulo r1;
    
    preencher(r1);
    exibir(r1);

    return 0;
}
