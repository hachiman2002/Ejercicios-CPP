#include<iostream>
using namespace std;

int main(){
/*ESCRIBA UNPROHRAMA QUE DIGA SI UN NUMERO ENTERO INGRESADO
ES POSITIVO, NEGATIVO O NEUTRO*/
 int numero;
 cout<<"Digite un numero:"; cin>> numero;

if(numero>0){
    cout<<numero<<" Es positivo"<<endl;
}
else if(numero<0){
    cout<<numero<<" Es negativo"<<endl;
}
else{
    cout<<numero<<" Es neutro"<<endl;
}

return 0;
}
