#include <stdio.h>
#include <stdlib.h>

int main()
{

float mps,kph;

printf("Distance en Km/h :");
scanf("%f", &kph);

mps = kph * 0.27778;

printf("Temperature en Kelvin : %.2f", mps);


    return 0;
}
