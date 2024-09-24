#include <stdio.h>
#include <math.h>
int main() {

    float largeur;
    float longueur;
    float surface;
    
    printf ("entrez largeur :");
    scanf ("%f",&largeur);
    printf ("entrez longueur :");
    scanf ("%f",&longueur);
    
    
    surface = longueur * largeur;
    printf ( " la Surface est =%.2f",surface);

    return 0;
}