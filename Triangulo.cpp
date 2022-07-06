#include<iostream>
using namespace std;

int main(){
    /*ESCRIBA UN PROGRAMA QUE DIBUJE UN TRIANGULO RECTANGULO
    USANDO ALGUN CARACTER.INGRESE POR CONSOLA EL VALOR DE N
    SIENDO N LA BASE Y ALTURA DEL TRIANGULO
    EJEMPLO:N=4
*
**
***
****

*/
int N;
cout<<"Digite le valor de N:"; cin>>N;

for(int i=1;i<=N;i++){
   for(int e=1;e<=i;e++){
    cout<<"*";
   }
cout<<endl;
}

return 0;
}
