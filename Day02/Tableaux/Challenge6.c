#include <stdio.h>


int main(){

    int size,fact;

    printf("entrer le Nombre elements  :");
    scanf("%d", &size);

    int T[size];

    printf("Fcateur de Multuplication  :");
    scanf("%d", &fact);



    for(int i=0;i<size;i++){
        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }

    for(int i=0;i<size;i++){
        T[i] = T[i] * fact;
        printf("\nResultat apres Multiplication de T[%d] = %d", i+1,T[i]);
    }

}