#include <iostream>

int idade=0;
float peso=0;
float altura=0;
float motor=0;
float eixo=0;
float peso2=0;

int main(){

    std::cout<<"Olá mundo" << std::endl;
    
    
     std:: cout<<"Qual sua idade: " << std:: endl;
    std:: cin>> idade;
    std:: cout<<"Qual seu peso: " << std:: endl;
    std:: cin>> peso;
    std:: cout<< "Qual sua altura: " << std:: endl;
    std:: cin>> altura;
    std:: cout<< "Idade: "<<idade<< ", Altura: "<< altura<< ", Peso: "<<peso << std:: endl;
    
    
    std:: cout<<"Qual o motor: "<<std::endl;
    std:: cin>> motor;
    std:: cout<<"Qual o eixo: " << std:: endl;
    std:: cin>> eixo;
    std:: cout<<"Qual o peso: " << std:: endl;
    std:: cout<< "Motor: "<< motor <<"\n eixos: "<< eixo << "\n Peso: "<< peso2 << std:: endl;
    
    
   
    return 0;
}
