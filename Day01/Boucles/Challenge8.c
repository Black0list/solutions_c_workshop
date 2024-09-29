#include <stdio.h>
 
int main(){

  int n, n_2=0, n_1=1;
  int  i, result;

  printf("entrer un Nombre ");
  scanf("%d",&n);

  
  printf("%d,",n_1);

  if(n<2){
        printf("%d, %d,", n_2, n_1);
  } 
  for(i=2;i<=n;i++){
        result = n_1 + n_2;
        n_2 = n_1;
        n_1 = result;
        printf(" %d,",result);
    }
  return 0;
}