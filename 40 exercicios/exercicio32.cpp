#include <iostream>
#include <math.h>

using namespace std;

float calcularDelta(float a, float b, float c){
    float delta = b*b - 4.0*a*c;
    return delta;
}

void calculaRaizes(float a, float b, float c){
    float delta = calcularDelta(a,b,c);
    cout << "Delta: "<< delta << endl;
    if(delta >= 0 ){
        float x1 = (-b + sqrt(delta))/(2.0*a);
        float x2 = (-b - sqrt(delta))/(2.0*a);
      
        cout << "Raizes da equacao: x1=" << x1 <<", x2=" << x2 << endl;
    }else{
        cout << "Não existe raizes reais " << endl;
    }
}
 

int main(){
		cout << " ----------------------------------------"<< endl;
    cout << "    Calcular raizes da equacao 2 grau    "<< endl;
    cout << "        F(x) = a*x*x + b*x + c           " << endl;
    cout << " ----------------------------------------" << endl;
    float a, b, c;
    cout << "Informe a:";
    cin >> a;
    cout << "Informe b:";
    cin >> b;
    cout << "Informe c:";
    cin >> c;
    
    calculaRaizes(a, b, c);

    return 0;
}
