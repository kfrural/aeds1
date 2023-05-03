/******************************************************************************

                              38. Um funcionário de uma empresa recebe aumento
                              salarial anualmente:
    
    Sabe-se que:
    
    - Esse funcionário foi contratado em 1995, com salário inicial de 
    R$ 1.000,00;
    - Em 1996 recebeu aumento de 1,5% sobre seu salário inicial;
    - A partir de 1997 (inclusive), os aumentos salariais sempre correspondem
    ao dobro do percentual do ano anterior. F
    
    Faça um programa que determine o salário atual desse funcionário. Após
    concluir isto, altere o programa permitindo que o usuário digite o salário
    inicial do funcionário.

*******************************************************************************/

#include <iostream>

using namespace std;
float salarioInicial=1000;
float salarioNovo=1000;
float porcentagem=0.015;
int ano=1996;

void aumentoSalario(){
    for(int i=ano;i<=2023;i++){
        salarioNovo=(salarioInicial*porcentagem)+salarioNovo;
        cout<<"Seu salario no ano de "<<i<<" é "<<salarioNovo<<endl;
        porcentagem*=2.0;
    }
}

int main()
{
    
    aumentoSalario();

    return 0;
}
