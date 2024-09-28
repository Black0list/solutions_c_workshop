#include <stdio.h>


int main(){

    int somme = 0,n;
    int T[100] = {};

    printf("Entrer nombre elements : ");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        T[i] = i;
        somme += T[i];
    }

    printf("\n La Somme des Elements : %d ", somme);
}