#include<stdio.h>

void main()
{
    int no, temp, rem, sum;
    printf("Three digit armstrong numbers are: \n");
    for (no = 1; no <= 1000; no++)
    {
        temp = no;
        sum = 0;
        while (temp > 0) {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if (no == sum)
            printf("%d\n", no);
    }
}
