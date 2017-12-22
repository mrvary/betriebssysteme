#include <stdio.h>

int countLetter( char *text, char letter );

int main() {

  printf("%d\n", countLetter("hello", 'l')); //2
  printf("%d\n", countLetter("Hello", 'h')); //0

  return 0;
}

int countLetter( char *text, char letter ) {

  int count = 0;
  char *current = text;

  while (*current != '\0') {
    if (*current == letter) {
      count++;
    }
    current++;
  }

  return count;
}


