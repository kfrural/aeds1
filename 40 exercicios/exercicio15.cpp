#include <iostream>

using namespace std;

float valorConsumidor(float custo){
    return custo + (custo * 0.28) + (custo * 0.45); 
}

int main()
{
    float custoFabrica=0.0;
    
    cout<<"Qual o custo do carro: ";
    cin>> custoFabrica;
    cout<<"O valor a ser repassado ao consumidor é: "<<valorConsumidor(custoFabrica)<<endl;

    return 0;
}
