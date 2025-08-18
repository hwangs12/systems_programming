/**
 * Write a program that asks the user
 * for a 24 hour time
 * then displays the time in 12 hour
 *
 * Enter a 24 hour time: 21:11
 * Equivalent 12 hour time: 9:11 PM
 *
 * Be careful not to dispaly 12:00 as 0:00
 */

#include <stdio.h>

int main(void)
{
    int hour;
    int minute;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    if (hour > 12) {
        hour %= 12;
        printf("Equivalent 12-hour time: %d:%d PM", hour, minute);
    } else if (hour < 12) {
        printf("Equivalent 12-hour time: %d:%d AM", hour, minute);
    } else {
        printf("Equivalent 12-hour time: %d:%d PM", hour, minute);
    }

    return 0;
}