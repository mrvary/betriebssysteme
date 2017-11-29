#import <stdio.h>

int main()
{
  int successfulJumps = 0;
  int pointer = 0;
  //int A[] = {2, 3, -1, 2, -1};
  int A[] = {2, 3, -1, 2, -2};
  int len = sizeof(A)/sizeof(A[0]);
  int visited = len + 1;
  int tempPointer;

  while (1) {
    successfulJumps++;
    tempPointer = pointer + A[pointer];

    if (A[pointer] == visited) {
      successfulJumps = -1;
      break;
    }
    if (tempPointer < 0 || tempPointer > len - 1) {
      break;
    }

    A[pointer] = visited;
    pointer = tempPointer;
  }

  printf("Successful jumps: %d\n", successfulJumps);

  return 0;
}