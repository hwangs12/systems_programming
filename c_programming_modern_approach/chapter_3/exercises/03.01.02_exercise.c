/**
 * Write calls of printf that display a float variable x in the following formats.
 * 
 * a) Exponential Notation; left-justified in a field of size 8; one digit after the decimal point;
 * %-8.1e
 * b) Exponential Notation: right-justified in a field of size 10; six digits after the decimal point
 * %10.6e
 * c) Fixed decimal notation: left-justified in a field of size 8; three digits after the decimal point.
 * %-8.3f
 * d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal point.
 * %6.0f
 * 
 */

#include <stdio.h>

int main(void)
{
    float a, b, c, d;
    a = 1.2435293729;
    printf("%-8.1e\n",a);
    b = 12.24;
    printf("%10.6e\n",b);
    c = 1.243529;
    printf("%-8.3f\n",c);
    d = 12.43;
    printf("%6.0f\n",d);
}