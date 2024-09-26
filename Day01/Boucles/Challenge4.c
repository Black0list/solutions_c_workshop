#include <stdio.h>

int main(){

    int i,n,j=1;

    printf("entrer un Nombre :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("%d, ", j);
        j+=2;
    }
}