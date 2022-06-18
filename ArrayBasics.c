#include <stdio.h>

void main()
{
    int i, sum = 0;
    float avg;
    int marks[5];
    for (i = 0; i <= 4; i++)
    {
        printf("Enter marks ");
        scanf("%d", & marks[i]); /* store data in array */
    }
    for (i = 0; i <= 4; i++)
    {
        sum = sum + marks[i]; /* read data from an array*/
    }
    avg = sum / 5;
    printf("Avg: %f", avg);
}
