#include <stdio.h>

int main(void) {
    // scanf function

    int i, j;
    float x, y;

    scanf("%d%d%f%f", &i, &j, &x, &y);
    printf("%d   %d     %f   %f", i, j, x, y);

    // scanf can actually do much more than indicated

    // it is essentially a pattern matching that tries to match up groups of input chars with conversion specifications

    // like the printf, scanf is controlled by the format string

    // when it is called, scanf begins processing the information inteh string, starting at the left. 
    return 0;
}