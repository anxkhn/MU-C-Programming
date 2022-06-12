#include<stdio.h>
int even_odd(int n);
void main()
{
    int n , flag;
    printf("\nGoing to check whether a number is even or odd");
    printf("\nEnter the number: ");
    scanf("%d", & n);
    flag = even_odd(n);
    if (flag == 1) {
        printf("\nThe number is odd");
    } if(flag==0)  {
        printf("\nThe number is even");
    }
}
int even_odd(int n)
{
    if (n % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

// exercise initiating 0 and else case again
