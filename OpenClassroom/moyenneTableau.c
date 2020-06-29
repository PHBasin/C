#include <stdio.h>
#include <stdlib.h>

double moyenneTableau(int tableau[], int tailleTableau);

int main (int argc, char *argv[])
{
  double moyenne = 0;
  int tableau[4] = {10, 15, 3}; 
  moyenne = moyenneTableau(tableau, 4);
  printf("%lf\n", moyenne);
  return 0;  
}

double moyenneTableau(int tableau[], int tailleTableau)
{
  int i, moyenne = 0;
  
  for (i = 0; i < tailleTableau; i++)
  {
    moyenne += tableau[i];
  }
  return moyenne / tailleTableau;
}

