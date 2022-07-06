#include<iostream>
#include<cmath>
using namespace std;

int main(){
    //volumen de una esfera
const float pi=3.1416;
float radio,volumen;

cout<<"Indique el radio de la esfera:"; cin>>radio;

volumen =4*pi*pow(radio,3)/3;
cout<<"El volumen de la esfera es:"<<volumen<<endl;
return 0;
}
