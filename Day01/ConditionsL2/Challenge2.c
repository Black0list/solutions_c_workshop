#include <stdio.h>

int main() {
    int age, voiture, nbr_accidents;
    float const prime_de_base = 3000;

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

    switch(voiture){

        case 1: prime *=2;
        break;

        case 2: prime *=1.2;
        break;

        case 3: prime *=1.1;
        break;

        default: printf("Type de voiture invalide.\n");
        break;
    }

    if (nbr_accidents > 1) {
        prime += prime * 0.3; 
    }


    printf("La prime d'assurance est : %.2f\n", prime);

    return 0;
}
