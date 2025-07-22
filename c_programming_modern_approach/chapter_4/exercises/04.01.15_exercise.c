/**
 * give the values of i and j
 * after each of the following
 * has been executed.
 */

#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;
    i += j;
    if (i == 3 && j == 2) {
        printf("test pass for (a)\n");
    }

    i--;
    if (i == 2) {
        printf("test pass for (b)\n");
    }

    i * j / i;
    if (i == 2 && j == 2) {
        printf("test pass for (c)\n");
    }

    i % ++j;
    if (i == 2 && j == 3) {
        printf("test pass for (d)\n");
    }
}