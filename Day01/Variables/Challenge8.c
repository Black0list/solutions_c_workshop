#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

float a, b, c, moyenne_geometrique;
printf("Entrez 1ere nombre : ");
scanf("%f", &a);
printf("Entrez le 2eme nombre : "); 
scanf("%f", &b);
printf("Entrez le 3eme nombre : "); 
scanf("%f", &c); 

moyenne_geometrique = pow(a * b * c, (1.0/3.0));
printf("La moyenne geometrique est : %.2f\n", moyenne_geometrique);
    return 0;
}
