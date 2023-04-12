#include <iostream>
using namespace std;

void verificaPar(int numero){
    if(numero % 2 == 0) {
        cout << "O numero é par" << endl;
    }else{          
        cout << "O numero é impar" << endl;      
    }
}
void verificaNegativo(int num){
    if(num>0){
        cout<<"O numero é positivo"<<endl;
    }else{
        cout<<"O numero é negativo"<<endl;
    }
}

int main(){
    int a;
    cout << "Informe um numero: ";
    cin >> a;
    
    verificaPar(a);
    verificaNegativo(a);
    return 0;
}
