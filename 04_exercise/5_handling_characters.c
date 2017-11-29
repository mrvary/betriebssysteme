#import <stdio.h>
#import <string.h>
#import <stdbool.h>

  
int lastMarker = -1;
int firstMarker = -1;

void saveMarker(int index) 
{
    if (firstMarker == -1) {
      firstMarker = index;
    } else {
      lastMarker = index;
    }
}

void countMarkers(char input[]) 
{
  char ch;
  int len = strlen(input);
  for (int i = 0; i < len; ++i) 
  {
    ch = input[i];
    if (ch == 33) {
      saveMarker(i);
    }
  }
}

char changeCase(char c)
{
  if (c < 123 && c > 96) {
    c -= 32;
  } else if (c < 97 && c > 64) {
    c += 32;
  }
  return c;
}

void convert(char sentence[]) 
{
  char ch;
  bool active = true;
  int len = strlen(sentence);

  for (int i = 0; i < len; ++i) {
    ch = sentence[i];
    if (i == firstMarker) {
      active = false;
    } else if (i == lastMarker) {
      active = true;
    } else if (active) {
      sentence[i] = changeCase(sentence[i]);
    } 
  }
}

int main(void) 
{
  char input[255];
  
  printf("Please enter a String: ");
  fgets(input, 255, stdin);
  
  countMarkers(input);
  convert(input);

  printf("Result: %s", input);

  return 0;
}