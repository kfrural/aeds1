/*Crie uma struct chamada "Funcionário" que armazene o nome (string), salário (float) 
e data de admissão (struct "Data" com dia, mês e ano). Adicione métodos para calcular
o tempo de serviço (em anos) do funcionário e para reajustar o salário com base em um
percentual fornecido.*/

#include <iostream>
#include <string>

using namespace std; 


struct Data{
    int dia, mes, ano;
};

struct Funcionario{
    string nome;
    float salario;
    Data ad;


    int transformaDataEmDias(Data data){
        int totalDias = data.dia;
        totalDias = totalDias + 30*data.mes;
        totalDias = totalDias + 365*data.ano;
        return totalDias;
    }

    Data transformaDiasEmData(int totalDias){
        Data resultado ;
        //calculando anos completos
        resultado.ano =  totalDias / 365;

        int resto = totalDias%365;
        //calculando meses
        resultado.mes = resto/30;

        //calculando dias
        resultado.dia = resto%30;

        return resultado;

    }

    // limite ex: 28/06/2023
    /**
     * Esta funcao transforma a data em dias e depois subtrai da 
     * data de admissao
     * 
    */
    void calculaTempoServico(Data limite){
        int dataLimite_dias =  transformaDataEmDias(limite);
        int dataAd_dias = transformaDataEmDias(ad);

        int dif = dataLimite_dias - dataAd_dias;
        Data tempo = transformaDiasEmData(dif);

        cout << "tempo de servico:";
        cout << tempo.ano << " anos, " 
             << tempo.mes << " meses, "
             << tempo.dia << " dias " << endl;
    }

};




int main() {
    Funcionario Gustavo;
    Gustavo.nome = "Gustavo";
    Gustavo.salario = 1000;
    Gustavo.ad.dia = 15;
    Gustavo.ad.mes = 8;
    Gustavo.ad.ano = 2000;


    Data hoje;
    hoje.ano = 2023;
    hoje.mes = 6;
    hoje.dia = 28;
    
    Gustavo.calculaTempoServico(hoje);

    return 0;
}
