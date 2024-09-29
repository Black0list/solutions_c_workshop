#include <stdio.h>

int main(){

    int nbr,somme = 0;

    printf("entrer Un Nombre :");
    scanf("%d", &nbr);

    for(int i=1;i<11;i++){
        printf("%d x %d = %d\n", nbr,i,nbr*i);
        somme += nbr * i;
    }

    printf("Somme des Produits est : %d", somme);

}