#include <stdio.h>
int main (void)
{
    int number = 10;
    float price = 9.99;
    printf("%+010d\n", number);
    printf("%8.2f\n", price);
    printf("%s\n", "Hello World");
    printf("%d"+1, number);
    return 0;
}
