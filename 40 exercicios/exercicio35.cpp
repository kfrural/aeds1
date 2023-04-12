#include <iostream>

using namespace std;

void menu(){
    char escolha=0;
    cout<<"a- Aritmetica\nb- Ponderada\nc- Harmonica\n\n Escolhe uma ai sô: "<<endl;
    cin>>escolha;
}
void aritmetica(float n1, float n2, float n3){
    (n1+n2+n3)/3;
}
void ponderada(float n1, float n2, float n3){
    ((n1*3)+(n2*3)+(n3*4))/(3+3+4);
}
void harmonica(float n1, float n2, float n3){
    3/((1/n1)+(1/n2)+(1/n3));
}
void texto(){
    float nota1=0.0;
    float nota2=0.0;
    float nota3=0.0;
    
    cout<<"Digite a primeira nota: ";
    cin>>nota1;
    cout<<"Digite a segunda nota: ";
    cin>>nota2;
    cout<<"Digite a terceira nota: ";
    cin>>nota3;
}

int main()
{
    
    char estrutura=0;
    char a=0;
    char b=0;
    char c=0;
     float nota1=0.0;
    float nota2=0.0;
    float nota3=0.0;
    
    

    
    menu();
    
    switch(estrutura){
        case 'a':
            aritmetica(nota1, nota2, nota3);
            break;
        case 'b':
            ponderada(nota1, nota2, nota3);
            break;
        case 'c':
            harmonica(nota1, nota2, nota3);
            break;
        default:
            cout<<"Opcao invalida!\n Tenta de novo ai sô!"<<endl;
    }
    
    
    
    return 0;
}
