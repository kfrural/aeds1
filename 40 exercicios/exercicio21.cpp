#include <iostream>
using namespace std;

void verificaPar(int numero){
    if(numero % 2 == 0) {
        cout << "O numero é par" << endl;
    }else{          
        cout << "O numero é impar" << endl;      
    }
}

int main(){
    int a;
    cout << "Informe um numero: ";
    cin >> a;
    
    verificaPar(a);
    return 0;
}