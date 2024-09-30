#include <stdio.h>
#include <string.h>

int main(){

//Methode 1------------------------------------------------------------------------------
    // char input1[100];
    // char input2[100];

    // printf("entrer Une Chaine de Caracteres : ");
    // scanf(" %[^\n]", input1);

    // printf("entrer Une Chaine de Caracteres : ");
    // scanf(" %[^\n]", input2);

    // if(strcmp(input1, input2) == 0){
    //     printf("les deux chaines Sont identiques");
    // } else {
    //     printf("les deux chaines ne sont pas identiques");
    // }

//Methode 2------------------------------------------------------------------------------
    char input1[100];
    char input2[100];

    printf("entrer Une Chaine de Caracteres : ");
    scanf(" %[^\n]", input1);

    printf("entrer Une Chaine de Caracteres : ");
    scanf(" %[^\n]", input2);

    int last1 = strlen(input1);\
    int j = 0;

    for(int i=last1;i<=last1;i++){
        if(input1[i] != input2[i]){
            j++;
        }
    }

    if(j == 0){
        printf("les deux chaines Sont identiques");
    } else {
        printf("les deux chaines ne sont pas identiques");
    }
}