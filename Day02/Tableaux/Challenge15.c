#include <stdio.h>

int main(){

    int size,size2;

    printf("entrer le Nombre elements  T1 :");
    scanf("%d", &size);

    printf("entrer le Nombre elements  T2 :");
    scanf("%d", &size2);

    int T[size];
    int T_2[size2];

    for(int i=0;i<size;i++){
        printf("\nentrer element Numero %d T1 :",i+1);
        scanf("%d", &T[i]);
    }

    for(int i=0;i<size2;i++){
        printf("\nentrer element Numero %d T2 :",i+1);
        scanf("%d", &T_2[i]);
    }
    int length = size + size2;
    
    T[length];

    for(int i=0,j=size;j<length;j++){
            T[j] = T_2[i];
            i++;
    }
    
    for(int i=0;i<length;i++){
        printf("\n T[%d] = %d :",i+1,T[i]);
    }
}