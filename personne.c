#include <stdio.h>
#include <stdlib.h>
#include "personne.h"

int main(int argc, char *argv[])
{
  Personne clients[3] = {"", "", "", 0, 0};

  int i;

  for (i = 0; i < 3; i++)
  {
    printf("Quel est votre nom ?\n");
    scanf("%s", clients[i].nom);

    printf("Quel est votre prenom ?\n");
    scanf("%s", clients[i].prenom);

    printf("Vous vous appelez %s %s\n\n", clients[i].nom, clients[i].prenom);
  }

  return 0;
}

