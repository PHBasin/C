#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int letterIsInTheWord(char letter, char wordToFind[], int *score);
int win(int score);
void displayTheLetter(char letter, char wordToFind[], char secretWord[]);
char readCaractere();

int main(int argc, char *argv[])
{
  printf("Bienvenue dans le Pendu !\n");

  int counter = 10;
  int score = 0;
  char wordToFind[] = "ROUGE";
  char secretWord[] = "*****";
  char letter = 0;

  while (counter > 0 && !win(score))
  {
    printf("Il vous reste %d coups a jouer\n", counter);
    printf("Quel est le mot secret ? %s\n", secretWord);
    printf("Proposez une lettre : ");
    letter = readCaractere();

    if (letterIsInTheWord(letter, wordToFind, &score) == 1)
    {
      displayTheLetter(letter, wordToFind, secretWord);
    }
    else
    {
      counter--;
    }
  }
  
  if (win(score))
  {
    printf("Gagné !\n");
  } 
  else
  {
    printf("Perdu ! Le mot secret etait : %s\n", wordToFind);
  }
  return 0;
}

int letterIsInTheWord(char letter, char wordToFind[], int *score)
{
  int i;
  int goodLetter = 0;

  for (i = 0; i < 5; i++)
  {
    if (letter == wordToFind[i])
    {
      *score += 1;
      goodLetter = 1;
    }
  }
  return goodLetter;
}

int win(int score)
{
  if (score == 5)
  {
    return 1;
  }
  return 0;
}

void displayTheLetter(char letter, char wordToFind[], char secretWord[])
{
  int i;

  for (i = 0; i < 5; i++)
  {
    if (letter == wordToFind[i])
    {
      secretWord[i] = letter;
    }
  }  
}

char readCaractere() 
{ 
  char caractere = 0;

  caractere = getchar();
  caractere = toupper(caractere);

  while (getchar() != '\n') ;

  return caractere;
}

