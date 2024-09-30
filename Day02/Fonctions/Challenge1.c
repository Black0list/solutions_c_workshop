#include <stdio.h>


int Somme( int A , int B){
    A = A + B;
    return A;
}

int main(){

    int a = 8;
    int b = 12;
    int somme;

    somme = Somme(a,b);
    printf("Somme est : %d ",somme);
}