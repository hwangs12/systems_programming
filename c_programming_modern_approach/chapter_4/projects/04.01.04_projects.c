/**
 * Write a program that reads an integer
 * entered by the user and displays it
 * in octal 
 */

#include <stdio.h>

int main(void)
{
    int num;
    int remainder;
    int octal = 0;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);
    
    int firstDigit = num / 4096;
    num %= 4096;
    int secondDigit = num / 512;
    num %= 512;
    int thirdDigit = num / 64;
    num %= 64;
    int fourthDigit = num / 8;
    num %= 8;
    int fifthDigit = num;


    printf("In octal, your number is: %d%d%d%d%d\n", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);

    int decimal;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    fifthDigit = decimal % 8;
    decimal /= 8;
    fourthDigit = decimal % 8;
    decimal /= 8;
    thirdDigit = decimal % 8;
    decimal /= 8;
    secondDigit = decimal % 8;
    decimal /= 8;
    firstDigit = decimal;

    printf("In octal, your number is: %d%d%d%d%d\n", firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit);

    /* LOOP IT */
}