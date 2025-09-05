#include <stdio.h>

unsigned int factorial_recursive(unsigned int n)
{
  if (n <= 1) {
    return 1;
  }

  return n * factorial_recursive(n - 1);
}

int factorial_iterative(unsigned int n)
{
  int result = 1;

  for (int i = 0; i < n; i++) {
    result *= i;
  }

  return result;
}

int main(void)
{
  int n = 0;

  printf("Promt a natural integer to compute factorial of: ");
  scanf("%d", &n);

  int result_recursive = factorial_recursive(n);
  int result_iterative = factorial_recursive(n);

  printf("factorial_recursive(%d) = %d\n", n, result_recursive);
  printf("factorial_iterative(%d) = %d\n", n, result_iterative);

  return 0;
}

