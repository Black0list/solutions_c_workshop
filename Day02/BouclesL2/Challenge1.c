#include <stdio.h>

int main(){

    int nbr;

    printf("Entrer un Nbr : ");
    scanf("%d",&nbr);

    for(int i=10;i>0;i--){
        printf("\n %d x %d = %d", nbr,i,nbr*i);
    }
}