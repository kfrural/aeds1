/******************************************************************************

                              O Sr. Zé acaba de adquirir uma panificadora e
                              pretende implantar a metodologia da tabelinha, que
                              já é um sucesso na sua loja de 1,99. Você foi 
                              contratado para desenvolver o programa que
                              monta a tabela de preços de pães, de 1 até 50 
                              pães, a partir do	preço do pão informado pelo
                              usuário, conforme o exemplo abaixo:
                              
*******************************************************************************/

#include <iostream>
using namespace std;
int qtd=50;
float preco=0.18;
float valorFinal=0.0;

void tabelaPreco(){
    cout<<"\t-----------------------------------------"<<endl;
    cout<<"\tPanificadora pão duro - Tabela de preços"<<endl;
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
