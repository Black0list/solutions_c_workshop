#include <stdio.h>


int main(){

    char input[100];

    printf("entrer Une Chaine de Caracteres : ");
    scanf(" %[^\n]", input);

    int i;

    for(i=0;input[i] != '\0';i++);

    printf("taille est : %d", i);
}