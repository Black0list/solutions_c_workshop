#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int a,b;

    printf("entrer a:");
    scanf("%d", &a);

    printf("entrer b:");
    scanf("%d",&b);

    if(a==b){
        a = pow(a, 3);
        printf("Triplet = %d", a);
    } else {
        printf("a + b = %d", a+b);
    }

    return 0;
}