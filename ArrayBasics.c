#include <stdio.h>

int main()
{
    int avg, i, sum = 0;
    int marks[n]; /* array declaration */
    for (i = 0; i <= 4; i++)
    {
        printf("Enter marks ");
        scanf("%d", & marks[i]); /* store data in array */
    }
    for (i = 0; i <= 4; i++)
        sum = sum + marks[i]; /* read data from an array*/
    avg = sum / 5;

    return 0;
}
