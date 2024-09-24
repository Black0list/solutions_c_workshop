#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

float r,Volume;
const float pi=3.14;

printf("entrer le rayon r:");
scanf("%f", &r);

Volume = ((4.0/3.0) * pi * pow(r,3));

printf("Le Volume est : %.2f\n", Volume);
    return 0;
}
