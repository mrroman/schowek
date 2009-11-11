#include <stdio.h>

int srednia(float *tab, int n)
{
  float suma = 0.0f;
  int i;

  for (i=0; i<n; i++)
    suma+=tab[i];

  return suma/(float)n;
}

int odchylenie(float *tab, int n)
{
  float suma;
  float sred;
  int i;

  sred = srednia(tab, n);
  for (i=0; i<n; i++)
    suma+=(tab[i]-sred)*(tab[i]-sred);

  return sqrt(suma/(float)n);
}

int main(int argc, char *argv[])
{

  return 0;
}
