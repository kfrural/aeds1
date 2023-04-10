#include <iostream>

using namespace std;

int main()
{
   int duracao, horas, minutos, segundos;

cout << "Digite a duração do evento em segundos: ";
cin >> duracao;

horas = duracao / 3600;
duracao %= 3600;

minutos = duracao / 60;

segundos = duracao % 60;

cout << "A duração do evento é de " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << endl;

return 0;
}
