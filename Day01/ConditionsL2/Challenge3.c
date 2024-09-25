#include <stdio.h>
#include <stdlib.h>

int main() {
    int nbr_totale_j_accordee, nbr_j_utilisee, status, jours_restant;
    printf("Nombre total de jours de congés accordés :");
    scanf("%d", &nbr_totale_j_accordee);
    
    printf("Nombre de jours de congés utilisés :");
    scanf("%d", &nbr_j_utilisee);
    
    printf("\nStatut de l'employé (0 pour temps partiel, 1 pour temps plein) :");
    scanf("%d", &status);
    
    
    
    if(nbr_j_utilisee > nbr_totale_j_accordee) {
        printf("alerte");
        return 0;
    }
    
    if(status == 1){
        jours_restant = nbr_totale_j_accordee - nbr_j_utilisee;
            printf("jour(s) restant(s) = %dj", jours_restant);
    } else if (status == 0) {
        jours_restant = (nbr_totale_j_accordee/2) - nbr_j_utilisee;
            printf("jour(s) restant(s) = %dj", jours_restant);
    }
    
    return 0;
}
