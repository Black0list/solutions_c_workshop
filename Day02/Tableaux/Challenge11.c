#include <stdio.h>

int main(){

    int size;

    printf("entrer le Nombre elements  :");
    scanf("%d", &size);

    int T[size],newValue,element;



    for(int i=0;i<size;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }

    printf("\nentrer element a remplacer :");
    scanf("%d", &element);
    printf("\nentrer la Nouvelle Valeur :");
    scanf("%d", &newValue);

    for(int i=0;i<size;i++){
        if(element == T[i]) T[i] = newValue;
        printf("\n T[%d] = %d :",i+1,T[i]);
    }


}