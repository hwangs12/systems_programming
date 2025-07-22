/**
 * Solve for each val of var
 */

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 6;
    j = i += 1;

    if (i == 7 && j == 7) {
        printf("predictions match result for a)\n");
    }

    i = 5;
    j = (i -= 2) + 1;

    if (i == 3 && j == 4) {
        printf("predictions match result for b)\n");
    }

    i = 7;
    j = 6 + (i = 2.5);
    if (i == 2 && j == 8) {
        printf("predictions match result for c)\n");
    }

    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    if (j == 9 && i == 6) {
        printf("predictions match result for d)\n");
    }
}