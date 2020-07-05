#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int choixMenu;

  printf("=== Menu ===\n");
  printf("1. Royal Cheese\n");
  printf("2. Mc Deluxe\n");
  printf("3. Mc Bacon\n");
  printf("4. Big Mac\n");
  scanf("%d", &choixMenu);

  switch (choixMenu)
  {
  case 1:
    printf("Royal Cheese. Good choice !");
    break;
  case 2:
    printf("Mc Delux. Good choice !");
    break;
  case 3:
    printf("Mc Bacon. Good choice !");
    break;
  case 4:
    printf("Big Mac. Good choice !");
    break;
  default:
    printf("Ce n'est pas un nombre correct.");
    break;
  }

  return 0;
}
