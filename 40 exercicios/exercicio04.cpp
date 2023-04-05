#include<iostream>
using namespace std;

int soma(int x, int y){
		int resultado = x + y;
		return resultado;
}

int main(){
	int a = 0.0;
	int b = 0.0;

	cout << "Informe a:";
	cin >> a;
	cout << "Informe b:";
	cin >> b;

	int resposta = soma(a, b);
	cout << "A soma de a e b é:" << resposta << endl;

	return 0;
}
