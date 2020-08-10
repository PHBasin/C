/* ****************************************************************************

# File Name : secureInput.c
# Creation Date : 05-08-2020
# Last Modified : Mon 10 Aug 2020 01:35:13 PM CEST
# Created By : PHBasin

**************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flushBuffer();
long readInteger();
double readRelative();
int read(char *string, int lenth);

int main(int argc, char *argv[])
{
  char name[10];
  long age = 0;
  double weight = 0;

  printf("Quel est votre nom ?\n");
  read(name, 10);
  printf("Ah ! Vous vous appelez donc %s !\n", name);  
  
  printf("Quel est votre age ?\n");
  age = readInteger();
  printf("Ah vous avez donc %ld ans !\n", age);

  printf("Combien pesez-vous ?\n");
  weight = readRelative();
  printf("Ah vous pesez donc %f kg !\n", weight);

  return 0;
}

int read(char *string, int lenth)
{
  char *startPosition = NULL;

  if (fgets(string, lenth, stdin) != NULL)
  {
    startPosition = strchr(string, '\n');
    if (startPosition != NULL)
    {
      *startPosition = '\0';
    }
    else
    {
      flushBuffer();
    }
    return 1;
  }
  else
  {
    flushBuffer();
    return 0;
  }
}

void flushBuffer()
{
  int c = 0;
  while (c != '\n' && c != EOF)
  {
    c = getchar();
  }
}

long readInteger()
{
  char textInteger[100] = {0};

  if (read(textInteger, 100))
  {
    return strtol(textInteger, NULL, 10);
  }
  else
  {
    return 0;
  }
}

double readRelative()
{
  char textRelative[100] = {0};
  char *dotPosition = NULL;

  if (read(textRelative, 100))
    {
      dotPosition = strchr(textRelative, ',');
      if (dotPosition != NULL)
      {
        *dotPosition = '.';
      }
      return strtod(textRelative, NULL);
    }
  else
    {
      return 0;
    }
}
