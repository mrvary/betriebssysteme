#include <stdio.h>

void rotateLeft(char *text);

int main() {

    char string[] = "Hello";

    rotateLeft(string);

    printf("%s\n", string);
    return 0;
}

void rotateLeft(char *text) {
    char first = *text;

    while (*(text + 1) != '\0') {
        *text = *(text + 1);
        text++;
    }
    *text = first;
}
