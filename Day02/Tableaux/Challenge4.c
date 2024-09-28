#include <stdio.h>


int main(){

    int size;

    printf("entrer le Nombre elements  :");
    scanf("%d", &size);

    int T[size],max;



    for(int i=0;i<size;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }
    max = T[0];

    for(int i=0;i<size;i++){
        if(T[i] > max){
            max = T[i];
        }
    }

    printf("\n Le max est : %d ", max);


}