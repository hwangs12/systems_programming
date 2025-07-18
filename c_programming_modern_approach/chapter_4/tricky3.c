#include <stdio.h>

int main(void)
{
    int a;
    int b, c;
    for (int i = 0; i < 100000; i++) {
        a = 5;
        c = (b = a + 2) - (a = 1);
        printf("Value of c is ==> %d \n", c);
    }
    
    // please avoid using the assignment operators in subexpressions
    // above could be rewritten as
    a = 5;
    b = a + 2;
    a = 1;
    c = b - a;

    // another undefined behavior
    int i = 2;
    int j;
    j = i * i++;
    // it could be 4 but also could be 6 i++ evaluated first then multiplied by original value of i anything can happen

    // undefined behavior should be avoided like the plague

    // statment with no effect
    // i + j; no effect on either i or j
    // i = j; changes value of i to j;
    return 0;
}