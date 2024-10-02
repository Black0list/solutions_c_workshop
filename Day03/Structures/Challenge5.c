#include <stdio.h>


typedef struct Livre{

    char titre[10];
    char auteur[10];
    int annee;

}Livre;

void Mod(Livre *l){

    printf("entrer Titre :");
    scanf("%s",&l->titre);

    printf("entrer Auteur :");
    scanf("%s",&l->auteur);


    printf("entrer anne :");
    scanf("%d",&l->annee);

    printf("==========================================================\n");
}

int main(){

Livre l1 = { "Hello", "Bellingham", 12};

Mod(&l1);

printf("new Value of titre : %s\nnew Value of auteur : %s\nnew Value of year : %d", l1.titre,l1.auteur,l1.annee);

}