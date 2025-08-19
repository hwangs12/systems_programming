/**
 * Modify the broker.c program of
 * Section 5.2 by making both of the
 * following changes:
 *
 * (a) Ask the user to enter the number of
 * shares and the price per share
 * (b) Add statements that compute the
 * commission charged by a rival broker
 *
 */

#include <stdio.h>

int main(void)
{
    float commission, price_per_share, value, competitor_comm;
    int num_shares;
    printf("Enter the number of shares: ");
    scanf("%d", &num_shares);
    printf("Enter the price per share: ");
    scanf("%f", &price_per_share);

    value = price_per_share * num_shares;

    if (value < 2500.00f)
    {
        commission = 30.00f + .017f * value;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + .0066f * value;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + .0034f * value;
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + .0022f * value;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + .0011f * value;
    }
    else
    {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n", commission);

    if (num_shares < 2000) {
        competitor_comm = 33.00f + .03f * num_shares;
    } else {
        competitor_comm = 33.00f + .02f * num_shares;
    }

    printf("Competitor's Commission: $%.2f\n", competitor_comm);

    return 0;
}