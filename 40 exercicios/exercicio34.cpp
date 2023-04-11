#include <iostream>

using namespace std;

float medianota(float n1,float n2,float n3){
    return ((n1*4)+(n2*3)+(n3*3))/10;
    
}

int main()
{
    int matricula;
    float nota1=0;
    float nota2=0;
    float nota3=0;
    float media=0;
    
    
    cout<<"---------  Prezado aluno -------------"<<endl;
    
    cout<<"Informe seu código/matricula: ";
    cin>>matricula;
    cout<<"Informe a nota 1: ";
    cin>>nota1;
    cout<<"Informe a nota 2: ";
    cin>>nota2;
    cout<<"Informe a nota 3: ";
    cin>>nota3;
    
    cout<<"---------------------------------------"<<endl;
    
    media=((nota1*4)+(nota2*3)+(nota3*3))/(4+3+3);
    
    cout<<"Matricula:"<<matricula<<"\nNota 1: "<<nota1<<"\nNota 2: "<<nota2<<"\nNota 3: "<<nota3<<"\nMedia ponderada:  "<<media<<endl;
    
    if(media>=50){
        cout<<"APROVADO!"<<endl;
    }else{
        cout<<"REPROVADO!"<<endl;
    }
    

    return 0;
}
