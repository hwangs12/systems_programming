#include <stdio.h>

int main(void)
{
    printf("%f %d\n", 3, 3.14);

    // using e
    double value = 12345.678;
    printf("Value in scientific notation: %e\n", value);
    printf("Value in scientific notation: %2.3e\n", value);
    printf("Value in scientific notation: %.3e\n", value);
    printf("Value in scientific notation: %1.-1e\n", value);
    return 0;
}