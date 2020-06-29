#include <stdio.h>
#include <stdlib.h>

int enOrdreCroissant(int tableau[], int tailleTableau);

int main(int argc, char *argv[])
{
  int tableau[4] = {15, 81, 22, 13};

  enOrdreCroissant(tableau, 4);

  return 0;
}

int enOrdreCroissant(int tableau[], int tailleTableau)
{
  int i;

  for (i = 1; i < tailleTableau; i++)
  {
    if (tableau[i - 1] > tableau[i])
    {
      printf("false");
    }
    else
    {
      printf("true");
    }
  }
}

