/******************************************************************************

                             Faça	um programa que imprima na tela os números 
                             de 1 a 20, um abaixo do	outro. Depois modifique 
                             o programa para que ele mostre os números	um ao
                             lado do outro.

*******************************************************************************/

#include <iostream>

using namespace std;
void imprimirUmAVinte(){
    for(int i=1; i<=20;i++){
        cout<<i<<endl;
    }
}
void imprimirUmAVinteLado(){
    for(int i=1; i<=20;i++){
        cout<<i;
    }
}

int main()
{
   imprimirUmAVinte();
   imprimirUmAVinteLado();

    return 0;
}
