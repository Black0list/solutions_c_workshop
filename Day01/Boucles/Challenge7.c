#include <stdio.h>

int main(){

int nbr, inverse;

printf("entrer un Nombre :");
scanf("%d",&inverse);

nbr = inverse;
inverse = 0;

while(nbr != 0){
  inverse = inverse * 10;
  inverse = inverse + nbr%10;
  nbr = nbr/10;
}

printf("inverse est : %d", inverse);

}