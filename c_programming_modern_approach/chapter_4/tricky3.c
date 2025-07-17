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
    
    return 0;
}