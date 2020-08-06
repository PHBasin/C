#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int* memoireAllouee = NULL;
  
  memoireAllouee = malloc(sizeof(int));
  if (memoireAllouee == NULL)
  {
    exit(0);
  }

  free(memoireAllouee);
  
  return 0;
}

