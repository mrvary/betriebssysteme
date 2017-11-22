#include <stdio.h>

int fibo(int num)
{
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return fibo(num - 1) + fibo(num - 2);
    }
}

int main(void)
{
    int userInput;

    do {
        printf("Calculate nth Fibonacci number (n > 0): ");
        scanf("%d", &userInput);
    } while (userInput < 1);

    int result = fibo(userInput);
    printf("Result: %d\n", result);

    return 0;
}

