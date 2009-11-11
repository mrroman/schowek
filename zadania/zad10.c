#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int i;
  double d;

  d = 1.0;
  for (i=2;i<1000;i++)
    d*=pow((double)i, 0.001);

  printf("Wynik: %lf\n", d);

  return 0;
}
