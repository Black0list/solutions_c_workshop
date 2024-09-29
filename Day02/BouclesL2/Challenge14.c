#include <stdio.h>

int main(){

    int choix;

        printf("==========Les Jours de la Semaine==========");
        printf("1 - Lundi\n");
        printf("2 - Mardi\n");
        printf("3 - Mercredi\n");
        printf("4 - Jeudi\n");
        printf("5 - Vendredi\n");
        printf("6 - Samedi\n");
        printf("7 - Dimanche\n");
        printf("===========================================\n");
        printf("entrer Votre Jour : ");
        scanf("%d", &choix);

    for ( ;choix >= 1 && choix <= 7; choix++)
    {
        switch (choix)
        {
        case 1:  printf("Lundi ");
            break;
        case 2:  printf("Mardi ");
            break;
        case 3:  printf("Mercredi ");
            break;
        case 4:  printf("Jeudi ");
            break;
        case 5:  printf("Vendredi ");
            break;
        case 6:  printf("Samedi ");
            break;
        case 7:  printf("Dimanche ");
            break;

        default: 
            break;
        }
    }


}