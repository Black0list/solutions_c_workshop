#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age;

    char nom[15],prenom[15],sexe[15],mail[50];

    printf("Nom : ");
    scanf("%s", &nom);

    printf("Prenom :");
    scanf("%s", &prenom);

    printf("Age : ");
    scanf("%d", &age);

    printf("Sexe: ");
    scanf("%s", &sexe);

    printf("mail :");
    scanf("%s", &mail);

    printf("\nNom: %s\n Prenom: %s\nAge: %d\nSexe: %s\nmail: %s", &nom,&prenom,&age,&sexe,&mail);



    return 0;
}
