#include <stdio.h>

typedef struct fraction {
    int divisor;
    int dividend;
} Fraction;

void readFraction(Fraction *fraction);
void printFraction(Fraction *fraction);

int main() {
    Fraction fr;
    readFraction(&fr);
    printFraction(&fr);
    return 0;
}

void readFraction(Fraction *fraction) {
    printf("Please enter a fraction.\nDividend: ");
    scanf("%d", &(fraction->dividend));

    printf("Divisor: ");
    scanf("%d", &(fraction->divisor));
}

void printFraction(Fraction *fraction) {
    printf("---> %d/%d\n", fraction->dividend, fraction->divisor);
}
