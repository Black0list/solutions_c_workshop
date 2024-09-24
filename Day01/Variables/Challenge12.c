#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    
    int nombre,inverse,a,b,c,d;
    
    printf("entrer un nombre de 4 chiffres :");
    scanf("%d", &nombre);

a = nombre / 1000;
b = (nombre / 100) % 10;
c = (nombre / 10) % 10;
d = nombre % 10; 

inverse = d * 1000 + c * 100 + b * 10 + a; 
printf("Nombre inverse est : %d ", inverse);


    return 0;
}
