#import <stdio.h>
#import <string.h>
#import <stdbool.h>

int main(void) 
{
  char input[255];
  bool active = true;
  char ch;
  int lastMarker = -1;
  int firstMarker = -1;

  printf("Please enter a String: ");
  fgets(input, 255, stdin);
  int len = strlen(input);

  // count markers
  for (int i = 0; i < len; ++i) 
  {
    ch = input[i];
    if (ch == 33) {
      if (firstMarker == -1) {
        firstMarker = i;
      } else {
        lastMarker = i;
      }
    }
  }
  // with 1 marker = ende is last char..TODO
  for (int i = 0; i < len; ++i) {
    ch = input[i];
    if (i == firstMarker) {
      active = false;
    } else if (i == lastMarker) {
      active = true;
    } else if ( ch < 123 && ch > 96 && active) {
      ch -= 32;
    } else if ( ch < 97 && ch > 64 && active) {
      ch += 32;
    }
    input[i] = ch;
  }

  printf("Result: %s", input);

  return 0;
}