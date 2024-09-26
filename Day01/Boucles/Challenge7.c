#include <stdio.h>
 
int main()
{
  int n, nbr1 = 0, nbr2 = 1, suivant, i;
 
  printf("Entrez le nombre de termes\n");
  scanf("%d", &n);
 
  printf("Les %d premiers termes de la série de Fibonacci sont:\n", n);
 
  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      suivant = i;
    else
    {
      suivant = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = suivant;
    }
    printf("%d\n", suivant);
  }
 
  return 0;
}