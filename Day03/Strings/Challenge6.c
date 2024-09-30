#include <stdio.h>
#include <string.h>

int main(){

    char input[100];
    char cara;

    printf("entrer Une Chaine de Caracteres : ");
    gets(input);

    printf("entrer Un caractere pour Compter les Occurences : ");
    scanf("%c", &cara);



    int last = strlen(input);
    int count = 0;

    for(int i=0;i<=last;i++){
        if(input[i] == cara){
            count++;
        }
    }
    printf("\nNombre d'Occurence de %c dans la chaine est : %d", cara,count);
    
}