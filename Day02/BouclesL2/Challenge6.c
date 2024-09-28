#include <stdio.h>

int main(){

    int n;

    printf("entrer Un nombre n :");
    scanf("%d", &n);

        for(int i=1;i<=n;i++){
            if(n%i == 0){
                printf("%d, ",i);
            }
        }
    
}