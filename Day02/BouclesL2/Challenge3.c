#include <stdio.h>

int main(){
    int N,count;

    printf("entrer N :");
    scanf("%d", &N);

    for(int i=1;i<N;i++){
        count = 0;
        for(int j=1;j<=i;j++){
            if(i%j == 0) count++;
        }
        if(count == 2 || count == 1) printf("%d, ",i);
    }
}