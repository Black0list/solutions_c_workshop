#include<stdio.h>


int main(){
    int n,nbr=0 ;
    printf("entre un Nombre :");
    scanf("%d",&n);
     while (n>0)
     {
        n=n/10;
        nbr++;

        
     }
     printf("nbr de chiffres est :%d",nbr);
     

}