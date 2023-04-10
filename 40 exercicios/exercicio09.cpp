#include<iostream> 

using namespace std;

float quadrupla(float a){
return a * 4;
}
float triplo(float a){
return a * 3;
}

int main(){
    float valor1=0;

        cout << "Digite o primeiro numero: ";
        cin >> valor1;

        cout << "O quadruplo do valor é: " << quadrupla(valor1) << endl;
        cout << "O triplo do valor é: " << triplo(valor1) << endl;
        
return 0;
}
