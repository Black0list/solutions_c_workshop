#include <stdio.h>

int main() {
    
    int nbr;
    
    printf("entrer nombre :");
    scanf("%d",&nbr);
    
    if(nbr%2 == 0){
        printf("paire");
    } else {
        printf("impaire");
    }

    return 0;
}