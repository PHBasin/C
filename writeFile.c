#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  int age = 0;
  
  fichier = fopen("writeFile.txt", "w");
  
  if (fichier != NULL)
  {
    fputs("Salut les gars\nCa va ?", fichier);
    fclose(fichier);
  
    printf("Quel age avez-vous ?\n");
    scanf("%d", &age);

    fprintf(fichier, "Le Monsieur qui utilise le programme, il a %d ans", age);
    fclose(fichier);
  }

  return 0;
}

