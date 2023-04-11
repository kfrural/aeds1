#include <iostream>
using namespace std;

void maiorQue18(int idade){
    if(idade >=18) {
        cout << "Voce ta veio o suficiente para o exame";
    }else{        
        cout << "Voce está muito nenem. Espere um pouco mais";       
    }
}

int main(){
    int idade;
    cout << "Informe sua idade: ";
    cin >> idade;
    
    maiorQue18(idade);
    return 0;
}
