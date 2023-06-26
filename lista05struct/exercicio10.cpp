/******************************************************************************

                              Crie uma struct chamada "Vetor" que armazene as 
                              coordenadas x, y e z. Adicione um método para 
                              calcular o produto escalar entre dois vetores.
                              Adicionar um método significa colocar a função 
                              dentro da struct

*******************************************************************************/

#include <iostream>

using namespace std;
struct Vetor{
    int x;
    int y;
    int z;
    
    int produtoEscalar(Vetor &p2){
        int resultadoProdEscalar = (x* p2.x) + (y* p2.y) + (z* p2.z);
        return resultadoProdEscalar;
    }
};

void preencher(Vetor &p1, Vetor &p2){
    cout << "Digite os dados abaixo\n";
    cout << "Ponto X1: ";
    cin >> p1.x;
    cout << "Ponto Y1: ";
    cin >> p1.y;
    cout << "Ponto Z1: ";
    cin >> p1.z;
    cout << "Ponto X2: ";
    cin >> p2.x;
    cout << "Ponto Y2: ";
    cin >> p2.y;
    cout << "Ponto Z2: ";
    cin >> p2.z;
    
}

void exibir (Vetor &p1, Vetor &p2){
    cout << "\n Impressao\n";
    cout << "\nProduto escalar: " << p1.produtoEscalar(p1);
}

int main()
{
    Vetor p1;
    Vetor p2;
    
    preencher(p1,p2);
    exibir(p1,p2);

    return 0;
}
