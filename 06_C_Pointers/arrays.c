#include <stdio.h>

int main( void ) {
  char input[255];
  input[5] = 'c';
  char *pe1 = input;
  char *pe2 = &input[0];
  char e = *input;

  printf("%c\n", input[5]);
  printf("%c\n", *(input+5));
  printf("%c\n", *(pe1+5));

  return 0;
}