#include<iostream>
#define MAX 5
using namespace std;

int main(){
/*
Lea 2 arreglos unidimensionales con valores reales
y usando otro arreglo calcule la multiplicacion de los valores
de ambos arreglos.
*/

int arreglo1[MAX];
int arreglo2[MAX];
cout<<"\tARREGLO 1"<<endl;
for(int i=0;i<MAX;i++){
    cout<<"indice"<<i<<":"; cin>>arreglo1[i];
}
cout<<endl;
cout<<"\tARREGLO 2"<<endl;
for(int i=0;i<MAX;i++){
        cout<<"indice"<<i<<":"; cin>>arreglo2[i];
}
cout<<"\tARREGLO RESULTADO"<<endl;
for(int i=0;i<MAX;i++){
    cout<<arreglo1[i]*arreglo2[i]<<" "<<endl;
}


return 0;
}
