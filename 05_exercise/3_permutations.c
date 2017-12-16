#import <stdio.h>
#import <string.h>

int isPermutation(char *first, char *second);
void sort(char word[]);

int main() {
  printf("test and test2: %d\n", isPermutation("test", "test2"));
  printf("hello and lehho: %d\n", isPermutation("hello", "lehho"));
  printf("hello and lehol: %d\n", isPermutation("hello", "lehol"));

  return 0;
}

int isPermutation(char *a, char *b) {

  // copy string literals to arrays so the can be manipulated
  char first[200];
  strcpy(first, a);
  char second[200];
  strcpy(second, b);

  // sort the strings to make them comparable
  sort(first);
  sort(second);
  
  return strcmp(first, second) == 0;
}

// INSERTION SORT
void sort(char word[]) {
  int length = strlen(word);
  int value;
  int j;

  for (int i = 1; i < length; ++i) {
    value = word[i];
    j = i;
    while (j > 0 && word[j-1] > value) {
      word[j] = word[j - 1];
      j = j - 1;
    }
    word[j] = value;
  }
}