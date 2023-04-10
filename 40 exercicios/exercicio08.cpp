#include<iostream> 

using namespace std;

float multiplica(float a, float b, float c){
return a + b + c;
}

int main(){
  float valor1=0;
  float valor2=0;
  float valor3=0;
  
    cout << "Digite o primeiro numero: ";
    cin >> valor1;
    cout << "Digite o segundo numero: ";
    cin >> valor2;
    cout << "Digite o terceiro numero: ";
    cin >> valor3;
  
    cout << "A multiplicacao dos valores é: " << multiplica(valor1, valor2, valor3) << endl;
  
return 0;
}
