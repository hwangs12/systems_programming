/**
 * Extend the program in programming
 * project 1 to handle three-digit numbers.
 */

#include <stdio.h>

int revertTwoDigit(int num) {
    return num % 10 * 10 + num / 10;
}

int main(void)
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    num = revertTwoDigit(num % 100) * 10 + num / 100;
    printf("The reversal is: %d", num);

    return 0;
}