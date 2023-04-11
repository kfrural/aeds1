#include <iostream>

using namespace std;
    
    float peso=0;
    float altura=0;
    char sexo=0;

int main()
{
    cout<<"Qual sua altura: ";
    cin>>altura;
    cout<<"Qual seu sexo: (M=masculino e F=feminino)";
    cin>>sexo;
    
    if(sexo =='M'){
        peso = (72.7 * altura) -58;
    }
    else if(sexo =='F'){
        peso =(62.1 * altura) - 44.7;
    }
    
    cout<<"O seu peso ideal e: "<<peso<<endl;

    return 0;
}
