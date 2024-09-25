#include <stdio.h>

int main() {
    int age, voiture, nbr_accidents;
    float prime_de_base;

    printf("Entrer montant initial de la prime : ");
    scanf("%f", &prime_de_base);

    printf("age du conducteur (en annees) : ");
    scanf("%d", &age);

    printf("Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &voiture);

    printf("Nombre daccidents au cours des 5 dernieres annees : ");
    scanf("%d", &nbr_accidents);

    float prime = prime_de_base; 
    if (age < 25) {
        prime *= 1.5;
    } else if (age > 65) {
        prime *= 1.2;
    }

    if (voiture == 1) {
        prime *= 2;
    } else if (voiture == 2) {
        prime *= 1.2;
    } else if (voiture == 3) {
        prime *= 1.1;
    } else {
        printf("Type de voiture invalide.\n");
        return 1;
    }


    if (nbr_accidents > 1) {
        prime *= 1.3; // Ajout de 30%
    }


    printf("La prime d'assurance est : %.2f\n", prime);

    return 0;
}
