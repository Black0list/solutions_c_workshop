#include <stdio.h>


int Max( int A , int B){
    if(A > B){
        return A;
    } else {
        return B;
    }
}

int main(){
    int a = 8;
    int b = 12;
    int max;

    max = Max(a,b);
    printf("Max est : %d ", max);
}