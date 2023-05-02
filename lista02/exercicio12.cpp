/******************************************************************************

                              Supondo	que a população de um país A seja da
                              ordem de 80000 habitantes com uma taxa anual de
                              crescimento de 3% e que a população de B seja
                              200000 habitantes com uma taxa de crescimento de 
                              1.5%. Faça um	programa que calcule e escreva o 
                              número de anos necessários para que a população 
                              do país A ultrapasse ou iguale a população do
                              país B, mantidas as taxas de crescimento.

*******************************************************************************/

#include <iostream>
using namespace std;

int paisA = 80000;
int paisB = 200000;
float taxaA = 0.03;
float taxaB = 0.015;
int i = 0;

void verificaPopulacao(){
    while (paisA < paisB) {
        paisA += paisA * taxaA;
        paisB += paisB * taxaB;
        i++;
    }
    cout << "Serão necessários " <<i<< " anos "<<endl;
}
int main() {
    
    verificaPopulacao();
    
    return 0;
}
