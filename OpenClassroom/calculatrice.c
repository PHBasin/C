#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int resultat = 0, valeur1 = 0, valeur2 = 0;

  
  printf("Choisissez un premier chiffre : ");
  scanf("%d", &valeur1);
  printf("Choisissez un deuxieme chiffre : ");
  scanf("%d", &valeur2);

  resultat = valeur1 + valeur2;
  
  printf("Voici le resultat : %d + %d = %d\n", valeur1, valeur2, resultat);

  return 0;
}

