#include <stdio.h>

typedef struct fraction {
    int divisor;
    int dividend;
} Fraction;

void readFraction(Fraction *fraction);
void printFraction(Fraction *fraction);
Fraction *addFractions(Fraction *first, Fraction *second);
int compareFractions(Fraction *first, Fraction *second);
int ggt(int a, int b);

int main() {
    Fraction fr1;
    Fraction fr2;
    readFraction(&fr1);
    readFraction(&fr2);
    printf("%d\n", compareFractions(&fr1, &fr2));

    // printf("%d\n", ggt(24, 12));

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

// Fraction *addFractions(Fraction *first, Fraction *second) {

// }

int compareFractions(Fraction *first, Fraction *second) {
    int equal;
    if (first->dividend == second->dividend && first->divisor == second->divisor) {
        equal = 0;
    } else {
        equal = 1;
    }
    return equal;
}

int ggt(int a, int b) {
    int divRest;
    while (b != 0) {
        divRest = a % b;
        a = b;
        b = divRest;
    }
    return a;
}