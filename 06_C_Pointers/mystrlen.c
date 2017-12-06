#include <stdio.h>

int myStrlen( char *a ) {
  char *x = a;
  while( *x != '\0') {
    x++;
  }

  return x - a;
}

int main( void ) {
  char input[255];
  scanf("%s", input);
  printf("Length: %d\n", myStrlen(input));
  return 0;
}