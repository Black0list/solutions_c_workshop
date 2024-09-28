#include <stdio.h>


int main(){

    int size,somme = 0;

    printf("entrer le Nombre elements  :");
    scanf("%d", &size);

    int T[size];

    for(int i=0;i<size;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);

        somme += T[i];
    }

    printf("\n La Somme des Elements : %d ", somme);


}