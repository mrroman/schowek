#include <stdio.h>
#include <math.h>

int suma(int n) 
{
  int wynik = 0;
  int i;

  for (i = 1; i < n; i++)
    if (n % i == 0)
      wynik += i;

  return wynik;
}

int main(int argc, char *argv[])
{
  int wyniki[1001];
  int i;

  for (i = 2; i < 1001; i++)
    wyniki[i] = suma(i);

  for (i = 2; i < 1001; i++) 
    if (wyniki[i] == i)
      printf("%d; ", i);

  printf("\n");
  
  for (i = 2; i < 1001; i++) 
    if (wyniki[i] <= 1000 && wyniki[wyniki[i]] == i)
      printf("%d-%d; ", i, wyniki[i]);

  printf("\n");
  
  return 0;
}
