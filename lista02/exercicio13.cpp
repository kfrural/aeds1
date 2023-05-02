/******************************************************************************

                              Altere o programa anterior permitindo ao usuário 
                              informar as populações	e as taxas de 
                              crescimento iniciais. Valide a entrada e permita
                              repetir a operação.

*******************************************************************************/

#include <iostream>
using namespace std;

int paisA=0;
int paisB=0;
float taxaA=0.0;
float taxaB=0.0;
int i=0;

void verificaPopulacao(){
    cout<<"Informe a população do pais A: ";
    cin>>paisA;
    cout<<"Informe a taxa de crescimento do pais A: ";
    cin>>taxaA;
    cout<<"Informe a população do pais B: ";
    cin>>paisB;
    cout<<"Informe a taxa de crescimento do pais B: ";
    cin>>taxaB;
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
