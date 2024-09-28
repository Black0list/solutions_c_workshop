#include <stdio.h>

int main(){

    int size;

    printf("entrer le Nombre elements  :");
    scanf("%d", &size);

    int T[size];



    for(int i=0;i<size;i++){

        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }
    printf("Les Elements Impaires Sont :");

    for(int i=0;i<size;i++){
        if(T[i] % 2 != 0) printf("\n T[%d] = %d :",i+1,T[i]);
    }


}