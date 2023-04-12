#include <iostream>

using namespace std;
int duracao(int horaInicio, int horaFim){
    return horaFim - horaInicio;
}

int main()
{
    int inicio=0;
    int fim=0;
    
    cout<<"Que horas o jogo comecou: ";
    cin>>inicio;
    cout<<"Que horas o jogo terminou: ";
    cin>>fim;
    
    cout<<"A duracao do jogo foi de "<<duracao(inicio, fim);
    
    if(duracao>24){
        cout<<"Nao pode seu moço";
    }

    return 0;
}
