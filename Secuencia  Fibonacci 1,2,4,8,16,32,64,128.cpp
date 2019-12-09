
#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
  int m = 0;
  int n = 1;
  int s = 1;
  int d = 1;
  printf("\n este programa va ejecutar una secuencia de numero\n");

  for (n = 1; n <= 9; n = n + 1)
  {
    printf("%d, ", m);
    d = m + s;
    m = s;
    s = d;
  }
  getch();
}
