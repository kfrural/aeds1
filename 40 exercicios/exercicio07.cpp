#include<iostream>
using namespace std;

float soma(float x, float y, float z){
		float resultado = x + y + z;
		return resultado;
}

int main(){
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;

	cout << "Informe a:";
	cin >> a;
	cout << "Informe b:";
	cin >> b;
	cout << "Informe c:";
	cin >> bc;

	float resposta = soma(a, b, c);
	float media = resposta/3.0;
	cout << "A media de a e b e c é:" << media << endl;

	return 0;
}
