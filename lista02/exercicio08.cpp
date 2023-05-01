/******************************************************************************

                              Faça	um programa que peça várias notas (0 a 10) 
                              e pare de pedir quando o usuário informar um
                              valor negativo.

*******************************************************************************/

#include <iostream>

using namespace std;
float nota=0.0;
void verificaNota(){
    do {
    
    cout << "Digite uma nota: ";
    cin >> nota;

    
    if (nota < 0) {
      break;
    }

    
    if (nota < 0 || nota > 10) {
      cout << "Nota inválida! Digite uma nota entre 0 e 10." << endl;
    } else {
      cout<< nota << endl;
    }
  } while (true);

  cout << "Programa encerrado." << endl;
}
int main() {
    
    verificaNota();

  return 0;
}
