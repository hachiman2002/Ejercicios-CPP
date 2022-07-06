#include<iostream>
using namespace std;
int main(){
/*Escriba un programa que calcule la cantidad de digitos
que tiene un numero*/
int contador=0,numero;

cout<<"Digite un numero:"; cin>>numero;
do{
    contador++;
   numero=numero/10;
}while(numero!=0);
cout<<"La cantidad de digitos son:"<<contador<<endl;

return 0;
}
