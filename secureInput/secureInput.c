/* ****************************************************************************

# File Name : secureInput.c
# Creation Date : 05-08-2020
# Last Modified : Wed 05 Aug 2020 10:17:37 PM CEST
# Created By : PHBasin

**************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void flushBuffer();
long readNumber();
int read(char *string, int lenth);

int main(int argc, char *argv[])
{
  char name[10];
  long age = 0;

  printf("Quel est votre nom ?\n");
  read(name, 10);
  printf("Ah ! Vous vous appelez donc %s !\n", name);  
  
  printf("Quel est votre age ?\n");
  age = readNumber();
  printf("Ah vous avez donc %ld ans !\n", age);

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

long readNumber()
{
  char textNumber[100] = {0};

  if (read(textNumber, 100))
  {
    return strtol(textNumber, NULL, 10);
  }
  else
  {
    return 0;
  }
}
