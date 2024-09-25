#include <stdio.h> 


int main() { 
    
    char cara;
    printf("Entrer un caractere : "); 
    scanf("%c", &cara);
    
    
    if(cara >= 65 && cara <=90) {
        printf("ce caractere est Majuscule"); 
    } else { 
        printf("ce caratere pas majuscule"); 
    } 
 return 0;
}