#include <stddef.h>
#include <stdio.h>

int main(void)
{
  int n = 0;
  char* line = NULL;
  size_t line_size = 0;

  printf("What number to you want to test parity? ");
  int conversions = scanf("%d", &n);

  if (conversions != 1) {
    printf("An error occured while prompting the number\n");
    return 1;
  }

  printf("The number %d is %s\n", n, n % 2 == 0 ? "pair" : "impair");

  return 0;
}

