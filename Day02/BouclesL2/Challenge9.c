#include <stdio.h>

int main(){

    int base, exposant, resultat = 1 ;

    printf("base : ");
    scanf("%d", &base);

    printf("exposant :");
    scanf("%d", &exposant);

    while(exposant < 0){
        printf("entrer un exposant positif :");
        scanf("%d", &exposant);
    }


    while( exposant > 0){
        resultat *= base;
        exposant--;
    }

    printf("resultat est : %d", resultat);
}