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

    for(int i=0;i<size;i++){
        for(int j=0;j<size - 1 - i;j++){
            if(T[j] > T[j+1]){
                T[j] = T[j+1] + T[j];
                T[j+1] = T[j] - T[j+1];
                T[j] = T[j] - T[j+1];
            }
        }
    }

    for(int i=0;i<size;i++){
        printf("\n T[%d] = %d :",i+1,T[i]);
    }


}