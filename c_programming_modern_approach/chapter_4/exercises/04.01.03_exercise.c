/**
 *
 * this includes answers for number 3, 4, 5, 6
 * 
 * What is the value of each of the following
 * expressions in C89?
 *
 * 8 % 5    is 3 in both c89 and c99, 3 in c99
 * -8 % 5   can be -3 or 2 in c89, -3 in c99
 * 8 % -5   can be 3 or -2 in c89, 3 in c99
 * -8 % -5  can be 2 or -3 in c89, -3 in c99
 * 8 / 5    is 1 in c89
 * -8 / 5   could be -1 or -2 in c89, -1 in c99
 * 8 / -5   could be -1 or -2 in c89, -1 in c99
 * -8 / -5  not sure since when author says either operand is negative,
 * whether it means specifically only one should be negative or both can be negative
 * 
 * 
 * weirdly in mac results are the same
 * in c89 and c99
 * 
 * let's check textbook and what it suggests
 * 
 * WAIT WAIT WAIT WAIT WAIT WAIT
 * C99 requires that when a/b is representable:
 * (a/b) * b + a%b shall equal a
 * 
 * C89 possibilities analysis
 * 8/5 is 1
 * 1 * 5 + 8%5 = 8
 * 8 % 5 should be 3
 * 
 * 8/-5 is -1 (C89 AND C99 SINCE RESULT SHOULD BE TRUNCATED TO 0)
 * (-1) * (-5) + 8%(-5) = 8
 * 8 % (-5) should be 3
 * 
 * 8/-5 is -2 (POSSIBLE IN C89)
 * (-2) * (-5) + 8 % (-5) = 8
 * 8 % (-5) should be -2
 * 
 * -8/-5 is 1 (C89 AND C99)
 * 1 * (-5) + (-8)%(-5) = -8
 * (-8) % (-5) should be -3
 */

#include <stdio.h>

int main(void)
{
    printf("%d\n",8 % 5);
    printf("%d\n",-8 % 5);
    printf("%d\n",8 % -5);
    printf("%d\n",-8 % -5);
    printf("%d\n",8 / 5);
    printf("%d\n",-8 / 5);
    printf("%d\n",8 / -5);
    printf("%d\n",-8 / -5);

    return 0;
}