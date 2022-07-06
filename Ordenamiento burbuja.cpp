#include<iostream>
using namespace std;

int main(){
/*
Ordenamirnto burbuja

5  3  1  6  4  2  7->despues del primer paso
3  1  5  4  2  6  7->despues del segundo paso
1  3  4  2  5  6  7->despues del tercer paso
1  3  2  4  5  6  7->despues del cuarto paso
1  2  3  4  5  6  7->despues del quinto paso
*/
int A[]={6,5,9,3,0,1,8,7,4,2};
for (int i=0;i<10;i++){
    for(int e=0;e<9;e++){
            if(A[e]>A[e+1]){
                int aux = A[e];
                A[e]=A[e+1];
                A[e+1]=aux;
            }

    }

}
for(int e=0;e<10 ;e++){
            cout<<A[e]<<" ";
            }
return 0;
}
