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
        printf("Triplet = %d", a*3);
    } else {
        printf("a + b = %d", a+b);
    }

    return 0;
}