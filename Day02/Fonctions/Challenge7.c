#include <stdio.h>
#include <string.h>

void Inverse(char T[30]){

    int last = strlen(T);
    //printf("%d", last);

    for(int i=last;i>=0;i--){
        printf("%c",T[i]);
    }
}


int main(){

    char nom[30];

    printf("enyrer Nom :");
    scanf("%s", &nom);

    Inverse(nom);
}