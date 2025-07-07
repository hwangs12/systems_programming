/**
 * What output do the following calls
 * of printf produce?
 * 
 * 
 */
#include <stdio.h>

int main(void)
{
    printf("%6d,%4d\n", 86, 1040); 
    /**
     *----86,1040
     */
    printf("%12.5e\n", 30.253); // 12 means number of total chars is 12 including dot and e and + and white space
    /**
     * 3.02530e+01
     */
    printf("%.4f\n", 83.162);
    /**
     * 83.1620
     */
    printf("%-6.2g\n", .0000009979);
    /**
     * prediction: 10.0e-7 actual: 1e-06
     */
    return 0;
}