#include <stdio.h>

int overflow(int input) {
  static int S;
  int didOverflow = 0;

  S += input;
  if (S >= 10) {
    S = S % 10;
    didOverflow = 1;
  }

  return didOverflow;
}
int main(void) {
  printf("%d\n", overflow(5)); // S = 5; Rückgabe 0
  printf("%d\n", overflow(6)); // S = 1; Rückgabe 1
  printf("%d\n", overflow(12)); // S = 3; Rückgabe 1
  printf("%d\n", overflow(7)); // S = 0; Rückgabe 1
  printf("%d\n", overflow(2)); // S = 2; Rückgabe 0
}
    
