/**
 * Show val of var
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 5;
    j = ++i * 3 - 2;

    if (i == 6 && j == 16) {
        printf("your test passed. (a)\n");
    }

    i = 5;
    j = 3 - 2 * i++;
    if (i == 6 && j == -7) {
        printf("your test passed. (b)\n");
    }

    i = 7;
    j = 3 * i-- + 2;
    if (i == 6 && j == 23) {
        printf("your test passed. (c)\n");
    }

    i = 7;
    j = 3 + --i * 2;
    if (i == 6 && j == 15) {
        printf("your test passed. (d)\n");
    }

    return 0;
}