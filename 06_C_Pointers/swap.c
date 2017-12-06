#include <stdio.h>
void swap( int *px, int *py ) {
  int temp = *px;
  *px = *py;
  *py = temp;
}

int main( void ) {
  int a,b;
  a = 1;
  b = 2;
  swap( &a, &b);

  printf("a: %d b: %d\n", a, b);

  return 0;
}