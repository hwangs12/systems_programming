/**
 * For each of the following pairs of scanf format strings, indicate whether or not the two
 * strings are equivalent. If they're not, show how they can be distinguished.
 *
 * a) "%d" vs " %d" - equivalent -> matches the same regardless of input especially white space in the beginning is ignored on both cases
 * b) "%d-%d-%d" vs "%d -%d -%d" -> first one terminates with input "13 -13 -13" only matching the first.
 * c) "%f" vs "%f " -> first one terminates second one does not terminate unless another non-white-space is entered.
 * d) "%f,%f" vs "%f, %f" -> equivalent
 */

// testing b and c
#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d-%d-%d", &a, &b, &c);

    printf("%d --- %d --- %d\n", a, b, c);

    float d, f;
    scanf("%f,%f", &d, &f);
    float g, h;
    scanf("%f, %f", &g, &h);
    if (f == h) {
        printf("they may be equivalent");
    } else {
        printf("they are not equivalent");
    }

    return 0;
}