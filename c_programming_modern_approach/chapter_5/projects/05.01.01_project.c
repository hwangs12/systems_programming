/**
 * Write a program that calculates how many
 * digits a number contains:
 *
 * Enter a number: 374
 * The number 374 has 3 digits
 */

#include <stdio.h>

int main(void)
{
    int input;
    int digit_count = 0;
    printf("Enter a number: ");
    scanf("%d", &input);
    int input_copy = input;
    while (input_copy > 0) {
        input_copy /= 10;
        digit_count++;
    }

    printf("The number %d has %d digits", input, digit_count);

    return 0;
}