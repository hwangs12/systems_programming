#include <stdio.h>

int main()
{
    int num_passing = 0;
    int total_grades = 0;
    int grade = 8;
    while (grade != 9) {
        printf("Please input your grade : ");
        scanf("%d", &grade);
        switch (grade) {
            case 4: case 3: case 2: case 1:
                num_passing++;
            case 0: total_grades++;
                    break;
        }
    }

    printf("The total number of courses passed are %d.\n", num_passing);
    printf("The total grades are %d", total_grades);
}

