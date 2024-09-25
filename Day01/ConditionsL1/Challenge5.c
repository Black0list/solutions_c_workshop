#include <stdbool.h>
#include <stdio.h>

int main() {
    
    int annee,choix;
    
    printf("\nentrer une annee :");
    scanf("%d",&annee);
    
    
    printf("Voici le Menu de Conversion :");
    printf("\n=============================");
    printf("\n1 - Coversion en mois");
    printf("\n2 - Coversion en jours");
    printf("\n3 - Coversion en heures");
    printf("\n4 - Coversion en minutes");
    printf("\n5 - Coversion en secondes");
    printf("\n=============================");
    printf("\nentrer une Choix :");
    scanf("%d",&choix);
    
    switch(choix){
        case 1: printf("Conversion en Mois : %d", annee*12);
        break;
        case 2: printf("Conversion en Jours : %d", annee*365);
        break;
        case 3: printf("Conversion en Heures : %d", annee*365*24);
        break;
        case 4: printf("Conversion en Minutes : %d", annee*365*24*60);
        break;
        case 5: printf("Conversion en Seconds : %d", annee*365*24*3600);
        break;
    }

    return 0;
}