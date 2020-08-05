#include <stdio.h>
#include <stdlib.h>

void ordonnerTableau(int tableau[], int tailleTableau);
void afficher(int tableau[], int tailleTableau);
int enOrdreCroissant(int tableau[], int tailleTableau);

int main(int argc, char *argv[])
{
  int tableau[4] = {15, 81, 22, 13};

  ordonnerTableau(tableau, 4);
  afficher(tableau, 4);

  return 0;
}


void ordonnerTableau(int tableau[], int tailleTableau)
{
  int i, temp = 0;
  
  while (enOrdreCroissant(tableau, tailleTableau) == 1)
  {
    for (i = 0; i < (tailleTableau - 1); i++)
    {
      if (tableau[i] > tableau[i + 1])
      {
        temp = tableau[i + 1];
        tableau[i + 1] = tableau[i];
        tableau[i] = temp;
      }
    }  
  }
}

int enOrdreCroissant(int tableau[], int tailleTableau)
{
  int i;

  for (i = 1; i < tailleTableau; i++)
  {
    if (tableau[i - 1] > tableau[i])
    {
      return 1;
    }
  }
  
  return 0;
}

void afficher(int tableau[], int tailleTableau)
{
  int i;

  for (i = 0; i < tailleTableau; i++)
  {
    printf ("%d\n", tableau[i]);
  }
}

