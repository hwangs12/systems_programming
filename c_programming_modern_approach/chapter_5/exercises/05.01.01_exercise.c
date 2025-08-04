/**
 * i = 2; j = 3;
 * k = i * j == 6;
 * k is 0
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 2;
    j = 3;
    k = i * j == 6; // order of precedence? relational has lower than arithmetic so this
    // this is equal to ((i*j)==6)
    if (k == 1) {
        printf("k is 1 as expected");
    }
}