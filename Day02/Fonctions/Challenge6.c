#include <stdio.h>

int Fibo(int nbr){

    int n_2 = 0, n_1 = 1;
    int T[100];

    if(nbr == 0){
        return n_2;
    } else if(nbr == 1){
        return n_1;
    } else {
        for(int i=2;i<=nbr;i++){
        T[i] = n_1 + n_2;
        n_2 = n_1;
        n_1 = T[i];
        }
        return n_1;
    }
}

int main(){

    int nbr; 

    printf("entrer Un nombre :");
    scanf("%d", &nbr);

    printf("nbr-eme Nobre de Fibo est : %d", Fibo(nbr));
}