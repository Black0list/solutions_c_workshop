#include <stdio.h>
#include <string.h>

int main(){

//Methode 1------------------------------------------------------------------------------
    // char input[100];

    // printf("entrer Une Chaine de Caracteres : ");
    // scanf(" %[^\n]", input);

    // printf("%s", strrev(input));

//Methode 2------------------------------------------------------------------------------
    char input[100];


    printf("entrer Une Chaine de Caracteres : ");
    scanf(" %[^\n]", input);


    int last1 = strlen(input);

    for(int i=last1;i>=0;i--){
        printf("%c", input[i]);
    }
}