/**
 * Write a program that accepts a date from the user in the form
 * mm/dd/yyyy and then displays in the form yyyymmdd.
 */

#include <stdio.h>

unsigned int StrLen(char *str) {
    unsigned int len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}

int main(void)
{
    char month[3];
    char day[3];
    char year[5];
    char temp;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%2[^/]/%2[^/]/%4s", month, day, year);

    if (StrLen(month) == 1) {
        month[1] = month[0];
        month[0] = '0';
        month[2] = '\0';
    }

    if (StrLen(day) == 1) {
        day[1] = day[0];
        day[0] = '0';
        day[2] = '\0';
    }

    printf("%d\n", StrLen(year));
    printf("%d\n", StrLen(month));
    printf("%d\n", StrLen(day));
    printf("%s%s%s\n", year, month, day);

    return 0;
}