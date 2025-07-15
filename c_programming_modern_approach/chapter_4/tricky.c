#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 1;
    j = 2;
    k = ++i + j++;

    printf("i, j, k values are %d, %d, %d", i, j, k);

    int l, m, n;

    l = 1;
    m = 2;
    n = l++ + m++;

    printf("i, j, k values are %d, %d, %d", l, m, n);
}