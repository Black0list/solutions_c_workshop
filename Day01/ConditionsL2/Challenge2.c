#include <stdio.h>

int main() {
    int age, voiture, nbr_accidents;
    float prime_de_base;

    printf("Entrer montant initial de la prime : ");
    scanf("%f", &prime_de_base);

    printf("Âge du conducteur (en années) : ");
    scanf("%d", &age);

    printf("Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &voiture);

    printf("Nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &nbr_accidents);

    float prime = prime_de_base; // Initialiser la prime ajustée à la prime de base

    // Calcul de la prime selon l'âge
    if (age < 25) {
        prime *= 1.5;
    } else if (age > 65) {
        prime *= 1.2;
    }
    // Pour l'âge de 25 à 65, la prime reste inchangée.

    // Ajustement de la prime selon le type de voiture
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

    // Ajustement de la prime selon le nombre d'accidents
    if (nbr_accidents > 1) {
        prime *= 1.3; // Ajout de 30%
    }

    // Affichage de la prime finale
    printf("La prime d'assurance est : %.2f\n", prime);

    return 0;
}
