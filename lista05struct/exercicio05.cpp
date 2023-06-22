/******************************************************************************

                              Crie uma struct chamada "Círculo" que armazene o
                              raio (float). Crie uma função para calcular a
                              área do círculo e outra função para calcular o
                              perímetro.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

struct Circulo{
    float raio;
};
void preencher(Circulo &c1){
    cout << "Digite seus dados abaixo: \n";
    cout << "Raio: ";
    cin >> c1.raio;
    
    
}

float areaCirculo(Circulo &c1){
    float area = 0.0;
    area = (c1.raio * c1.raio)*3.14;
    return area;
}


void exibir (Circulo &c1){
    cout << "\n Impressao\n";
    cout << "A area do circulo é: " << areaCirculo(c1);
}

int main()
{
    Circulo c1;
    
    preencher(c1);
    exibir(c1);

    return 0;
}
