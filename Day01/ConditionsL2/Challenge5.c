

#include<stdio.h>
int main(){
    float Price ;
    int Dst ,nbr;
    printf("entrer badget de voyage :");
    scanf("%d",&Price);
     printf("Entrer la Dst (1 pour plage, 2 pour montagne, 3 pour ville) : ");
    scanf("%d", &Dst);
    printf("Entrer le nombre de personnes : ");
    scanf("%d", &nbr);
    
    if(Price >= 1000){
        printf(" Voyage haut de gamme");
    }
    else if(Price>=500 && Price<=1000 ){
        printf("Voyage moyen");
    }
    else {
        printf("Voyage economique");
    }
   printf("\n");

    switch(Dst) {
        case 1: 
            if (Price >= 1000 && nbr > 2) {
                printf("Dst recommandée : Plage\n");
            } else {
                printf("Conditions pas remplies pour la plage.\n");
            }
            break;

        case 2: 
            if (Price >= 500 && nbr <= 2) {
                printf("Dst recommande : Montagne\n");
            } else {
                printf("Conditions pas remplies pour la montagne.\n");
            }
            break;

        case 3: 
            printf("Dst recommandee : Ville\n");
            break;

       
    }

    return 0;
    
}