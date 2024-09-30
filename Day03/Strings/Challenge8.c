#include <stdio.h>
#include <ctype.h>


int main(){

//Methode1===================================================================
    // char cara;

    // printf("entrer Un caractere : ");
    // scanf("%c", &cara);

    // cara = tolower(cara);
    // printf("%c", cara);

//Methode2===================================================================

    char cara;

    printf("entrer Un caractere : ");
    scanf("%c", &cara);

    cara = cara + 32;
    printf("%c", cara);


}