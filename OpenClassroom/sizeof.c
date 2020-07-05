#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("char : %zu octets\n", sizeof(char));
  printf("int : %zu octets\n", sizeof(int));
  printf("long : %zu octets\n", sizeof(long));
  printf("double : %zu octets\n", sizeof(double));
  
  return 0;
}

