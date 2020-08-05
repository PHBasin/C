#include <stdio.h>
#include <stdlib.h>

void affiche(int  tableau[], int  tailleTableau, int max);
void maximumTableau(int tableau[], int  tailleTableau,  int valeurMax);

int main(int  argc, char *argv[])
{
  int tableau[4] = {10, 15, 3}, max = 0;

  printf("Quel maximum voulez-vous fixer ?\n");
  scanf("%d", &max);

  maximumTableau(tableau, 4, max);
  affiche(tableau, 4, max);

  return 0;
}

void maximumTableau(int tableau[], int  tailleTableau,  int valeurMax)
{
  int i;

  for (i = 0; i < tailleTableau; i++)
  {
    if (tableau[i] > valeurMax)
    {
      tableau[i] = 0;
    }
  }
}

void affiche(int  tableau[], int  tailleTableau, int  max)
{
  int i;

  printf("\nVoici tableau sans valeur supérieure à %d\n", max);

  for (i = 0; i < tailleTableau; i++)
  {
    printf("%d\n", tableau[i]);
  }
}

