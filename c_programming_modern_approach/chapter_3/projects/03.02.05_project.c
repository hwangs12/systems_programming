/**
 * Write a program that lets user input numbers from 1 to 16 in any order.
 * Display it in 4x4 display sum of each row and column and diagonal
 */

#include <stdio.h>

int main(void)
{
    int i11, i12, i13, i14, i21, i22, i23, i24, i31, i32, i33, i34, i41, i42, i43, i44;

    int row1, row2, row3, row4;

    int col1, col2, col3, col4;

    int diag1, diag2;

    printf("Enter the numbers from 1 to 16 in any order: ");

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &i11, &i12, &i13, &i14, &i21, &i22, &i23, &i24, &i31, &i32, &i33, &i34, &i41, &i42, &i43, &i44);

    col1 = i11 + i21 + i31 + i41;
    col2 = i12 + i22 + i32 + i42;
    col3 = i13 + i23 + i33 + i43;
    col4 = i14 + i24 + i34 + i44;

    row1 = i11 + i12 + i13 + i14;
    row2 = i21 + i22 + i23 + i24;
    row3 = i31 + i32 + i33 + i34;
    row4 = i41 + i42 + i43 + i44;

    diag1 = i11 + i22 + i33 + i44;
    diag2 = i14 + i23 + i32 + i41;

    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
    printf("Col sums: %d %d %d %d\n", col1, col2, col3, col4);
    printf("Diagonal sums: %d %d", diag1, diag2);

    return 0;
    
}