#include <stdio.h> 


int main() { 
    
    char cara;
    printf("Entrer un caractere : "); 
    scanf("%c", &cara);
    
    if((cara >= 97 && cara <= 122) || (cara >= 65 && cara <= 90)) {
        printf("est un caractere");
                if(cara >= 65 && cara <= 90) {
                     printf(" Majuscule"); 
                 } else { 
                     printf(" Miniscule"); 
                 }
    } else { 
        printf("pas un caractere"); 
    } 
    
    
    
 return 0;
}