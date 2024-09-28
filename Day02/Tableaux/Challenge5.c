#include <stdio.h>


int main(){

    int size;

    printf("entrer le Nombre elements  :");
    scanf("%d", &size);

    int T[size],min;



    for(int i=0;i<size;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }
    min = T[0];

    for(int i=0;i<size;i++){
        if(T[i] < min){
            min = T[i];
        }
    }

    printf("\n Le Min est : %d ", min);


}