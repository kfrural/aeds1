/******************************************************************************

                              Numa eleição existem três candidatos. Faça um 
                              programa que peça o número total de eleitores. 
                              Peça para cada eleitor votar e ao final mostrar o
                              número de votos de cada candidato.
*******************************************************************************/

#include <iostream>
using namespace std;
int eleitor=0;
int voto=0;
int cont1=0;
int cont2=0;
int cont3=0;

void eleitores(){
    cout<<"Numero total de eleitores: ";
    cin>> eleitor;
    for(int i=1;i<=eleitor;i++){
        cout<<"\t--Vote--\n Candidato 1 -1\n Candidato 2 -2\n Cnadidato 3 -3\n Seu voto: ";
        cin>>voto;
        if(voto==1){
            cont1++;
        }else if(voto==2){
            cont2++;
        }else if(voto==3){
            cont3++;
        }else{
            cout<<"Valor invalido"<<endl;
        }
    }
    cout<<"\n\nCandidato 1: "<<cont1<<endl;
    cout<<"Candidato 2: "<<cont2<<endl;
    cout<<"Candidato 3: "<<cont3<<endl;
}

int main() {
    
    eleitores();
   return 0;
}
