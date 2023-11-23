#include <stdio.h>
int main()
{
  int input , i;
  scanf("%d", &input);
  long long int a[input];
  a[0] = 1;
  a[1] = 2;
  for (i = 2; i < input; i++)
  {
    a[i] = 0;
    for (int j = 1; j <= i; j++)
    {
      if (i - j < (i - 1) / 2) break;
        a[i] += a[i - j];
        a[i] %= 10000;
    }
  }

  printf("%d", a[input - 1] );
}