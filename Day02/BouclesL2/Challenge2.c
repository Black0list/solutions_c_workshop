#include <stdio.h>

int main(){

    int nbr;

    printf("Entrer un Nbr : ");
    scanf("%d",&nbr);

    for(int i=1;i<nbr*2;i++){
        if(i%2 != 0){
            for(int j=nbr;j> i - j -1;j--){
                printf(" ");
            }
            for(int j=0;j<i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
}