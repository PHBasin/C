#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "openFile.h"

int pickWord(char *wordPicked)
{
    FILE* dico = NULL;
    int nbOfWords = 0, nbWordChosen = 0, i = 0;
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
        if (charReaded == '\n')
            nbOfWords++;
    } while(charReaded != EOF);

    nbWordChosen = randomNumber(nbOfWords);

    rewind(dico);
    while (nbWordChosen > 0)
    {
        charReaded = fgetc(dico);
        if (charReaded == '\n')
            nbWordChosen--;
    }

    fgets(wordPicked, 45, dico);

    wordPicked[strlen(wordPicked) - 1] = '\0';
    fclose(dico);

    return 1;
}

int randomNumber(int maxNumber)
{
    srand(time(NULL));
    return (rand() % maxNumber);
}
