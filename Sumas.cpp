#include<iostream>
using namespace std;

int main(){
/*ESCRIBA UN PROGRAMA QUE LEA VARIOS VALORES HASTA
INGRESAR UN VALOR NEGATIVO.LUEGO MUESTRE LA SUMA DE ESTOS
*/
float i=0,suma=0,numeros;

do{
 cout<<"Digite numeros:"; cin>>numeros;

 if(numeros>=0){
        suma=suma+numeros;
 }
}while(numeros>0);

cout<<"La suma es:"<<suma<<endl;
return 0;
}
