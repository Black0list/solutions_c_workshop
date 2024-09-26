#include <stdio.h>

int main(){

    int i,n,s=0;

    printf("entrer un Nombre :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        s += i;
    }

    printf("Somme de %d  est : %d", n,s);
}