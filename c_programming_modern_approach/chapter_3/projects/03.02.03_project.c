/**
 * Let user enter ISBN and dissect it by
 * GS1 prefix
 * Group Identifier (language)
 * Publisher Code
 * Item Number
 * Check digit
 * ex) 978-0-393-97950-3
 * 978
 * 0
 * 393
 * 97950
 * 3
 */

#include <stdio.h>

int main(void)
{
    int gs1, gi, pc, in, cd;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &gi, &pc, &in, &cd);
    printf("GS1 prefix: %d \n", gs1);
    printf("Group identifier: %d \n", gi);
    printf("Publisher code: %d \n", pc);
    printf("Item number: %d \n", in);
    printf("Check digit: %d \n", cd);
    return 0;
}