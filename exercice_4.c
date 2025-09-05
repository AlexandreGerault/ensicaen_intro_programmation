#include<stdio.h>

int main(void)
{
  int a,b,c = 0;

  scanf("%d %d", &a, &b);
  printf("A: %d\nB: %d\n", a, b);

  c = b;
  b = a;
  a = c;

  printf("A: %d\nB: %d\n", a, b);
}

