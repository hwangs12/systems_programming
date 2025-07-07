#include <stdio.h>

int main(void)
{
    int i, j;
    printf("Enter two numbers, separated by a comma: ");
    scanf("%d,%d", &i, &j);
    printf("hey you chose %d --- %d", i, j);
    return 0;
}