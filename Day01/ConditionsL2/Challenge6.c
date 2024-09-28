#include<stdio.h>

int main() {
    float Consommation;  
    int Type_User;    
    int type_Contrat;  
    
    printf("Entrer le type de contrat (0 pour standard et 1 pour reduit) : ");
    scanf("%d", &type_Contrat);  
    
    printf("Entrer le type utilisateur (1 pour résidentiel et 2 pour commercial) : ");
    scanf("%d", &Type_User); 
    
    switch(Type_User) {
        case 1:  
            if (type_Contrat == 0) {
                printf("Consommation electricite est: 0.20 £/kwh\n");
            } else if (type_Contrat == 1) {
                printf("Consommation electricite est: 0.15 £/kwh\n");
            } else {
                printf("Type de contrat non valide.\n");
            }
            break;

        case 2:  
            if (type_Contrat == 0) {
                printf("Consommation electricite est: 0.30 £/kwh\n");
            } else if (type_Contrat == 1) {
                printf("Consommation electricite est: 0.25 £/kwh\n");
            } else {
                printf("Type de contrat non valide.\n");
            }
            break;

        default:
            printf("Type utilisateur non valide.\n");
            break;
    }
    printf("entre la Consommation electricite ");
    scanf("%f",&Consommation);
    if (Consommation>500){
        printf("consomation est : %f",Consommation*0.1);
    }
    else{
        printf(" pas supplement");
    }
    return 0;
    
}