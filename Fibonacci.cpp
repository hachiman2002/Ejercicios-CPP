#include<iostream>
using namespace std;

int main(){
/*Los terminos de la sucesion de Fibonacci se calculan asi:
a1=0 a2=1 an=an-1+an-2.
Diseñar un programa que calcule en n-esimo termino de
la susesion de Fibonacci.
              an
           a2
        a1
valores 0  1  1  2  3  5  8  13  21  34  55
termino 0  1  2  3  4  5  6  7   8   9   10
*/
int N,a1=0,a2=1,an;
cout<<"Ingrese N:"; cin>>N;
if(N<2){
cout<<"El enesimo termino es:"<<N;
}
else{
  for(int i=2;i<=N;i++){
    an=a1+a2;
    a1=a2;
    a2=an;
  }
}
cout<<"El enesimo termino es:"<<an;

return 0;
}
