#import <stdio.h>

int main (void) {
  int a = 1;
  int *pa = &a;
  *pa = 2;

  printf("a = %d\n", a);
  printf("&a = %p\n", &a);
  printf("pa = %p\n", pa);
  printf("*pa = %d\n", *pa);

  return 0;
}