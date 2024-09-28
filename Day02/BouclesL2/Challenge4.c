#include <stdio.h>

int main(){

    int nbr;
    printf("entrer N :");
    scanf("%d", &nbr);

    
    int inverse = 0;


    while(nbr != 0){
        inverse = inverse * 10;
        inverse = inverse + nbr%10;
        nbr /=10;
    }

    printf("Nombre Inverse est : %d",inverse);
}