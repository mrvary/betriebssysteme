#import <stdio.h>
#import <string.h>
#import <stdbool.h>

int main(void) 
{
  char input[255];
  bool active = true;
  char ch;
  int markers; // ! is a marker in this case

  printf("Please enter a String: ");
  fgets(input, 255, stdin);
  int len = strlen(input);

  // count markers
  for (int i = 0; i < len; ++i) 
  {
    ch = input[i];
    if (ch == 33) {
      markers++;
    }
  }
  // with 1 marker = ende is last char..TODO
  for (int i = 0; i < len; ++i) {
    ch = input[i];
    if (ch == 33) {
      active = !active;
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