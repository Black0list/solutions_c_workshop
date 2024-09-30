#include <stdio.h>
#include <string.h>

int main(){

    char input[100];

    printf("entrer Une Chaine de Caracteres : ");
    scanf(" %[^\n]", input);

    printf("%s", input);
    
}