/**
 * Write a program that accepts a date from the user in the form
 * mm/dd/yyyy and then displays in the form yyyymmdd.
 */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d /%d /%d", &month, &day, &year);

    printf("%02d%02d%02d\n", year, month, day);

    return 0;
}