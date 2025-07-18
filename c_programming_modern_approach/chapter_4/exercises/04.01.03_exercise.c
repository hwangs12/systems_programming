/**
 *
 * What is the value of each of the following
 * expressions in C89?
 *
 * 8 % 5    prints 3
 * -8 % 5   prints -3
 * 8 % -5   prints 3
 * -8 % -5  prints -3
 */

#include <stdio.h>

int main(void)
{
    printf("%d\n",8 % 5);
    printf("%d\n",-8 % 5);
    printf("%d\n",8 % -5);
    printf("%d\n",-8 % -5);

    return 0;
}