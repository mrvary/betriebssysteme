#include <stdio.h>

int countDiffs( char *text1, char *text2 );

int main() {

  printf("%d\n", countDiffs("Test", "Teste")); //-1
  printf("%d\n", countDiffs("Test", "Test")); //0
  printf("%d\n", countDiffs("Hello", "HEllo")); //1
  printf("%d\n", countDiffs("World", "workd")); //2

  return 0;
}

int countDiffs( char *text1, char *text2 ) {

  int result = 0;
  char *current1 = text1;
  char *current2 = text2;

  while (*current1 != '\0' && *current2 != '\0') {
    if ( *current1 != *current2 ) {
      result++;
    }
    current1++;
    current2++;
  }

  if (*current1 != '\0' || *current2 != '\0') {
    result = -1;
  }

  return result;
}