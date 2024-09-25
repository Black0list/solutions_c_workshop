#include <stdio.h> 


int main() { 
    int nombre;
    printf("Entrer un nombre : "); 
    scanf("%d", &nombre);
    
    
    if(nombre > 0) {
    printf("Le nombre %d est positif.\n", nombre); 
    
    } else if (nombre < 0) {
    printf("Le nombre %d est negatif.\n", nombre); 
    
    } else { printf("Le nombre est nul.\n"); 
    
    } 
 return 0;
}