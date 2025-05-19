/**
 * Write a program that computes the volume
 * of a sphere with a 10-meter radius
 * using the formula v=4/3*pi*r^3
 * 
 * Write the fraction 4/3 as 
 * 4.0f/3.0f
 */

#include <stdio.h>
#include <math.h>

int main(void)
{   
    printf("%f\n", 4.0f/3.0f);
    printf("%f\n", 4/3);
    printf("%f\n", 4.0f/3.0f * 1000 * M_PI);
    printf("%f", 4/3 * 1000 * M_PI);
    return 0;
}