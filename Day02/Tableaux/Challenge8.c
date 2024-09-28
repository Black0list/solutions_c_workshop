#include <stdio.h>

int main(){

    int T_org[] = { 2,3,5,7,90,12,6,7,9};
    int T_copie[] = {};

    for(int i=0;i<9;i++){
        T_copie[i] = T_org[i];
        printf("\nT_Originale[%d] = %d", i+1,T_copie[i]);
        printf("\nT_Copier[%d] = %d", i+1,T_org[i]);
        printf("\n==========================================");
    }
}