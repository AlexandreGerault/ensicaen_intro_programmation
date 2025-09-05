#include <stdio.h>
int main() {
  int int_size, float_size, double_size, char_size;

  int_size = sizeof(int);
  float_size = sizeof(float);
  double_size = sizeof(double);
  char_size = sizeof(char);

  printf("\
Size of int: %d Bytes\n\
Size of float: %d Bytes\n\
Size of double: %d Bytes\n\
Size of char: %d Bytes\n",
         int_size, float_size, double_size, char_size);
}

