#include<iostream>
using namespace std;

int main(){
    /*MUESTRE EL RESULTADO DE LA SIGUIENTE SUCECION:
    1/2,1/3,1/4+...N*/
float N,inicio,resultado=0;

cout<<"Digite un numero:"; cin>>N;

inicio=1.1;

do{
inicio=inicio+0.1;
cout<<inicio<<endl;
resultado=resultado+inicio;
}while(inicio<=N);


cout<<"SUMA="<<resultado<<endl;

return 0;
}
