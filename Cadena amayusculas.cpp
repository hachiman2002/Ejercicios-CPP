#include<iostream>
using namespace std;
int main(){
/*
Lea su nombre en minusculas y muestre por consola su nombre
escrito en mayusculas.Use la funcion toupper.
*/
char nombre[30],c;
int i=0;
cout<<"Escriba su nombre: ";

cin.getline(nombre,30);

//  \0 ==false
while(nombre[i]){
    c=toupper(nombre[i]);
    i++;
    cout<<c;
}


return 0;
}
