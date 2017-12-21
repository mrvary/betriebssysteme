#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *repeat(char *text);

int main() {

    printf("%s\n", repeat("asdf"));
    printf("%s\n", repeat("System"));

    return 0;
}

char *repeat(char *text) {
    int length = strlen(text);
    // actually bigger as needed
    char *result = malloc(sizeof(char) * length * length);
    int current = 0;

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j <= i; ++j) {
            result[current] = *(text + j);
            current++;
        }
    }
    
    return result;
}
