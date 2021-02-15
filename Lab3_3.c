#include <stdio.h>

int
main ()
{
  int n, x = 2;
  scanf ("%d", &n);
  if (n >= 1 && n <= 1000)
    {
      while (n != 1)
    {
      while (n % x == 0)
        {
          printf ("%d\n", x);
          n = n / x;
        }
      x++;
    }
    }
  return 0;
}
