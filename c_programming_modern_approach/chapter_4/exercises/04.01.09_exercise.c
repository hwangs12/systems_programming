/**
 *
 * Show the output produced by each of the following
 * program
 *
 *
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 7; j = 8;
    i *= j + 1;
    if (i == 63) {
        printf("predictions match 1\n");
    }

    i = j = k = 1;
    i += j += k;
    if (j == 2 && i == 3) {
        printf("predictions match 2\n");
    }

    i = 1; j = 2; k = 3;
    i -= j -= k;
    if (j == -1 && i == 2) {
        printf("predictions match 3\n");
    }

    i = 2; j = 1; k = 0;
    i *= j *= k;
    if (i == 0 && j == 0) {
        printf("predictions match 4\n");
    }


}