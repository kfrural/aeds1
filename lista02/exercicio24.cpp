/******************************************************************************

                              Faça um programa que peça um número inteiro e 
                              determine se ele é ou não um número primo. Um 
                              número primo é aquele que é divisível	somente por
                              ele mesmo e por 1.
                              Altere o programa de cálculo 
                              dos números primos, informando, caso o número não 
                              seja primo, por quais número ele é divisível.
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
   int n;
   bool ehPrimo = true;

   cout << "Digite um número inteiro: ";
   cin >> n;

   if (n <= 1) {
      ehPrimo = false;
   } else {
      for (int i = 2; i <= n / 2; i++) {
         if (n % i == 0) {
            ehPrimo = false;
            cout << i << " ";
         }
      }
   }

   if (ehPrimo) {
      cout << n << " é um número primo." << endl;
   } else {
      cout << "são os divisores de " << n << "." << endl;
   }

   return 0;
}
