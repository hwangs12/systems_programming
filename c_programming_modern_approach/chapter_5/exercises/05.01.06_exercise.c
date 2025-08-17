/**
 * Is the following if statement legal?
 * If so, what does it do when n is equal to 5?
 * 
 */
#include <stdio.h>

int main(void)
{
    int n = 5;
    if (n == 1 - 10) {
        printf("n is between 1 and 10");
    }

    // if n is 5
    // arithmetic operation is higher than
    // equality
    // so, 1 - 10 is -9
    // and n == -9 is false so
    // there's not print statement

}