/**
 * format user entered phone number (xxx) xxx-xxxx
 * into xxx.xxx.xxxx
 */

#include <stdio.h>

int main(void)
{
    int area_code, mid_number, last_number;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area_code, &mid_number, &last_number);

    printf("%03d.%03d.%04d", area_code, mid_number, last_number);
    return 0;
}