#include <stdio.h>
#include <string.h>


int main(){

    char input[100];

    printf("entrer Une Chaine de caracteres : ");
    scanf(" %[^\n]", input);

    int length = strlen(input);

    for(int i= 0;i<length - 1;i++){
            if(input[i] == 32){
                for(int j=i;j<length;j++){
                    input[j] = input[j+1];
                }
            length--;
            }   
    }
    printf("%s", input);
}