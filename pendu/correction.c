#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char lireCaractere();
int gagne(int lettreTrouvee[]);
int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[]);

int main(int argc, char* argv[])
{
  char lettre = 0; // Stocke la lettre proposée par l'utilisateur (retour du scanf)
  char motSecret[] = "MARRON"; // C'est le mot à trouver
  int lettreTrouvee[6] = {0}; // Tableau de booléens. Chaque case correspond à une lettre du mot secret. 0 = lettre non trouvée, 1 = lettre trouvée
  int coupsRestants = 10; // Compteur de coups restants (0 = mort)
  int i = 0; // Une petite variable pour parcourir les tableaux

  printf("Bienvenue dans le Pendu !\n\n");

  while (coupsRestants > 0 && !gagne(lettreTrouvee))
  {
    printf("\n\nIl vous reste %d coups a jouer", coupsRestants);
    printf("\nQuel est le mot secret ? ");

    for (i = 0 ; i < 6 ; i++)
    {
      if (lettreTrouvee[i]) // Si on a trouvé la lettre n° i
        printf("%c", motSecret[i]); // On l'affiche
      else
        printf("*"); // Sinon, on affiche une étoile pour les lettres non trouvées
    }

    printf("\nProposez une lettre : ");
    lettre = lireCaractere();

    if (!rechercheLettre(lettre, motSecret, lettreTrouvee))
    {
      coupsRestants--; // On enlève un coup au joueur
    }
  }

  if (gagne(lettreTrouvee))
    printf("\n\nGagne ! Le mot secret etait bien : %s", motSecret);
  else
    printf("\n\nPerdu ! Le mot secret etait : %s", motSecret);

  return 0;
}

char lireCaractere() 
{ 
  char caractere = 0;

  caractere = getchar(); // On lit le premier caractère
  caractere = toupper(caractere); // On met la lettre en majuscule si elle ne l'est pas déjà

  while (getchar() != '\n') ;

  return caractere; // On retourne le premier caractère qu'on a lu 
}

int gagne(int lettreTrouvee[])
{
  int i = 0;
  int joueurGagne = 1;

  for (i = 0 ; i < 6 ; i++)
  {
    if (lettreTrouvee[i] == 0)
      joueurGagne = 0;
  }

  return joueurGagne;
}

int rechercheLettre(char lettre, char motSecret[], int lettreTrouvee[])
{
  int i = 0;
  int bonneLettre = 0;

  for (i = 0 ; motSecret[i] != '\0' ; i++)
  {
    if (lettre == motSecret[i]) // Si la lettre y est
    {
      bonneLettre = 1; // On mémorise que c'était une bonne lettre
      lettreTrouvee[i] = 1; // On met à 1 la case du tableau de booléens correspondant à la lettre actuelle
    }
  }

  return bonneLettre;
}
