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
    printf("Value in scientific notation: %.3e\n", value);
    printf("Value in scientific notation: %1.-1e\n", value);
    
    // using g specifier
    float val = 12345.6783928f;
    printf("Value in scientific notation: %g\n", val);
    val = 1.2938f;
    printf("Value in scientific notation: %g\n", val);
    val = 1.29383927f;
    printf("Value in scientific notation: %g\n", val);
    
    return 0;
}