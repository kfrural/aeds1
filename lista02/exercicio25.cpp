/******************************************************************************

                              Faça um programa que mostre todos os primos entre
                              1 e N sendo N um número inteiro fornecido pelo 
                              usuário. O programa deverá mostrar também o 
                              número de divisões que ele executou para encontrar
                              os números primos. Serão avaliados o 
                              funcionamento, o estilo e o número de testes
                              (divisões) executados.
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
   int n, cont = 0;

   cout << "Digite um número inteiro: ";
   cin >> n;

   for (int i = 2; i <= n; i++) {
      bool ehPrimo = true;
      for (int j = 2; j <= i / 2; j++) {
         cont++; 
         if (i % j == 0) {
            ehPrimo = false;
            break;
         }
      }
      if (ehPrimo) {
         cout << i << " é primo." << endl;
      }
   }

   cout << "Foram executadas " << cont << " divisões." << endl;

   return 0;
}
