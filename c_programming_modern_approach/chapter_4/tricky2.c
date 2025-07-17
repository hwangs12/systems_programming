#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f;
    b = 1;
    c = 2;
    d = 3;
    e = 4;
    f = 5;

    a = b += c++ - d + --e / -f;

    printf("%d, %d, %d, %d, %d, %d", a, b, c, d, e, f);

    return 0;
}