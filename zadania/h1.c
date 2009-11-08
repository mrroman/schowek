#include <stdio.h>

double suma(int n)
{
  double d;
  double k;
  int i;

  d=0.0;
  for (i=1;i<=n;i++)
    {
      k=1.0/((double)i);
      d+=k;
    }

  return d;
}

int main(int argc, char *argv[])
{
  int i=1;
  double d;

  do {
    d = suma(i++);
  } while(d < 10.0); 
    

  printf("%d\n",i);
  return 0;
}
