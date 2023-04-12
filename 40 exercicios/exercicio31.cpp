#include <iostream>

using namespace std;

void verificaIdade(int anos){
    switch(anos/3){
        case 1:
            anos=5;
            cout<<"Infantil A";
            break;
        case 2:
            anos=8;
            cout<<"Infantil B";
            break;
        case 3:
            anos=11;
            cout<<"Juvenil A";
            break;
        case 4:
            anos=14;
            cout<<"Juvenil B";
            break;
        case 5:
            anos>= 18;
            cout<<"Adulto";
            break;
        default:
            anos<5;
            cout<<"Muito nenem ainda";
            break;
        
    }
}

int main()
{
    int idade;
    
    cout<<"---------Aooow seu nadador---------\n\n";
    cout<<"Informe sua idade: ";
    cin>>idade;
    
    verificaIdade(idade);

    return 0;
}
