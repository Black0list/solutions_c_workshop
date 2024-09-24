#include <stdio.h>
#include <stdlib.h>

int main()
{

float a,b;

printf("entrer a:");
scanf("%f", &a);

printf("entrer b:");
scanf("%f", &b);

printf("\na+b=%.2f\na-b=%.2f\na*b=%.2f\na/b=%.2f", a+b,a-b,a*b,a/b);
    return 0;
}
