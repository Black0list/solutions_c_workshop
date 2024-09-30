#include <stdio.h>

int Facto(int A){
    int f = 1;

    for(int i=1;i<=A;i++){
        f *= i;
    }
    return f;
}



int main(){

    int nbr;

    printf("entrer un Nombre :");
    scanf("%d", &nbr);

    printf("%d! = %d", nbr,Facto(nbr));

}