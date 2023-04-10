#include<iostream> 

using namespace std;

float resultadox(float a, float b, float c, float d, float e, float f){
return ((c*e) - (b*f))/((a*e) - (b*d));
}
float resultadoy(float a, float b, float c, float d, float e, float f){
return ((a*f) - (c*d))/((a*e) - (b*d));
}

int main(){
    float valor1=0;
    float valor2=0;
    float valor3=0;
    float valor4=0;
    float valor5=0;
    float valor6=0;

        cout << "Digite o valor de a: ";
        cin >> valor1;
        cout<< "Digite o valor de b: ";
        cin>> valor2;
        cout << "Digite o valor de c: ";
        cin >> valor3;
        cout<< "Digite o valor de d: ";
        cin>> valor4;
        cout << "Digite o valor de e: ";
        cin >> valor5;
        cout<< "Digite o valor de f: ";
        cin>> valor6;

        cout << "O valor de x é: " << resultadox(valor1, valor2, valor3, valor4, valor5, valor6) << endl;
        cout << "O valor de y é: " << resultadoy(valor1, valor2, valor3, valor4, valor5, valor6) << endl;
        
return 0;
}
