/******************************************************************************

                              O Sr. Zé possui uma grande loja de artigos de
                              R$ 1,99, com	cerca de 10 caixas. Para agilizar o
                              cálculo de quanto cada cliente deve pagar ele
                              desenvolveu um tabela que contém o número de itens
                              que o cliente comprou e ao lado o valor da conta.
                              Desta forma a	atendente do caixa precisa apenas
                              contar quantos itens o cliente está levando e
                              olhar na tabela de preços. Você foi contratado 
                              para desenvolver o programa que monta esta tabela 
                              de preços, que conterá os preços de 1 até 50
                              produtos, conforme o exemplo	abaixo:
                              
*******************************************************************************/

#include <iostream>
using namespace std;
int qtd=50;
float preco=1.99;
float valorFinal=0.0;

void tabelaPreco(){
    cout<<"\t-----------------------------------------"<<endl;
    cout<<"\t---Lojas Quase Dois - Tabela de preços---"<<endl;
    cout<<"\t-----------------------------------------\n"<<endl;
    for(int i=1;i<=qtd;i++){
        valorFinal=preco*i;
        cout<<i<<" - R$ "<<valorFinal<<endl;
    }
    
}

int main() {
    
    tabelaPreco();
    
   return 0;
}
