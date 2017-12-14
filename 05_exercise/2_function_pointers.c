#include <stdio.h>

void printString(char *c);
void printStringLength(char *c);

int main() {
    char string[] = "Das ist ein Teststring";
    printString(string);

    char *string2 = "Das hier auch";
    printString(string2);

    char *string3 = "hallo";
    printStringLength(string3);

    return 0;
}

void printString(char *c) {
    for (int i = 0; c[i] != '\0'; i++) {
        printf("%c", c[i]);
    }
    printf("\n");
}

void printStringLength(char *c) {
    int counter = 0;
    for (int i = 0; c[i] != '\0'; i++) {
        counter++;
    }
    printf("%d\n", counter);
}