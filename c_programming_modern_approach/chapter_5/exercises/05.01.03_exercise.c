/**
 * show the output
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 3; j = 4; k = 5;
    printf("(a) %d\n", i < j || ++j < k);
    // 3 < 4 == 1
    // ++j < k short circuited
    // not evaluated
    // 1
    printf("(a) %d %d %d\n", i, j, k);
    // 3, 4, 5

    i = 7; j = 8; k = 9;
    printf("(b) %d \n", i = 7 && j++ < k);
    // i = 1 j++ < k 8 was used

    i = 1; j = 1; k = 1;
    printf("(c) %d \n", ++i || ++j && ++k);
    printf("(c) %d %d %d \n", i, j, k);
    // not sure if textbook says but 
    // && has higher precedence than ||
    // 1 and 2, 1, 1
}