#include <stdio.h>

int main(){

    int n;

    printf("entrer Un nombre n :");
    scanf("%d", &n);

    int T[n];

    int n_2 = 0;
    int n_1 = 1;

    printf("%d,",n_1);

    if(n<2){
        printf("%d, %d", n_2, n_1);
    } else {
        for(int i=2;i<=n;i++){
        T[i] = n_1 + n_2;
        n_2 = n_1;
        n_1 = T[i];
        printf(" %d,",T[i]);
    }
    }
}