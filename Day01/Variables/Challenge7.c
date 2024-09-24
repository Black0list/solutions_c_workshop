#include <stdio.h>
#include <stdlib.h>

int main()
{

float nombre1, nombre2, nombre3, moyenne_ponderee;
printf("Entrez 1ere nombre : ");
scanf("%f", &nombre1);
printf("Entrez le 2eme nombre : "); 
scanf("%f", &nombre2);
printf("Entrez le 3eme nombre : "); 
scanf("%f", &nombre3); 

moyenne_ponderee = (nombre1 * 2 + nombre2 * 3 + nombre3 * 5) / 10;
printf("La moyenne pondedree est : %.2f\n", moyenne_ponderee);
    return 0;
}
