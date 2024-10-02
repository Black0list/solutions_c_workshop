#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Variables.c"
#include "./Headers/functions.h"

void addContact(int n){
    system("cls");
    printf("\n======================== SAISIE DE DONNEES ======================\n");
    for(int i=nbrContact;i<n+nbrContact;i++){
        printf("\n======================== Contacte N %d ======================\n", i+1);
        printf("entrer Nom :");
        scanf(" %[^\n]", &C[i].Nom);

        printf("entrer Numero :");
        scanf(" %[^\n]", &C[i].Numero);

        printf("entrer Mail :");
        scanf(" %[^\n]", &C[i].Mail);
    }
    nbrContact += n;
}

int SearchContact(char Search[]){
        for(int i=0;i<nbrContact;i++){
            if(strcasecmp(C[i].Nom, Search) == 0){
                return i;
                break;
            }
        }
    return -1;
}

void DeleteContact(int index){
    printf("\n======================== SUPPRESSION DE DONNEES ======================\n");
        if(index >= 0 && index <= nbrContact){
            for(int i=index;i<nbrContact - 1;i++){
                strcpy(C[i].Nom, C[i+1].Nom);
                strcpy(C[i].Numero, C[i+1].Numero);
                strcpy(C[i].Mail, C[i+1].Mail);
            }
            nbrContact--;
            printf("Contacte d'indice %d a ete Supprimmer.", index);
        } else {
            printf("Contacte n'existe pas");
        }
}

void ModContact(int index){
        printf("\n======================== MODIFICATION DE DONNEES ======================\n");
        char newName[MAX];
        char newNum[MAX];
        char newMail[MAX];
        int choix;
        if(index >= 0 && index <= nbrContact){
        printf("\n====================== Menu de Modification: ======================\n");
        printf("1. Modifier le Nom de Conatcte\n");
        printf("2. Modifier le Numero de Contacte\n");
        printf("3. Modifier le Mail de Contacte\n");
        printf("4. Modifier Tous les Infos du Contacte\n");
        printf("Choix ? :");
        scanf("%d", &choix);
        system("cls");
            switch(choix){
                case 1: {
                        printf("\nentrer le Nouveau Nom :");
                        scanf(" %[^\n]", &newName);
                        strcpy(C[index].Nom, newName);
                        printf("\nNom de Contacte d'indice %d a ete Modifier.", index);
                }
                break;
                case 2: {
                        printf("\nentrer le Nouveau Numero:");
                        scanf(" %[^\n]", &newNum);
                        strcpy(C[index].Numero, newNum);
                        printf("\nNumro telephone de Contacte d'indice %d a ete Modifier.", index);
                }
                break;
                case 3: {
                        printf("\nentrer le Nouveau Mail :");
                        scanf(" %[^\n]", &newMail);
                        strcpy(C[index].Mail, newMail);
                        printf("\nMail Contacte d'indice %d a ete Modifier.", index);
                }
                break;

                case 4: {

                        printf("\nentrer le Nouveau Nom :");
                        scanf(" %[^\n]", &newName);
                        strcpy(C[index].Nom, newName);

                        printf("\nentrer le Nouveau Numero:");
                        scanf(" %[^\n]", &newNum);
                        strcpy(C[index].Numero, newNum);

                        printf("\nentrer le Nouveau Mail :");
                        scanf(" %[^\n]", &newMail);
                        strcpy(C[index].Mail, newMail);

                        printf("\nContacte d'indice %d a ete Modifier Totalement.", index);
                
                }

                default: printf("\nChoix Invalide");
                break;

            }
            
        } else {
            printf("Contacte n'existe pas");
        }
}

void nbrTotaleContacte(){
        if(!nbrContact){
            printf("Data est Vide");
        } else {
            printf("Nombre Totale des Contactes : %d", nbrContact);
        }
}

void DisplayAll(Contact CO[]){
    system("cls");
    printf("\n======================== LES CONTACTES ======================\n");
    for(int i=0;i<nbrContact;i++){
        printf("\n======================== Contacte N %d ======================\n", i+1);
        printf("entrer Nom : %s", CO[i].Nom);
        printf("\nentrer Numero : %s", CO[i].Numero);
        printf("\nentrer Mail : %s", CO[i].Mail);
    }
}

void TriAlphaBulle(Contact CO[]){
    for(int i=0;i<nbrContact  - 1;i++){
        for(int j=0;j<nbrContact -i -1;j++){
            if(strcasecmp(CO[j].Nom, CO[j+1].Nom) > 0){
                Contact T;
                T = CO[j];
                CO[j] = CO[j+1];
                CO[j+1] = T;
            }          
        }
    }
    DisplayAll(CO);
}

// void TriAlphaSelection(Contact CO[]){
//     for(int i=0;i<nbrContact;i++){
//         for(int j=i+1;j<nbrContact;j++){
//             if(strcasecmp(CO[i].Nom, CO[j].Nom) < 0){
//                 Contact T;
//                 T = CO[i];
//                 CO[i] = CO[j];
//                 CO[j] = T;
//             }          
//         }
//     }
//     DisplayAll(CO);
// }

// void TriAlphaInsertion(Contact CO[]){
//     for(int i=0;i<nbrContact  - 1;i++){
//         for(int j=0;j<nbrContact -i -1;j++){
//             if(strcmp(CO[j].Nom, CO[j+1].Nom) > 0){
//                 Contact T;
//                 T = CO[j];
//                 CO[j] = CO[j+1];
//                 CO[j+1] = T;
//             }          
//         }
//     }
//     DisplayAll(CO);
// }