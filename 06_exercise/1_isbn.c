#include <stdio.h>
#include <string.h>

int checkIsbn(char *c);
int checkISBN(char *c);

int main() {

    printf("invalid: %d\n", checkIsbn("030----6406157"));
    printf("valid: %d\n", checkIsbn("030--640-61-58"));
    printf("invalid: %d\n", checkIsbn("0-30-64--06152"));
    printf("invalid: %d\n", checkIsbn("030640-6-1-5-3"));

    return 0;
}

int checkIsbn(char *c) {

    int sum;
    for (int i; i < 14; ++i) {
        if (*c != '-') {
            sum += (*c) - 48;
        }
        c++;
    }
    return (sum % 11) != 0;
}