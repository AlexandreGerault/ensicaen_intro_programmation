#include <stdio.h>

int main()
{
  int a, b;

  printf("Prompt A: ");
  scanf("%d", &a);

  printf("Prompt B: ");
  scanf("%d", &b);

  int sum = a + b;
  printf("%i + %i = %i (10) = %x (16) = %b (2)\n", a, b, sum, sum, sum);

  return 0;
}
