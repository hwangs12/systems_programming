/**
 * Write a program that asks the user to enter
 * a value for x and then displays the value
 * of the following polynomial
 */

#include <stdio.h>

int main(void) {
    int x;
    printf("Enter the value for x: ");
    scanf("%d", &x);

    // 3x^5 + 2x^4 - 5x^3 + x^2 + 7x - 6
    printf("3x^5 + 2x^4 - 5x^3 + x^2 + 7x - 6 where x is %d equals %d.\n", x, 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);
    return 0;
}