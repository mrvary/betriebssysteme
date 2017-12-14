#include <stdio.h>

typedef struct fraction {
    int divisor;
    int dividend;
} Fraction;

void readFraction(Fraction *fraction);

int main() {
    Fraction fr;
    readFraction(&fr);
    printf("Result: %d/%d\n", fr.dividend, fr.divisor);
    return 0;
}

void readFraction(Fraction *fraction) {
    printf("Please enter a fraction.\nDividend: ");
    scanf("%d", &(fraction->dividend));

    printf("Divisor: ");
    scanf("%d", &(fraction->divisor));
}
