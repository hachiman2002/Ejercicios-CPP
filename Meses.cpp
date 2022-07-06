#include<iostream>
using namespace std;

int main(){
int mes;
cout<<"mes:"; cin>>mes;

switch(mes){

case 1: cout<<mes<<"=Enero"; break;
case 2: cout<<mes<<"=Febrero"; break;
case 3: cout<<mes<<"=Marzo"; break;
case 4: cout<<mes<<"=Abril"; break;
case 5: cout<<mes<<"=Mayo"; break;
case 6: cout<<mes<<"=Junio"; break;
case 7: cout<<mes<<"=Julio"; break;
case 8: cout<<mes<<"=agosto"; break;
case 9: cout<<mes<<"=septiembre"; break;
case 10: cout<<mes<<"=Octubre"; break;
case 11: cout<<mes<<"=Noviembre"; break;
case 12: cout<<mes<<"=Diciembre"; break;
default:cout<<"No coincide con ningun mes";break;

}

return 0;
}
