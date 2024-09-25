#include <stdio.h>
#include <stdlib.h>



int main(){

    int Score,Ancien;
    float Recompense;

    printf("entrer score (0 - 100):");
    scanf("%d", &Score);

    printf("entrer Anciennete (annees):");
    scanf("%d", &Ancien);

    printf("entrer Recompenses (0 pour aucune, 1 pour une, 2 pour deux ou plus):");
    scanf("%f", &Recompense);

    if(Score >= 90 && Ancien >= 5){
        printf("Excellente");
    } else if(Score >= 75 && Ancien >= 3){
        printf("Bonne");
    } else if(Score >= 50 && Ancien < 3){
        printf("Satisfaisante");
    } else if(Score < 50) {
        printf("Insuffisante");
    } 

    if(Recompense == 1) {
        printf("Recompense = %.2f", 0.1*Recompense);
    }else if(Recompense >= 2) {
        printf("Recompense = %.2f", 0.2*Recompense);
    }


}