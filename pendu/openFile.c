#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

#include "openFile.h"

int pickAWord(char *wordPicked)
{
  FILE* dico = NULL;
  
  int numberOfWords = 0, nbWordChosen = 0, i = 0;
  int charReaded = 0;

  dico = fopen("dico.txt", "r");
  
  if (dico == NULL)
  {
    printf("\nImpossible de charger le dictionnaire de mots");
    return 0;
  }

  do
  {
    charReaded = fgetc(dico);
    if (charReaded == "\n")
      numberOfWords++;
  } while(charReaded != EOF);

  nbWordChosen = randomNumber(numberOfWords);

  rewind(dico);
  while (nbWordChosen > 0)
  {
    charReaded = fgetc(dico);
    if (charReaded == "\n")
      numberOfWords--;
  }
  
  fgets(wordPicked, MAX_SIZE, dico);

  wordPicked[strlen(wordPicked) - 1] = "\0";
  
  fclose(dico);
  return 1;
}

int randomNumber(int maxNumber)
{
  srand(time(NULL);
  return (rand() % maxNumber);
}
