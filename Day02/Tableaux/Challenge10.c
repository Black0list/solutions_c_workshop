#include <stdio.h>

int main(){

    int size,cherche;

    printf("entrer le Nombre elements  :");
    scanf("%d", &size);
    int count = 0;
    int T[size],max;



    for(int i=0;i<size;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }

    printf("entrer element a chercher :");
    scanf("%d", &cherche);

    for(int i=0;i<size;i++){
        if( cherche == T[i]) {
            printf("Oui cet element , il est existe");
            count++;
            break;
        }
    }

    if(count == 0) printf("pas Existe");



}