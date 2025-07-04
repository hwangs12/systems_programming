#include <stdio.h>

int main(void)
{
    printf("%f %d\n", 3, 3.14);
    printf("%d %1.4f\n", 3, 3.14);
    printf("%d %f\n", 3, 3.14);
    
    // using e
    double value = 12345.678;
    printf("Value in scientific notation: %e\n", value);
    printf("Value in scientific notation: %2.3e\n", value);
    printf("Value in scientific notation: %-2.3e\n", value);
    printf("Value in scientific notation: %.3e\n", value);
    // printf("Value in scientific notation: %1.-1e\n", value); warning!!! invalid conversion specifier
    
    // using g specifier
    float val = 12345.6783928f;
    printf("Value in scientific notation: %g\n", val);
    val = 1.2938f;
    printf("Value in scientific notation: %g\n", val);
    val = 1.29383927f;
    printf("Value in scientific notation: %g\n", val);
    double val1 = 127387181.29383927;
    printf("Value in scientific notation: %g\n", val1);
    val = 127387181.29383927f;
    printf("Value in scientific notation: %g\n", val);
    // return 0;  if you put return  here below will not execute. thanks return

    // awesome example from the book and what is |?
    int i;
    float x;
    
    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); // here minus used to right pad (occupy five space and right pad the value). m is space occupied and p is num digit to display
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x); // here what you notice is that these specifiers are for floats only 
    // above 10.3f -> 10 space right align 3 decimals trailing zero for free ones.
    // 10.3e -> 10 space use e 3 decimal points, right aligned
    // -10g -> 10 space no trailing zeros left align
    // let's stick to that. no doubles here. 
    // in float and int, - is left justified and plus is right justified


    // escape sequences
    // alert \a
    // backspace \b
    // new line \n
    // tab \t

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n\awowza\t\b\bhehe");
    return 0;

    
}