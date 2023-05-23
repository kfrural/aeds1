/******************************************************************************

Escreva um trecho de código em que seja declarado duas variáveis qualquer e em
seguida seus respectivos endereços de memória;

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a=10;
    float b=1.24;
    
    cout<<"Endereço de a: "<<&a<<endl;
    cout<<"Endereço de b: "<<&b<<endl;

    return 0;
}
