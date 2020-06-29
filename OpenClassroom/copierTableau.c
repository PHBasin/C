#include <stdio.h>
#include <stdlib.h>

void affiche(int *tableau, int tailleTableau);
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau);

int main(int argc, char *argv[])
{  
  int tableauOriginal[4] = {10, 15, 3};
  int tableauCopie[4] = {0};
  
  copie(tableauOriginal, tableauCopie, 4);
  affiche(tableauCopie, 4);

  return 0;
}
 
void copie(int tableauOriginal[], int tableauCopie[], int tailleTableau)
{
  int i;

  for (i = 0; i < tailleTableau; i++)
  {
    tableauCopie[i] = tableauOriginal[i];
  } 
}

void affiche(int tableau[], int tailleTableau)
{
  int i;
  
  for (i = 0 ; i < tailleTableau ; i++)
  {
    printf("%d\n", tableau[i]);
  }
}

