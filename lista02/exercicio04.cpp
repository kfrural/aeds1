/******************************************************************************

                              Faça um programa que leia N números e informe a 
                              soma dos 3 maiores.

*******************************************************************************/

#include <iostream>

using namespace std;

float soma3Maiores(int n){
    float var1=0.0;
    float var2=0.0;
    float var3=0.0;
    float valor = 0.0;
    
    for(int i=1; i<= n; i++){
        cout << "Informe um numero:";
        cin >> valor;

        if(var1 < var2 && var1 < var3 && valor > var1){
            var1 = valor;
        }else{ 
            if(var2 <= var1 && var2 < var3 && valor > var2){
                var2 = valor;
            } else{
                if(valor > var3)
                    var3 = valor;
            }
        } 
    }
    
    float somatorio = var1 + var2 + var3;
    return somatorio;
}

int* verificaoMenorDeles(int *m1, int *m2, int *m3){    

    if((*m1 <= *m2) && (*m1 <= *m3)){
        return m1;
    }
    if((*m2 <= *m1) && (*m2 <= *m3)){
        return m2;
    }
    if((*m3 < *m2) && (*m3 < *m1)){
        return m3;
    }
    return m1;    
}

int main(){
    int x1=0;
    int x2=0;
    int x3=0;
    int n = 3;
    cout << "Quantos numeros serão inseridos:";
    cin >> n;   

    int valorInformado = 0;
    for(int i=0; i< n; i++){
        cout << "Informe o numero:";
        cin >>valorInformado;
        int* menor = verificaoMenorDeles(&x1, &x2, &x3);

        if( valorInformado > *menor ){
            *menor = valorInformado;
        }
    }

    float sum = x1 + x2 + x3;    
    cout << "a soma dos 3 maiores:" << sum << endl;
    return 0;
}
