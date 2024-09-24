
#include <stdio.h>

int main() {
    
    char nbr;
    
    printf("entrer nombre :");
    scanf("%c",&nbr);
    
    switch(nbr){
        case 'a' : printf("voyelle");
        break;
        
        case 'o' : printf("voyelle");
        break;
        
        case 'i' : printf("voyelle");
        break;
        
        case 'u' : printf("voyelle");
        break;
        
        case 'e' : printf("voyelle");
        break;
        
        case 'y' : printf("voyelle");
        break;
        
        default: printf("pas un Voyelle");
        break;
        
    }

    return 0;
}