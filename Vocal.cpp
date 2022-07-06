#include<iostream>
using namespace std;

int main(){
    //identificar si una letraes una vocal
char letra;
cout<<"Digite una letra:"; cin>>letra;

switch(letra){
case'a':cout<<letra<<" Es una vocal";break;
case'e':cout<<letra<<" Es una vocal";break;
case'i':cout<<letra<<" Es una vocal";break;
case'o':cout<<letra<<" Es una vocal";break;
case'u':cout<<letra<<" Es una vocal";break;
case'A':cout<<letra<<" Es una vocal";break;
case'E':cout<<letra<<" Es una vocal";break;
case'I':cout<<letra<<" Es una vocal";break;
case'O':cout<<letra<<" Es una vocal";break;
case'U':cout<<letra<<" Es una vocal";break;
default: cout<<letra<<" No es una vocal";break;
}



return 0;
}
