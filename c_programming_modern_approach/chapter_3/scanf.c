#include <stdio.h>

int main(void) {
    // scanf function

    int i, j;
    float x, y;

    // scanf("%d%d%f%f", &i, &j, &x, &y);
    // printf("%d   %d     %f   %f", i, j, x, y);

    // scanf can actually do much more than indicated

    // it is essentially a pattern matching that tries to match up groups of input chars with conversion specifications

    // like the printf, scanf is controlled by the format string

    // when it is called, scanf begins processing the information inteh string, starting at the left.
    
    // for each conversion specification in the format string, scanf tries to locate an item of the appropraite type in the input data

    // skipping blank space if necessary.

    // scanf then reads the item, stopping when it encounters character that can't possibly belong to the item. 

    // if the item was read successfully scanf continues processing the rest of the format string

    // if any item is not read successfully, scanf returns immeidately without looking at the rest of the format string

    // as it searches for the beginning of a number, scanf ignores white-space chars (space, horizontal and vertical tab, form-feed, and new -line characters).

    // scanf("%d%d%f%f", &i, &j, &x, &y);
    scanf("%d %d ", &i, &j); // putting space or newline character will hang the program
    // because it skip to the next non-white-space character.

        

    
    return 0;
}