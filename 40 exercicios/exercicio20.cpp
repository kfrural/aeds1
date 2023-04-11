#include <iostream>
using namespace std;

void maiorQue18(int idade){
    if(idade >= 18) {
        cout << "Voce tem idade suficiente para o exame";
    }else{ 
        int dif = 18 - idade;       
        cout << "Voce está muito novo. Falta " << dif << " anos" << endl; 
        cout << 'a';      
    }
}

int main(){
    int idade;
    cout << "Informe sua idade: ";
    cin >> idade;
    
    maiorQue18(idade);
    return 0;
}
