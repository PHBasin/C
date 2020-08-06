# include <stdio.h>

void somme(int a, int b, int *c);

int main(int argc, char *argv[])
{
  int a, b, c;
  a = 3;
  b = 8;
  c = 0;
  somme(a, b, &c);
  printf("Somme de a et b : %d\n", c);
  return 0;
}

void somme(int a, int b, int *c)
{
  *c = a + b;
  return;
}
