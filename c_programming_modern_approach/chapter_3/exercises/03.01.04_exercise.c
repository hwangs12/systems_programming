/**
 * for scanf("%d%f%d", &i, &x, &j),
 * if the user enters 10.3 5 6
 * what will be the value of i, x and j after the call? 10, 0.3 5
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);


    return 0;
}