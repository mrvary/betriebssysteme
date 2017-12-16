#include <stdio.h>

float calcMean(int *array, int elements);

int main() {

    int values[] = {1, 2, 3, 4, 5, 6};

    int length = sizeof (values) / sizeof (values[0]);

    printf("%.2f\n", calcMean(values, length));

    return 0;
}

float calcMean(int *array, int elements) {

    float sum;
    for (int i = 0; i < elements; ++i) {
        sum += array[i];
    }

    return (sum / elements);
}