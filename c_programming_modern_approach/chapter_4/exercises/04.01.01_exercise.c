/**
 * Show the output
 */

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 5; j = 3;
    printf("%d %d\n", i / j, i % j); // prediction: "1 2"; result: match

    i = 2; j = 3;
    printf("%d\n", (i + 10) % 3); // prediction: "0"; result: match

    i = 7; j = 8; k = 9;
    printf("%d\n", (i + 10) % k / j); // % and / have same order precedence so it should be left to right hence prediction: 1; result: match

    i = 1; j = 2; k = 3;
    printf("%d", (i + 5) % (j + 2) / k); // prediction: 0; result: match
}