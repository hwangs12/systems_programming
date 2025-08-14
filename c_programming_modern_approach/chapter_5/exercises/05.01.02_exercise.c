/**
 * Show output for each
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;
    i = 10;
    j = 5;

    printf("(a) %d\n", !i < j); // ! has precedence the same as unary plus minus
    // hence i is true, hence !i is false which is zero
    // hence 0 < 5 is true, producing 1;

    i = 2;
    j = 1;
    printf("(b) %d\n", !!i + !j);
    // i is true, hence, !!i is 1
    // j is true, hence, !j is 0
    // hence, 1 + 0 = 1;

    i = 5;
    j = 0;
    k = -5;
    printf("(c) %d\n", i && j || k);
    // i && j = true && false => hence false => hence 0
    // 0 || 1 is 1;

    i = 1; j = 2; k = 3;
    printf("(d) %d\n", i < j || k);
    // logical < relational for precedence
    // i < j => 1 < 2 => 1 
    // 1 || 3 => 1

}