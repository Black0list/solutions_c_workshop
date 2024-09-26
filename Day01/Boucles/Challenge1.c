#include <stdio.h>

int main(){

    int i,n;

    printf("entrer un Nbr :");
    scanf("%d", &n);

    for(i=1;i<=10;i++){

        printf("\n %d x %d = %d", n,i,n*i);
    }
}