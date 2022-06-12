#include<stdio.h>

void main()
{
    int n, total = 0, i;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", & n);
        if (n > 99)
        {
            printf("Number is greater than 99\n");
            i--;
            continue;
        }
        total = total + n;
    }
    printf("Total = %d", total);
}
