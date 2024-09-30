#include <stdio.h>

int Check(int nbr){
    if(nbr % 2 == 0 ){
        return 0;
    } else {
        return 1;
    }
}


int main(){

    int nbr;

    printf("entrer Un Nombre :");
    scanf("%d",&nbr);

    if(Check(nbr) == 0){
        printf("%d est paire", nbr);
    } else if(Check(nbr) == 1){
        printf("%d est Impaire", nbr);
    }
}