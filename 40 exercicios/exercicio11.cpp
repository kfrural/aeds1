#include<iostream> 

using namespace std;

float conta(float a, float b){
return (a * a) + (b * b) - 6 * (a*b) - 1;
}

int main(){
    float valor1=0;
    float valor2=0;

        cout << "Digite o valor de x: ";
        cin >> valor1;
        cout<< "Digite o valor de y: ";
        cin>> valor2;

        cout << "O resultado é: " << conta(valor1, valor2) << endl;
        
return 0;
}
