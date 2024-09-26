#include <stdio.h>

int main(){

    int i,n,j=0;

    printf("entrer un Nombre :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        j +=2;
        printf("%d, ", j);
    }
}