#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int main()
{

    char titre[MAX][100];
    char auteur[MAX][100];
    float prix[MAX];
    int quantite[MAX];

    int nbrTotale = 0, choix;

    do
    {

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
        case 1:
        {
            system("cls");
            int ajout;
            printf("antrer Nombre de livres a ajouter : ");
            scanf("%d", &ajout);

            printf("====================== Ajout =====================\n");

            for (int i = nbrTotale; i < nbrTotale + ajout; i++)
            {
                printf("Titre : ");
                scanf(" %[^\n]", titre[i]);
                printf("Auteur : ");
                scanf(" %[^\n]", auteur[i]);
                printf("Prix : ");
                scanf("%f", &prix[i]);
                printf("Quantite : ");
                scanf("%d", &quantite[i]);
                printf("\n");
            }
            nbrTotale += ajout;
        }
        break;

        case 2:
        {
            system("cls");
            if (nbrTotale == 0)
            {
                printf("pas de livres dans Stock");
            }
            else
            {
                printf("===================== Afficher Le Stock ======================\n");
                for (int i = 0; i < nbrTotale; i++)
                {
                    printf("Titre : %s\n", titre[i]);
                    printf("Auteur : %s\n", auteur[i]);
                    printf("Prix : %.2f\n", prix[i]);
                    printf("Quantite : %d\n", quantite[i]);
                    printf("\n");
                }
            }
        }
        break;

        case 3:
        {
            system("cls");
            char chercher[100];
            int found = 0;
            printf("===================== Chercher Un Livre ======================\n");
            printf("Titre : ");
            scanf(" %[^\n]", chercher);

            for (int i = 0; i < nbrTotale; i++)
            {
                if (strcmp(titre[i], chercher) == 0)
                {
                    system("cls");
                    printf("---------- Livre est Trouve ----------\n");
                    printf("Titre : %s\n", titre[i]);
                    printf("Auteur : %s\n", auteur[i]);
                    printf("Prix : %.2f\n", prix[i]);
                    printf("Quantite : %d\n", quantite[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Livre pas Trouve");
        }
        break;

        case 4:
        {
            system("cls");
            char chercher[100];
            int found = 0;
            printf("===================== Chercher Un Livre ======================\n");
            printf("Titre : ");
            scanf(" %[^\n]", chercher);

            for (int i = 0; i < nbrTotale; i++)
            {
                if (strcmp(titre[i], chercher) == 0)
                {
                    system("cls");
                    printf("---------- Livre est Trouve ----------\n");
                    printf("Titre : %s\n", titre[i]);
                    printf("Auteur : %s\n", auteur[i]);
                    printf("Prix : %.2f\n", prix[i]);
                    printf("Quantite : %d\n", quantite[i]);
                    found = 1;
                    printf("===================== Modification ======================\n");
                    int mod;
                    printf("Donne Moi la Nouvelle Quantite :");
                    scanf("%d", &mod);

                    quantite[i] = mod;
                }
            }

            if (!found)
                printf("Livre pas Trouve");
        }
        break;

        case 5:
        {
            system("cls");
            char chercher[100];
            int found = 0;
            printf("===================== Suppression ======================\n");
            printf("Titre : ");
            scanf(" %[^\n]", chercher);

            for (int i = 0; i < nbrTotale; i++)
            {
                if (strcmp(titre[i], chercher) == 0)
                {
                    found = 1;

                    for (int j = 0; j < nbrTotale - 1; j++)
                    {
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        prix[j] = prix[j + 1];
                        quantite[j] = quantite[j + 1];
                        printf("Livre a ete Supprimer");
                    }
                }
            }
            nbrTotale--;

            if (!found)
                printf("Livre pas Trouve");
        }
        break;

        case 6:
        {
            system("cls");
            printf("Le Nombre Totale des Livres est : %d", nbrTotale);
        }
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