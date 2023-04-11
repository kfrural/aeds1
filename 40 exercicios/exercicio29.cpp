#include<iostream>

using namespace std;

int a=0;
int b=0;
int c=0;

int main(){
    
    cout<<"Informe o primeiro valor: ";
    cin>>a;
    cout<<"Informe o segundo valor: ";
    cin>>b;
    cout<<"Informe o terceiro valor: ";
    cin>>c;
    
    if(a>b and a>c){
        cout<<"O maior dentre os tres e: "<<a<<endl;
    }
    else if(b>a and b>c){
        cout<<"O maior dentre os tres e: "<<b<<endl;
    }else{
        cout<<"O maior dentre os tres e: "<<c<<endl;
    }
    
    return 0;
}
