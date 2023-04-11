#include<iostream>
using namespace std;

int main(){
	int a = 10; 
	int b = 20;
	
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
