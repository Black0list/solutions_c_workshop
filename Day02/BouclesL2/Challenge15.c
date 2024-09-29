#include <stdio.h>

int main(){

    int i,n,facto=1;

    printf("entrer un Nombre :");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        facto = facto * i;
    }

    printf("%d! = %d", n,facto);
}