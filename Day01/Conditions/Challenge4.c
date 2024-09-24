#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float a,b,c,delta,x1,x2;

    printf("entrer les facteurs de l\'equation a = ");
    scanf("%f", &a);

    printf("\nb=");
    scanf("%f", &b);

    printf("\nc=");
    scanf("%f", &c);

    delta = (b*b) - (4 * a * c);

    if(delta > 0) {

        x1 = (-b - sqrt(delta)) / (2 * a); 
        x2 = (-b + sqrt(delta)) / (2 * a);
        printf("x1 = %f\nx2 = %f", x1,x2);
    } else if (delta == 0){
        x1 = (-b) / (2 * a);
        printf("x = %f", x1);
    } else {
        printf("Soon");
    }


    return 0;
}