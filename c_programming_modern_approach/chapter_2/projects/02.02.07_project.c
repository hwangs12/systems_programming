/**
 * Write a program that asks the user to enter a U.S. dollar amount
 * and then shows how to pay that amount using the smallest number of
 * $20, $10, $5, and $1 bills
 *
 * Ex)
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 * $5 bills: 0
 * $1 bills: 3
 */

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a dollar amount: ");
    scanf("%d", &x);

    // ((((3x + 2)x - 5)x - 1)x + 7)x - 6
    int twenty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;
    while (x > 0) {
        if (x >= 20) {
            twenty++;
            x -= 20;
        } else if (x >= 10) {
            ten++;
            x -= 10;
        } else if (x >= 5) {
            five++;
            x -= 5;
        } else if (x >= 1) {
            one++;
            x -= 1;
        }
    }
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
    return 0;
}