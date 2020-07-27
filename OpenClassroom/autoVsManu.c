// Automatique

int main(int argc, char *argv[])
{
  int maVariable = 0;

  printf("Quel age avez-vous ?");
  scanf("%d", &maVariable);
  printf("Vous avez %d ans\n", maVariable);

  return 0;
}


// Manuel

int main(int argc, char *argv[])
{
  int* memoireAllouee = NULL;

  memoireAllouee = malloc(sizeof(int));
  if (memoireAllouee == NULL)
  {
    exit(0);
  }

  printf("Quel age avez-vous ?");
  scanf("%d", memoireAllouee);
  printf("Vous avez %d ans\n", *memoireAllouee);

  free(memoireAllouee);

  return 0;
}

