#include <stdio.h>
int calsum(int a, int b, int c)
{
    int d;
    d = a + b + c;
    return (d);
}
int main() {
    int a, b, c, sum;
    printf("Enter any three numbers ");
    scanf("%d %d %d", & a, & b, & c);
    sum = calsum(a, b, c);
    printf("Sum = %d\n", sum);
    return 0;
}
