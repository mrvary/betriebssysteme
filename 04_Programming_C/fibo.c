#include <stdio.h>

int fibo(int num)
{
    if (num == 1 || num == 2) {
        return 1;
    } else {
        return fibo(num - 1) + fibo(num - 2);
    }
}

int main(void)
{
    int userInput;

    printf("Calculate Fibonacci No.: ");
    scanf("%d", &userInput);

    int result = fibo(userInput);
    printf("Result: %d\n", result);

    return 0;
}

