#include <stdio.h>

int findPairs(int A[], int length, int k); 

int main() {

    int a[] = {1,5,9};
    printf("%d\n", findPairs(a, 3, 10));
    return 0;
}

int findPairs2(int A[], int length, int k) {
    int count = 0;
    int checks = 0;

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            if ((A[i] + A[j]) == k) {
                count++;
            }
            checks++;
        }
    }
    printf("%d\n", checks);

    return count;
}

int findPairs(int A[], int length, int k) {
    int count = 0;
    int checks = 0;

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < length; ++j) {
            if ((A[i] + A[j]) == k) {
                count++;
            }
            checks++;
        }
    }
    printf("%d\n", checks);

    return count;
}