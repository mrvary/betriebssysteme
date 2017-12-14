#include <stdio.h>
#include <stdlib.h>

typedef struct fraction {
    int divisor;
    int dividend;
} Fraction;

void readFraction(Fraction *fraction);
void printFraction(Fraction *fraction);
Fraction *addFractions(Fraction *first, Fraction *second);
int compareFractions(Fraction *first, Fraction *second);
Fraction *multiplyFractions(Fraction *first, Fraction *second);
int ggt(int a, int b);
void reduce (Fraction *fraction);

int main() {
    Fraction fr1;
    Fraction fr2;
    readFraction(&fr1);
    readFraction(&fr2);
    // printf("%d\n", compareFractions(&fr1, &fr2));

    Fraction *multiplication = multiplyFractions(&fr1, &fr2);
    // test if non-null
    if (multiplication) {
        printf("Multiplication: ");
        printFraction(multiplication);
        free(multiplication);
    }

    Fraction *addition = addFractions(&fr1, &fr2);
    // test if non-null
    if (addition) {
        printf("Addition: ");
        printFraction(addition);
        free(addition);
    }

    return 0;
}

void readFraction(Fraction *fraction) {
    printf("Please enter a fraction.\nDividend: ");
    scanf("%d", &(fraction->dividend));

    printf("Divisor: ");
    scanf("%d", &(fraction->divisor));
}

void printFraction(Fraction *fraction) {
    int diff = fraction->dividend > fraction->divisor;
    if (diff > 0) {
        printf("---> %d %d/%d\n", diff, fraction->dividend - fraction->divisor, fraction->divisor);
    } else {
        printf("---> %d/%d\n", fraction->dividend, fraction->divisor);
    }
}

Fraction *addFractions(Fraction *first, Fraction *second) {
    int dividend1 = first->dividend * second->divisor;
    int dividend2 = second->dividend * first->divisor;

    Fraction *result = malloc(sizeof(Fraction));
    result->dividend = dividend1 + dividend2;
    result->divisor = first->divisor * second->divisor;
    reduce(result);

    return result;
}

int compareFractions(Fraction *first, Fraction *second) {
    int equal;
    if (first->dividend == second->dividend && first->divisor == second->divisor) {
        equal = 0;
    } else {
        equal = 1;
    }
    return equal;
}

Fraction *multiplyFractions(Fraction *first, Fraction *second) {
    Fraction *result = malloc(sizeof(Fraction));
    result->dividend = first->dividend * second->dividend;
    result->divisor = first->divisor * second->divisor;
    reduce(result);

    return result;
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

void reduce (Fraction *fraction) {
    int divideBy = ggt(fraction->dividend, fraction->divisor);
    fraction->dividend /= divideBy;
    fraction->divisor /= divideBy;
}