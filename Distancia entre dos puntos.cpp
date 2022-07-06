#include<iostream>
#include<cmath>
using namespace std;

int main(){
int x1,y1,x2,y2;
double distancia;
/*CALCULAR LA DISTANCIA ENTRE DOS PUNTOS (P1 Y P2)
LOCALIZADOS EN UN PLANO XY
FORMULA:raiz(x2-x1)^2+(y2-y1)^2
	*/
 cout<<"\tCALCULADOR DE DISTANCIAS"<<endl;
 cout<<"digite x1:"; cin>>x1;
 cout<<"digite y1:"; cin>>y1;
 cout<<"digite x2:"; cin>>x2;
 cout<<"digite y2:"; cin>>y2;

 distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

 cout<<"la distancia entre el P1 Y P2 es:"<<distancia<<endl;



return 0;
}


