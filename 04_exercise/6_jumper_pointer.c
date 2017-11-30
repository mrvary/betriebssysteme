#import <stdio.h>

int successfulJumps(int array[], int size)
{
  int successfulJumps = 0;
  int pointer = 0;
  int visited = size + 1;
  int tempPointer;

  while (1) {
    successfulJumps++;
    tempPointer = pointer + array[pointer];

    if (array[pointer] == visited) {
      successfulJumps = -1;
      break;
    }
    if (tempPointer < 0 || tempPointer > size - 1) {
      break;
    }

    array[pointer] = visited;
    pointer = tempPointer;
  }

  return successfulJumps;
}

int main()
{
  int A[] = {2, 3, -1, 2, -1};
  int sizeA = sizeof(A)/sizeof(A[0]);
  int B[] = {2, 3, -1, 2, -2};
  int sizeB = sizeof(B)/sizeof(B[0]);

  printf("Successful jumps for {2, 3, -1, 2, -1}: %d\n", successfulJumps(A, sizeA));
  printf("Successful jumps for {2, 3, -1, 2, -2}: %d\n", successfulJumps(B, sizeB));

  return 0;
}