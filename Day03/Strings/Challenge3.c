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

    // strcat(input1, input2);

    // printf("%s", input1);

//Methode 2------------------------------------------------------------------------------
    char input1[100];
    char input2[100];

    printf("entrer Une Chaine de Caracteres : ");
    scanf(" %[^\n]", input1);

    printf("entrer Une Chaine de Caracteres : ");
    scanf(" %[^\n]", input2);

    int last1 = strlen(input1);
    int last2 = strlen(input2);
    int j = 0;

    for(int i=last1;i<=last1 + last2;i++){
        input1[i] = input2[j];
        j++;
    }

    printf("%s", input1);
}