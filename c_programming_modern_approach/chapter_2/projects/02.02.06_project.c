/**
 * Modify the program of project 5 so the polynomial is evaluated
 * using the following formula
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 * Note that the modified program performs fewer multiplications.
 * This technique for evaluating polynomials is known as Horner's Rule
 */

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter the value for x: ");
    scanf("%d", &x);

    // ((((3x + 2)x - 5)x - 1)x + 7)x - 6
    printf("((((3x + 2)x - 5)x - 1)x + 7)x - 6 where x is %d equals %d.\n", x, ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    return 0;
}