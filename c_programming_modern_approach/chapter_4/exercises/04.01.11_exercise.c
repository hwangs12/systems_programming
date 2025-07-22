/**
 * Predict val of var
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 1;
    if ((i++ - 1) == 0) {
        printf("predictions match (a) 1\n");
    }
    if (i == 2) {
        printf("predictions match (a) 2\n");
    }

    i = 10; j = 5;
    if ((i++ - ++j) == 4) {
        printf("predictions match (b) 1\n");
    }
    if (i == 11 && j == 6) {
        printf("predictions match (b) 2\n");
    }

    i = 7; j = 8;
    if ((i++ - --j) == 0) {
        printf("predictions match (c) 1\n");
    }
    if (i == 8 && j == 7) {
        printf("predictions match (c) 2\n");
    }

    i = 3; j = 4; k = 5;
    if ((i++ - j++ + --k) == 3) {
        printf("predictions match (d) 1\n");
    }
    if (i == 4 && j == 5 && k == 4) {
        printf("predictions match (d) 2\n");
    }
}