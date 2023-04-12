#include <iostream>

using namespace std;

bool par(int a, int b) {
    if (a % 2 == 0 || b % 2 == 0) {
        return true;
    } else {
        return false;
    }
    
}

int main() {
    int n1 = 0;
    int n2 = 0;
    
        cout<<"Digite um numero: ";
        cin>>n1;
        cout<<"Digite outro numero: ";
        cin>>n2;
        
        if(par(n1,n2)){
        cout<<"Há ao menos um numero par";
        }else{
        cout<<"Nenhum numero é par";
        }
        par(n1,n2);

    
    return 0;
}
