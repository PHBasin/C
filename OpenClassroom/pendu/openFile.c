#include <stdlib.h>
#include <stdio.h>

#define MAX_SIZE 45

int numberOfLine(char fichier);

int main(int argc, char *argv[])
{
  char word[MAX_SIZE] = "";  
  int number = 0;

  FILE* fichier = NULL;
  
  fichier = fopen("dico.txt", "r");

  if (fichier != NULL)
  {
    fgets(word, MAX_SIZE, fichier);
    printf("%s", word);
    number = numberOfLine(fichier)
    fclose(fichier);
  }
  else
  {
    printf("impossible d'ouvrir le fichier dico.txt");
  }

  return 0;
}

int numberOfLine(fichier)
{
  int counter = 0;
  
}

