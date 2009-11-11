#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

const double DOKLADNOSC = 0.0000001;

double funkcja(int n,double a)
{
  return(sqrt(n+a*sqrt(n)+1) - sqrt(n));
}

int main(int argc, char *argv[])
{
  int i=1;
  double a;

  printf("a=");
  scanf("%lf", &a);

  while (fabs(funkcja(i+1,a) - funkcja(i,a)) > DOKLADNOSC)
    i++;

  printf("%d %.10lf\n", i+1, funkcja(i+1, a));
  return 0;
}
