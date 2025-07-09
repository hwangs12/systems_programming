/**
 * Calculates a check digit
 *
 * Add 1st, 3rd, 5th, 7th, 9th, and 11th - A
 * Add 2nd, 4th, 6th, 8th, and 10th - B
 *
 * 9 - (((A*3 + B) - 1) % 10)
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, cd;

    printf("Enter the first (single) digit: ");
    scanf("%d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i6, &i7, &i8, &i9, &i10);
    printf("Check digit: ");
    scanf("%d", &cd);

    int total_A, total_B;
    int checkDigit;
    total_A = d + i2 + i4 + i6 + i8 + i10;
    total_B = i1 + i3 + i5 + i7 + i9;
    checkDigit = 9 - (((total_A * 3 + total_B) - 1) % 10);

    if (cd == checkDigit) {
        printf("Product valid");
    } else {
        printf("check digit computer to be %d", checkDigit);
        printf("Product invalid");
    }

    return 0;
}