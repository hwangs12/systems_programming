/**
 *
 * If i and j are positive integers, does (-i)/j
 * always have the same value as -(i/j)?
 *
 */

#include <stdio.h>

int main(void)
{
    // if i is positive integer,
    // -i is negative
    // -i / j is negative

    // - (i/j) is also negative

    // are the results the same?
    // (i/j) will rounded down to a whole number

    // so -(5/3) will be -(1) hence -1

    // -i / j will rounded down to a negative number
    // so -5/3 will be -1.6 -> -2

    // so no the result won't be the same
    // let's test it out.
    int i = -1;
    int j = 2;

    printf("%d\n", -(i / j));
    printf("%d\n", -i / j);

    // in this compiler, the results are the same so my predictions are wrong

    // so it all depends on compiler

    // the textbook mentions it but also answer from stackoverflow

    /**
     * Pre-C99, it's possible because division of negative operands is implementation-defined; it can be algebraic division or round-towards-zero. C99 defines it to round-towards-zero.
     * For example, C89 allows (-1)/2 == -1, while C99 requires (-1)/2 == 0. In all cases, -(1/2) == 0.
     */
}