#include <stdio.h>
 
int main(){

  int n, n_2=0, n_1=1;
  int  i, result;

  printf("entrer un Nombre ");
  scanf("%d",&n);

    for(i=0;i<n;i++){

        result = n_1 + n_2;
        n_2 = n_1;
        n_1 = result;
        printf("\n%d",result);
        
    }

 
  return 0;
}