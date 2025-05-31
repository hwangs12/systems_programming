/**
 * -Wall turns on all the most 
 * commonly used compiler warnings
 * it is recommended to use this option
 * 
 * FINDING ERRORS IN A PROGRAM
 * 
 * error shown was call to undeclared library 
 * function 'printf' with type 'int
 */

#include <stdio.h>

int
main (void)
{
    printf ("Two plus two is %d\n", 4);
    return 0;
}