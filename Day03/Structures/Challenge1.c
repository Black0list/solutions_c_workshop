#include <stdio.h>

typedef struct Personne{

    char nom[100];
    char prenom[100];
    int age;

}Personne;

int main(){

Personne p1;

printf("Nom :");
scanf("%s", &p1.nom);

printf("Prenom :");
scanf("%s", &p1.prenom);

printf("Age :");
scanf("%d", &p1.age);

printf("Nom : %s \nPrenom : %s\n Age : %d", p1.nom,p1.prenom,p1.age);

         
}