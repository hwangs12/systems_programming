/**
 * Write a program that asks the user
 * to enter a dollars-and-cents amount
 * then displays the amount with 5%
 * tax added
 *
 * Enter an amount: xxx
 * With tax added: yyy
 */

#include <stdio.h>

int main(void)
{
    float dollar;
    printf("Enter the dollar amount: ");
    scanf("%f", &dollar);

    printf("The total is %f after tax.\n", dollar*1.05f);
    printf("The total is %f after tax.\n", dollar*1.05);
    return 0;
}