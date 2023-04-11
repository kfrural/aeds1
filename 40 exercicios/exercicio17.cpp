#include <iostream>
using namespace std;

void valorPositivo(float valor){
    if(valor == 0) {
        cout << "Zero";
    }else{
        if(valor > 0){
            cout << "Positivo";
        }else{
            cout << "Negativo";
        }
    }
}

int main(){
    float numero;
    cout << "Informe um numero qualquer: ";
    cin >> numero;
    
    valorPositivo(numero);
    return 0;
}
