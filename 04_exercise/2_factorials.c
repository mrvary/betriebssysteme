#include <stdio.h>
#include <stdlib.h>

int recursiveFactorial(int num)
{
    if (num == 1) {
        return 1;
    } else {
        return num * recursiveFactorial(num - 1);
    }
}

int iterativeFactorial(int num, int result)
{
    if (num == 1) {
        return result;
    } else {
        int new_result = num * result;
        return  iterativeFactorial(num - 1, new_result);
    }
}

int main(int argc, char *argv[])
{
    int userInput = atoi(argv[1]);

    printf("%d\n", recursiveFactorial(userInput));
    printf("%d\n", iterativeFactorial(userInput, 1));

    return 0;
}
