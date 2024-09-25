#include <stdio.h>

int main() {
    int score,revenue,date;
    
    printf("Revenu annuel (en euros) :");
    scanf("%d", &revenue);
    
    printf("\nScore de crédit (sur 1000) :");
    scanf("%d", &score);
    
    printf("\nDurée du prêt (en années) :");   
    scanf("%d", &date);
    
    
    if((revenue >= 30000) && (score >= 700) && (date <= 10)) {
        printf("Eligible");
    }else if((revenue >= 30000) && (score >= 650) && (date <= 15)) {
        printf("Éligible avec conditions");
    }else if((revenue < 30000) && (score < 650) && (date > 15)) {
        printf("Non éligible");
    }
    
    return 0;
}
