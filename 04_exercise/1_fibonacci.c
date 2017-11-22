#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[])
{
    int result;
    int userInput;

    if ( argc == 2) {
        userInput = atoi(argv[1]);
        result =  fibo(userInput);
        printf("Result: %d\n", result);
    } else {
        printf("ERROR! Please provide only 1 Argument!");
    }

    return 0;
}

