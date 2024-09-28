#include <stdio.h>

int main(){

    int n;

    printf("entrer Un nombre n :");
    scanf("%d", &n);
    int fn;

    int T[n];

    T[0] = 0;
    T[1] = 1;

    for(int i=0;i<n;i++){
        fn = T[i-1] + T[i-2];
        T[i-2] = T[i-1];
        T[i-1] = fn;
        printf("%d, ",fn);
    }
}