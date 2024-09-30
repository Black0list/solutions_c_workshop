#include <stdio.h>


int Min( int A , int B){
    if(A < B){
        return A;
    } else {
        return B;
    }
}

int main(){
    int a = 8;
    int b = 12;
    int min;

    min = Min(a,b);
    printf("Min est : %d ", min);
}