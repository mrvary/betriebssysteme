#import <stdio.h>
#import <string.h>

int main(void) {
  char input[255];


  printf("Please enter a String: ");
  //fgets(input, 255, stdin);
  scanf("%[^\n]", input);
  // refactor out later on
  int len = strlen(input);
  for (int i = 0; i < len; ++i)
  {
    printf("%c\n", input[i]);
  }
  // refactor out later on
  printf("Result: %s\n", input);

  return 0;
}