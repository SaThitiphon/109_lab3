#include <stdio.h>

int
main ()
{
  int n, x = 2;
  scanf ("%d", &n);
  while (n != 1)
    {
      while (n % x == 0)
    {
      printf ("%d\n", x);
      n = n / x;
    }
      x++;
    }
  printf ("0");
  return 0;
}
