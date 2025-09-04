#include <stdio.h>
int main(void)
{
  int initial_capital, duration, rate = 0;
  float total = 1.0f;

  printf("Input <initial capital> <duration in years> <rate>: ");
  int number_of_successful_conversions = scanf("%d %d %d", &initial_capital, &duration, &rate);

  if (number_of_successful_conversions != 3) {
    printf("An error occured while parsing input\n");
  }

  for (int i = 0; i < duration; i++)
  {
    total = total * (1 + ((float) rate / 100));
  }

  total = total * initial_capital;

  printf("The new capital after %d years is %.2f €\n", duration, total);

  return 0;
}
