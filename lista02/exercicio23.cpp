/******************************************************************************

                              Faça um programa que peça um número inteiro e 
                              determine se ele é ou não um número primo. Um 
                              número primo é aquele que é divisível	somente por
                              ele mesmo e por 1.
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
            break;
         }
      }
   }

   if (ehPrimo) {
      cout << n << " é um número primo." << endl;
   } else {
      cout << n << " não é um número primo." << endl;
   }

   return 0;
}
