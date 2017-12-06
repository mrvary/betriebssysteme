#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int foo( int (*f)(), int modulo) {
  int r = f();
  return r % modulo; 
}

int main( void ) {
  srand(time(NULL));   
  printf("%d\n", foo(rand, 100));
  return 0;
}