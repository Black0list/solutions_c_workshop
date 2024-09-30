#include <stdio.h>
#include <string.h>


int main(){

    char input[100];
    char cherche[100];

    printf("entrer Une Chaine de caracteres : ");
    scanf(" %[^\n]", input);

    printf("chaine a chercher : ");
    scanf(" %[^\n]", cherche);

    if(strstr(input, cherche) == NULL){
        printf("chaine ne pas Trouve");
    } else {
        printf("chaine est Trouve");
    }
}