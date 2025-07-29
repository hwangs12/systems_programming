/**
 * European countries use a 13-digit code
 * known as a European Article Number
 * instead of the 12-digit UPC
 * Each EAN ends with a check digit,
 * just as a UPC.
 *
 */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11;
    int check_digit;
    int user_input;
    int total_A;
    int total_B;
    printf("Enter the first 12 digits of a EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11);
    printf("Check digit: ");
    scanf("%d", &user_input);

    total_A = i1 + i3 + i5 + i7 + i9 + i11;
    total_B = d + i2 + i4 + i6 + i8 + i10;
    check_digit = 9 - (((total_A * 3 + total_B) - 1) % 10);

    if (check_digit == user_input)
    {
        printf("that is a valid EAN");
    }
    else
    {
        printf("uhoh that is fraudulent!!!");
    }

    return 0;
}