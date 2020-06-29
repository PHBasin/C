#include <stdio>
#include <stdlib>
#include "personne.h"

int main(int argc, char *argv[])
{
  Personne client;

  client.nom = "Dupont";
  client.prenom = "Jean";

  printf("Vous vous appelez %s %s", client.nom, client.prenom);

  return 0;
}

