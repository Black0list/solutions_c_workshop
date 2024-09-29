#include <stdio.h>

int main(){

    int T[10],somme = 0;



    for(int i=0;i<10;i++){
        printf("\nentrer element Numero %d :",i+1);
        scanf("%d", &T[i]);
    }

    for(int i=0;i<10;i++){
        if(T[i] % 10 == 0 && T[i] != 0){
            somme += T[i];
        }
    }

    printf("Somme des Nombre qui terminent par 0 est : %d", somme);
}