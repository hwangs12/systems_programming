/**
 * i = 2; j = 3;
 * k = i * j == 6;
 * k is 1
 * 
 * i = 5; j = 10; k = 1;
 * printf("%d", k > i < j);
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
        printf("k is 1 as expected\n");
    }

    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j); // relation is left associative
    // k > i is 0 and 0 < 10 is 1

    /**
     * i = 5; j = 0; k = -5;
     * printf("%d", i && j || k);
     * result is 1
     * note ! has same precedence as unary plus and minus
     * && and || are left associative and lower
     * than that of the relational and 
     * equality
     */

     i = 5; j = 0; k = -5;
     printf("%d\n", i && j || k);
}