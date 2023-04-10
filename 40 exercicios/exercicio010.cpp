#include<iostream> 

using namespace std;

float baskara(float a){
return (a * a) + (2*a) - 3;
}
float triplo(float a){
return a * 3;
}

int main(){
    float valor1=0;

        cout << "Digite o valor de x: ";
        cin >> valor1;

        cout << "O resultado é: " << baskara(valor1) << endl;
        
return 0;
}
