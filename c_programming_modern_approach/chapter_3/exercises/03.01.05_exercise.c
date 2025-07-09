/**
 * Suppose that we call scanf as follows
 * scanf("%f%d%f", &x, &i, &y);
 * If the user enters
 * 12.3 45.6 789
 * what will be the value of x, i ,y? 
 * 12.3 45 0.6
 */

#include <stdio.h>

int main(void)
{
    float x, y;
    int i;

    scanf("%f%d%f", &x, &i, &y);

    return 0;
}