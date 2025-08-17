/**
 * Is the following if statement legal?
 * YES
 * 
 * what does it evaluate to?
 * if n is 1, n >= 1 is 1
 * hence 1<=10 is 1;
 * printing the statement
 * the statement is not true though
 */

#include <stdio.h>

int main(void)
{
    int n = 0;
    if (n >= 1 <= 10) {
        printf("n is between 1 and 10\n");
    }
}