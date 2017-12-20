#include <stdio.h>
#include <string.h>

int checkIsbn(char* c);

int main() {

    printf("valid: %d\n", checkIsbn("0306406158"));
    printf("invalid: %d\n", checkIsbn("0306406157"));
    return 0;
}

int checkIsbn(char *c) {

    int sum;
    for (int i; i < 10; ++i) {
        sum += (*c) - 48;
        c++;
    }

    return !((sum % 11) == 0);
}