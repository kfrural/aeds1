#include <iostream>

using namespace std;

float media(float n1, float n2, float n3){
    return (n1+n2+n3)/3;
}

int main()
{
    float nota1=0.0;
    float nota2=0.0;
    float nota3=0.0;
    
    cout<<"Digite sua primeira nota: ";
    cin>>nota1;
    cout<<"Digite sua segunda nota: ";
    cin>>nota2;
    cout<<"Digite sua terceira nota: ";
    cin>>nota3;
    
    cout<<"Média ponderada: "<<media(nota1, nota2, nota3)<<endl;
    
    if(media>=60){
        cout<<"APROVADO!"<<endl;
    }else{
        cout<<"REPROVADO!"<<endl;
    }

    return 0;
}
