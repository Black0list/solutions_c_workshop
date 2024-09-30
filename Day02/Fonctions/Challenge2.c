#include <stdio.h>


int Produit( int A , int B){
    A = A * B;
    return A;
}

int main(){

    int a = 8;
    int b = 12;
    int produit;

    produit = Produit(a,b);
    printf("Produit est : %d ", produit);
}