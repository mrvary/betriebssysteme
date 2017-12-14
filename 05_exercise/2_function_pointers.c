#include <stdio.h>

void printString(char *c);

int main() {
    char string[] = "Das ist ein Teststring";
    printString(string);

    char *string2 = "Das hier auch";
    printString(string2);

    return 0;
}

void printString(char *c) {
    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
    }
    printf("\n");
}