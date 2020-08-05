#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau);

int main(int argc, char *argv[])
{
  int total = 0, tableau[4] = {10, 15, 3};
  
  total = sommeTableau(tableau, 4);
  printf("%d\n", total);
  return 0;
}

int sommeTableau(int tableau[], int tailleTableau)
{
  int i, total = 0;
  
  for (i = 0; i < tailleTableau; i++)
  {
    total += tableau[i];
  }
  
  return total;
}

