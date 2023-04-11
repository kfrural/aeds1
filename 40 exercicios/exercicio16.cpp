#include<iostream>
using namespace std;

int main(){
	int a = 0; 
	int b = 0;
	
	cout<<"Informe o valor de a: ";
	cin>>a;
	cout<<"Informe o valor de b: ";
	cin>>b;
	
	if(a < b){
		int aux = 0;
		aux = a;
		a = b;
		b = aux;
		cout << "a: "<< a << ", b:" << b << endl;
	}else{
		cout << "Não é necessário trocar os valroes" << endl;
	}
	
	return 0;
}
