#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.c"


int main()
{

    int choix;

    do
    {
        printf("============================================");
        printf("\nMenu: \n");
        printf("1. Ajouter des livres\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Mettre a jour la quantite d'un livre\n");
        printf("5. Rechercher et supprimer un livre\n");
        printf("6. Afficher nombre Totale des livres\n");
        printf("7. Quitter\n");
        printf("Choix ? : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1: Ajout();
        break;

        case 2: Afficher();
        break;

        case 3: Rechercher();
        break;

        case 4: Modifier();
        break;

        case 5: Supprimer();
        break;

        case 6: Totale();
        break;

        case 7:
        {
            system("cls");
            return 1;
        }
        break;

        default:
            system("cls");
            printf(" Choix Invalide");
            break;
        }

    } while (choix != 7);

    return 0;
}