#include <iostream>

using namespace std;

int main()
{
    float saldo=0;
    float credito=0;
    
    cout<<"Digite o saldo medio do cliente anual: ";
    cin>>saldo;
    
    switch((int) saldo/200){
        case 0:
            credito = 0;
            break;
        case 1:
            credito = saldo * 0.2;
            break;
        case 2:
            credito = saldo * 0.3;
            break;
        default:
            credito = saldo * 0.4;
            break;
    }
    
    cout<<"O saldo medio é: "<<saldo<<endl;
    cout<<"O credito e: "<<credito<<endl;

    return 0;
}
