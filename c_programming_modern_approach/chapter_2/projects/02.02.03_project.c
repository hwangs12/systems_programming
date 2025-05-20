/**
 * Modify the program of Programming Project 2
 * so that it prompts the user to enter
 * the radius of the sphere.
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float radius;
    printf("Enter the radius of a sphere and we will calculate volume for you! Radius =>");
    scanf("%f", &radius);
    printf("Checking PI value: %f\n", M_PI);
    printf("Checking float operations: %f\n", 4.0f / 3.0f);
    printf("Checking int operations: %d\n", 4 / 3);
    printf("Correct Volume ---> %f\n", 4.0f / 3.0f * radius * radius * radius * M_PI); // f divided by f gives f.
    printf("Incorrect Volume ---> %f", 4 / 3 * radius * radius * radius * M_PI);       // 4/3 becomes integer 1
    return 0;
}