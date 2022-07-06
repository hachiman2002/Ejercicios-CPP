#include<iostream>
using namespace std;

int main(){
//converir grados celcius a kelvin y fahrenheit
const float kelvin=273.15;
float fahrenheit,celsius;

cout<<"Indique los grados celsius:"; cin>>celsius;

cout<<celsius<<" grados celsius a kelvin son:"<<celsius+kelvin<<" grados kelvin"<<endl;

fahrenheit=(celsius*9/5)+32;
cout<<celsius<<" grados celsius a fahrenheit son:"<<fahrenheit<<" grados fahrenheit"<<endl;



return 0;
}
