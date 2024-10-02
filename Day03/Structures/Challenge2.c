#include <stdio.h>

typedef struct Student{

    char nom[100];
    char prenom[100];
    int note;

}Student;

int main(){

Student s[100];

int nbr;

printf("entrer Nombre etudiants : ");
scanf("%d", &nbr);

for(int i=0;i<nbr;i++){

    printf("============= Etudiant %d : =============\n", i+1);
        printf("Nom : ");
        scanf("%s", &s[i].nom);

        printf("Prenom : ");
        scanf("%s", &s[i].prenom);

        printf("Note : ");
        scanf("%d", &s[i].note);
}

for(int i=0;i<nbr;i++){

    printf("\n============= Etudiant %d : =============\n", i+1);
        printf("Nom : %s", s[i].nom);

        printf("\nPrenom : %s", s[i].prenom);

        printf("\nNote : %d", s[i].note);
}
      
}