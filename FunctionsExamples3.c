#include <stdio.h>

int calsum(int x, int y, int z);
int main() {
    int a, b, c, sum;
    printf("Enter any three numbers ");
    scanf("%d %d %d", & a, & b, & c);
    sum = calsum(a, b, c);
    printf("Sum = %d\n", sum);
    return 0;
}
int calsum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return (d);
}
