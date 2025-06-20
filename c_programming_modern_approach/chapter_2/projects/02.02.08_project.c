/**
 * Write a program that calculates the remaining balance on a loan after the first, second, and
 * third monthly payments:
 *
 * Enter amount of loan: 20000.00
 * Enter interest rate: 6.0
 * Enter monthly payment: 386.66
 *
 * Balance remaining after first payment: $19713.34
 * Balance remaining after second payment: $19425.25
 * Balance remaining after third payment: $19135.71
 */

#include <stdio.h>

int main(void)
{
    float loan;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    float interest;
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    float monthly_pay;
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);

    int months_paid = 3;
    while (months_paid--) {
        loan = loan * interest / 12 / 100 + loan - monthly_pay;
        printf("Balance remaining after first payment: $%.2f\n", loan);
    }
    
    return 0;
}