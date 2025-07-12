/**
 * Two of the most common operations on variable
 * are "incrementing" and "decrementing".
 *
 * i = i + 1;
 * j = j - 1;
 *
 * the compound assignment allow us to condense
 * i += 1;
 * j -= 1;
 *
 *
 */

int main(void)
{
    int i, j;

    /**
     * pre-increment
     */
    printf("i is %d\n", ++i); //prints 2;
    printf("i is %d\n", i);
    /**
     * post-increment
     */
    printf("i is %d\n", j++); //prints 1;
    printf("i is %d\n", j);
}

