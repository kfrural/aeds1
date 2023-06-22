/******************************************************************************

                              Crie uma struct chamada "Data" que armazene os
                              seguintes dados: dia (int), mês (int) e ano (int).
                              Crie uma função para verificar se uma data é
                              válida.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};
void preencher(Data &d1){
    cout << "Digite seus dados abaixo: \n";
    cout << "Dia: ";
    cin >> d1.dia;
    cout << "Mes: ";
    cin >> d1.mes;
    cout << "Ano: ";
    cin >> d1.ano;
    
}

bool validarData(Data &d1){
    if(d1.dia > 0 && d1.dia <31 && d1.mes >0 && d1.mes <12 && d1.ano >1900 && d1.ano <2050){
        return true;
    }else {
        return false;
    }
}


void exibir (Data &d1){
    cout << "\n Impressao\n";
    cout << "\nData: \n";
    cout << d1.dia << "/"<< d1.mes << "/" << d1.ano;
    cout << " A data é: " << validarData(d1);
}

int main()
{
    Data d1;
    
    preencher(d1);
    exibir(d1);

    return 0;
}
