#include<iostream>
using namespace std;

float soma(float x, float y){
		float resultado = x + y;
		return resultado;
}

int main(){
	float a = 0.0;
	float b = 0.0;

	cout << "Informe a:";
	cin >> a;
	cout << "Informe b:";
	cin >> b;

	float resposta = soma(a, b);
	cout << "A soma de a e b é:" << resposta << endl;

	return 0;
}
