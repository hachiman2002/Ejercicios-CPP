#include<iostream>
using namespace std;

int main(){
/*
Lea un arreglo e indique cual es el menor elemento
y en que indice se encuentra
5  8  6  3  1  0  9

*/
int arreglo1[10],menor;

for(int i=0;i<10;i++){
    cout<<"Ingrese el valor del indice"<<i<<" :";
     cin>>arreglo1[i];
}
menor=0;
for(int i=1;i<10;i++){
    if(arreglo1[i]<arreglo1[menor]){
        menor=i;
    }
}
cout<<"El menor elemento es:"<<arreglo1[menor]<<" con el indice "<<menor;
return 0;
}
