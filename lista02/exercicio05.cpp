/******************************************************************************

                              Faça	um programa que imprima na tela apenas os 
                              números ímpares entre 1 e 50

*******************************************************************************/

#include <iostream>

using namespace std;

    void imprimeImpar(){
        for(int i=1;i<=50;i++){
            if(i%2!=0){
            cout<<i<<endl;
            }
        }
    }

int main(){
      
      imprimeImpar();
    return 0;
}
