#include<iostream>
using namespace std;

int main(){
/** Ingresar el sueldo de un trabajador,categoria,
    condicion estable(E) o no estable(N) y reportar el pago
    total que se le debe hacer de acuerdo a lo siguiente.
    El porcentaje de bonificacion con respecto al sueldo se calcula
    con respecto a la siguiente tabla:
    CATEGORIA   ESTABLE     NO ESTABLE
        A         20%           17%
        B         18%           15%
        C         15%           14%
        D         12%           10%
    El calculo del descuento es con respecto al sueldo+bonificacion
    Estable 6%      No estable 4%
    **/
float sueldo,descuento,sueldof;
char E,N,categoria,condicion;
cout<<"Ingrese el sueldo:"; cin>>sueldo;
cout<<"Ingrese su categoria(A,B,C,D):"; cin>>categoria;

switch(categoria){
case'A':cout<<"Ingrese su condicion:Estable(E),No estable(N):";cin>>condicion;
    if(condicion=='E'){
    sueldof=(((sueldo*20))/100)+sueldo;
    descuento=(sueldof*6)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;
    }
else{
    sueldof=(((sueldo*17))/100)+sueldo;
    descuento=(sueldof*4)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;
    }

case'B':cout<<"Ingrese su condicion,Estable(E),No estable(N):";cin>>condicion;
    if(condicion=='E'){
    sueldof=(((sueldo*18))/100)+sueldo;
    descuento=(sueldof*6)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;
    }
else{
    sueldof=(((sueldo*15))/100)+sueldo;
    descuento=(sueldof*4)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;

    }
case'C':cout<<"Ingrese su condicion,Estable(E),No estable(N):";cin>>condicion;
    if(condicion=='E'){
    sueldof=(((sueldo*15))/100)+sueldo;
    descuento=(sueldof*6)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;
    }
else{
    sueldof=(((sueldo*14))/100)+sueldo;
    descuento=(sueldof*4)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;
    }
case'D':cout<<"Ingrese su condicion,Estable(E),No estable(N):";cin>>condicion;
    if(condicion=='E'){
    sueldof=(((sueldo*12))/100)+sueldo;
    descuento=(sueldof*6)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;
    }
else{
    sueldof=(((sueldo*10))/100)+sueldo;
    descuento=(sueldof*4)/100;
    cout<<"Su sueldo final es de:"<<sueldof-descuento<<endl;break;
    }
default:cout<<"No coincide con ninguna categoria"<<endl;break;
return 0;
}
}
