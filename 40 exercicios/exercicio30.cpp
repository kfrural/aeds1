#include <iostream>

using namespace std;

void verificaMultiplos(int a, int b){
    if (a % b == 0 || b % a == 0) {
        cout << "Sao multiplos" << endl;
    } else {
        cout << "Nao sao multiplos" << endl;
    }
}

int main() {
    int numero1=0;
    int numero2=0;
    
    cout << "Digite o valor de a: ";
    cin >>numero1;
    cout << "Digite o valor de b: ";
    cin >>numero2;
    
    verificaMultiplos(numero1, numero2);
    return 0;
}
