#include<iostream>
using namespace std;

int main(){
/*En un estacionamiento cobran $1.50 por hora o fraccion.
Diseñe un programa que determine cuanto debe pagar un cliente por
el estacionamineto de vehiculo conociendo el tiempo de
estacionamiento en hora y minutos*/

int horas,minutos;
float total;
cout<<"Horas:"; cin>>horas;
cout<<"Minutos:"; cin>>minutos;

if((horas>0)&&(minutos==0)){
    cout<<"El total es:"<<horas*1.50;
   }
else{
    cout<<"El total es:"<<(horas*1.50)+1.50;
}
return 0;
}
