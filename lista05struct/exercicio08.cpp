/******************************************************************************

                              Crie uma struct chamada "Ponto2D" que armazene as
                              coordenadas x e y. Adicione um método para
                              calcular a distância entre dois pontos. Adicionar
                              um método significa colocar a função dentro da
                              struct

*******************************************************************************/

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

struct Ponto2D{
    int x;
    int y;
    
    int distancia(Ponto2D &p1,Ponto2D &p2){
        int distanciaX = 0;
        int distanciaY = 0;
        distanciaX = p2.x - p1.x;
        distanciaY = p2.y - p2.y;
        return sqrt(distanciaX * distanciaX + distanciaY * distanciaY);
    }
};
void preencher(Ponto2D &p1, Ponto2D &p2){
    cout << "Digite seus dados abaixo: \n";
    cout << "X1: ";
    cin >> p1.x;
    cout << "Y1: ";
    cin >> p1.y;
    cout << "X2: ";
    cin >> p2.x;
    cout << "Y2: ";
    cin >> p2.y;
    
    
}


void exibir (Ponto2D &p1, Ponto2D &p2){
    cout << "\n Impressao\n";
    cout << "\nDistancia: " << p2.distancia(p1, p2);
}

int main()
{
    Ponto2D p1;
    Ponto2D p2;
    
    preencher(p1, p2);
    exibir(p1, p2);

    return 0;
}
