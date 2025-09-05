#include <stdio.h>

int main(void)
{
  float a, b, c = 0;
  char o = '0';

  printf("Prompt an operation (<a> <operator> <b>): ");
  scanf("%f %c %f", &a, &o, &b);

  if (o == '/') {
   c = a / b; 
  } else if (o == '*') {
    c = a * b;
  } else if (o == '+') {
    c = a + b;
  } else if (o == '-') {
    c = a - b;
  } else {
    printf("Unknown operator: %c\n", o);
    return 1;
  }

  printf("%f %c %f = %f\n", a, o, b, c);

  return 0;
}

