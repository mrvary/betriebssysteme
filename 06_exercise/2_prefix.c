#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *repeat(char *text);

int main() {

    repeat("asdf");

    return 0;
}

/*

0 5 - 5
01 5 - 4
012 5 - 3
0123
01234

*/

char *repeat(char *text) {
    int length = strlen(text);
    // actually bigger as needed
    char *result = malloc(sizeof(char) * length * length);
    char *current = result;

    for (int i = 0; i < length; ++i) {
        for (int j = 0; j <= i; ++j) {
            //printf("n");
            printf("%c", *(text + j));
        }
        printf("\n");
    }
    
    return result;
}
