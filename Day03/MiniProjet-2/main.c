#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "functions.c"

int main()
{

    int choix;

    do
    {
        Menu :
        printf("\n===========================================================================================\n");
        printf("\n$$$$$$$\\  $$\\            $$$$$$\\  $$\\       $$\\       $$\\             $$\\     \n");  
        printf("$$  __$$\\ $$ |          $$  __$$\\ $$ |      $$ |      \\__|            $$ |    \n");  
        printf("$$ |  $$ |$$ | $$$$$$\\  $$ /  \\__|$$ |  $$\\ $$ |      $$\\  $$$$$$$\\ $$$$$$\\   \n");  
        printf("$$$$$$$\\ |$$ | \\____$$\\ $$ |      $$ | $$  |$$ |      $$ |$$  _____|\\_$$  _|  \n");  
        printf("$$  __$$\\ $$ | $$$$$$$ |$$ |      $$$$$$  / $$ |      $$ |\\$$$$$$\\    $$ |    \n");  
        printf("$$ |  $$ |$$ |$$  __$$ |$$ |  $$\\ $$  _$$<  $$ |      $$ | \\____$$\\   $$ |$$\\  \n");  
        printf("$$$$$$$  |$$ |\\$$$$$$$ |\\$$$$$$  |$$ | \\$$\\ $$$$$$$$\\ $$ |$$$$$$$  |  \\$$$$  |  \n");  
        printf("\\_______/ \\__| \\_______| \\______/ \\__|  \\__|\\________|\\__|\\_______/    \\____/ \n"); 
        printf("\n===========================================================================================\n");
        printf("1. Ajouter Un Contact\n");
        printf("2. Rechercher Un Contact\n");
        printf("3. Supprimer Un Contact\n");
        printf("4. Modifier Un Contacte\n");
        printf("5. Afficher Nombre Totale les Contacts\n");
        printf("6. Afficher tous les Contacts\n");
        printf("7. Bubble Sort\n");
        // printf("8. Selection Sort\n");
        // printf("9. Insertion Sort\n");
        printf("8. Quitter\n");
        printf("Choix ? : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1: {
                int n;
                printf("entrer Nombre des Contactes a ajouter :");
                scanf("%d",&n);
                addContact(n);
        }
        break;

        case 2: {
                
                if(!nbrContact){
                    system("cls");
                    printf("No Data");
                    goto Menu;
                } 
                char cherche[MAX];
                printf("entrer Nom Contact a Chercher :");
                scanf(" %[^\n]", cherche);

                int index = SearchContact(cherche);

                if(index >= 0 && index <= nbrContact){
                    system("cls");
                    printf("\n================== Contact existe ==================\n");
                    printf("Nom de Contacte : %s", C[index].Nom);
                    printf("\nNumero de Contacte : %s", C[index].Numero);
                    printf("\nMail du Contacte : %s", C[index].Mail);

                } else {
                    printf("Contacte n'existe pas");
                }
        }
        break;

        case 3: {
                if(!nbrContact){
                    system("cls");
                    printf("Data est Vide");
                    goto Menu;
                } 
                system("cls");
                char delete[MAX];
                printf("entrer Nom Contact a Supprimer :");
                scanf(" %[^\n]", delete);

                int index = SearchContact(delete);
                DeleteContact(index);

        } 
        break;

        case 4: {
                if(!nbrContact){
                    system("cls");
                    printf("Data est Vide");
                    goto Menu;
                } 
                char mod[MAX];
                printf("entrer Nom Contact a Modifier :");
                scanf(" %[^\n]", mod);

                int index = SearchContact(mod);
                ModContact(index);

        }
        break;

        case 5: {
                system("cls");
                nbrTotaleContacte();
        }
        break;

        case 6: {
                if(!nbrContact){
                    system("cls");
                    printf("Data est Vide");
                    goto Menu;
                } 
                system("cls");
                DisplayAll(C);
        }
        break;

        case 7: {
                if(!nbrContact){
                    system("cls");
                    printf("Data est Vide");
                    goto Menu;
                } 
                system("cls");
                TriAlphaBulle(C);
        }
        break;

        // case 8: {
        //         if(!nbrContact){
        //             system("cls");
        //             printf("Data est Vide");
        //             goto Menu;
        //         } 
        //         system("cls");
        //         TriAlphaSelection(C);
        // }
        // break;


        case 8:
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

    } while (choix != 8);

    return 0;
}