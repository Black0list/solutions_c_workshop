#include <stdio.h>

int main() {
    int HH,HH1,MM,MM1,SS,SS1;

    printf("Entrer la 1ere instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &HH, &MM, &SS);
    
    printf("Entrer la 1ere instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &HH1, &MM1, &SS1);

    if (HH < HH1) {
        printf("Le premier instant vient avant le deuxième");
    } else if((HH == HH1)) {
        if(MM < MM1) {
            printf("Le premier instant vient avant le deuxième");
        } else if ( MM == MM1){
            if(SS < SS1) {
            printf("Le premier instant vient avant le deuxième");
            } else if ( MM == MM1){
                printf("Il s'agit du même instant.");
            } else {
                printf("Le deuxième instant vient avant le premier");
            }
        } else {
        printf("Le deuxième instant vient avant le premier");
        }
    
        
    } else {
        printf("Le deuxième instant vient avant le premier");
    }
    return 0;
}
