/******************************************************************************

                             A série de Fibonacci é formada pela sequência
                             0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que
                             gere a série até que o valor seja maior que 500..

*******************************************************************************/

#include <iostream>
using namespace std;
int termo=0;
int a=1;
int b=1;
int c=0;

void fibonacci(){
    cout<<"Digite a quantidade de termos: ";
    cin>>termo;
    if(termo>=1){
        cout<<a;
    }else if(termo>=2){
        cout<<b<<endl;
    }
    while(c<500){
       for(int i=3;i<=termo;i++){
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }  
    }
}

int main() {
    
    fibonacci();
    
    return 0;
}
