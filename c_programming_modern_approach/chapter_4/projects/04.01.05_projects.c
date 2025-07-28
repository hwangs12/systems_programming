/**
 * Rewrite the upc.c program of 4.1
 * so that the user enters 11 digits at one time,
 * instead of entering one digit
 * then five digits and then another five digits
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
    int check_digit;
    int user_input;
    int total_A;
    int total_B;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);
    printf("Check digit: ");
    scanf("%d", &user_input);

    total_A = d + i2 + i4 + i6 + i8 + i10;
    total_B = i1 + i3 + i5 + i7 + i9;
    check_digit = 9 - (((total_A * 3 + total_B) - 1) % 10);

    if (check_digit == user_input) {
        printf("that is a valid upc");
    } else {
        printf("uhoh that is fraudulent!!!");
    }

    return 0;
}