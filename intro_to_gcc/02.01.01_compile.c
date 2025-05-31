/**
 * -Wall turns on all the most 
 * commonly used compiler warnings
 * it is recommended to use this option
 * 
 * FINDING ERRORS IN A PROGRAM
 * 
 * format specifies type 'double' 
 * but the argument has type 'int'
 */

#include <stdio.h>

int
main (void)
{
    printf ("Two plus two is %f\n", 4);
    return 0;
}