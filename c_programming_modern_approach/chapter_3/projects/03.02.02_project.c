/**
 * Write a program that formats product information entered by the user
 * A session with the programs should look like this
 *
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 * Item             Unit            Purchase
 *                  Price           Date
 * 583              $ 13.50         10/24/2010
 *
 * The item number should be left justified; the unit price should be right justified
 * Allow dollar amounts up to $9999.99. Use tabs to line up the columns.
 */

#include <stdio.h>

int main(void)
{
    int item_number;
    float unit_price;
    int month, day, year;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    do {
        printf("Enter unit price: ");
        scanf("%f", &unit_price);
    } while (unit_price > 9999.99f); // keep repeat until user input number less than or equal to 9999.99
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d /%d /%d",&month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%02d/%02d/%d", item_number, unit_price, month, day, year);
}