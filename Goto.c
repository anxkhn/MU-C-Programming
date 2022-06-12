#include<stdio.h>

void main()
{
    int n;
    again:
        printf("Enter a number greater than hundred: ");
    scanf("%d", & n);
    if (n < 100)
        goto again;
    printf("Number = %d", n);
}
