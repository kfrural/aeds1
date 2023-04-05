#include <iostream>
int idade=0;
int peso=0;
float altura=0;

int main()
{
    std:: cout<<"Qual sua idade: " << std:: endl;
    std:: cin>> idade;
    std:: cout<<"Qual seu peso: " << std:: endl;
    std:: cin>> peso;
    std:: cout<< "Qual sua altura: " << std:: endl;
    std:: cin>> altura;
    std:: cout<< "Idade: "<<idade<< ", Altura: "<< altura<< ", Peso: "<<peso << std:: endl;

    return 0;
}
