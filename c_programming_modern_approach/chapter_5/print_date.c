/**
 * Let's write a program that displays dates
 * in this form.
 *
 * Dated this ____ day of ____, 20__.
 *
 * We'll have the user enter the date
 * in month/day/year form,
 *
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int month, day, year;
    char month_str[15];
    printf("Enter date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &month, &day, &year);

    switch (month) {
        case 1:
            strncpy(month_str, "January", 15);
            break;
        case 2:
            strncpy(month_str, "February", 15);
            break;
        case 3:
            strncpy(month_str, "March", 15);
            break;
        case 4:
            strncpy(month_str, "April", 15);
            break;
        case 5:
            strncpy(month_str, "May", 15);
            break;
        case 6:
            strncpy(month_str, "June", 15);
            break;
        case 7:
            strncpy(month_str, "July", 15);
            break;
        case 8:
            strncpy(month_str, "August", 15);
            break;
        case 9:
            strncpy(month_str, "September", 15);
            break;
        case 10:
            strncpy(month_str, "October", 15);
            break;
        case 11:
            strncpy(month_str, "November", 15);
            break;
        case 12:
            strncpy(month_str, "December", 15);
            break;

    }

    printf("Dated this %dth day of %s, 20%.2d", day, month_str, year);
    return 0;
}