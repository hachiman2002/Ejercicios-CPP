#include<iostream>
using namespace std;

int main(){
/*ESCRIBA UNPROHRAMA QUE DIGA SI UN NUMERO ENTERO INGRESADO
ES PAR O IMPAR*/
 int numero;
 cout<<"Digite un numero:"; cin>> numero;

 if(numero%2==0){
    cout<<"El numero es par"<<endl;
 }
else{
    cout<<"El numero que ha digitado es impar "<<endl;
}


return 0;
}
