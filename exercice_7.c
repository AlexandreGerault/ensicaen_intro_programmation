#include <stdio.h>
int main(void)
{
  int a, b, c = 0;

  printf("Prompt 3 integers: ");
  scanf("%d %d %d", &a, &b, &c);

  int max = a > b ? a : b;
  max = max > c ? max : c;

  printf("Max(%d, %d, %d) = %d\n", a, b, c, max);

  return 0;
}

