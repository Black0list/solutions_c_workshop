#include <stdio.h>

int main() {
    float revenu, deduct = 0, impots = 0;
    int Status;

    
    printf("Entrer votre revenu annuel en euros : ");
    scanf("%f", &revenu);
    printf("Entrer votre statut fiscal (1 pour celibataire, 2 pour marie, 3 pour chef de famille) : ");
    scanf("%d", &Status);


    switch (Status) {
        case 1: 
            deduct = 1000;
            break;
        case 2: 
            deduct = 2000;
            break;
        case 3: 
            deduct = 3000;
            break;
        default:
            printf("Statut fiscal invalide.\n");
            return 1; 
    }


    revenu -= deduct;


    if (revenu <= 20000) {
        impots = revenu * 0.05;
    } else if (revenu <= 50000) {
        impots = 20000 * 0.05 + (revenu - 20000) * 0.10;
    } else {
        impots = 20000 * 0.05 + 30000 * 0.10 + (revenu - 50000) * 0.20;
    }

    printf("Le montant des impots a payer est : %.2f €\n", impots);

    return 0;
}