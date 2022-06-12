#include<stdio.h>

void sum();
void main() {
    printf("\nGoing to calculate the sum of two numbers:");
    sum();
    printf("The sum is %d,d")
}
void sum() {
    int a, b;
    printf("\nEnter two numbers");
    scanf("%d %d", & a, & b);
    int d;
    d = a+b;
    // printf("The sum is %d", a + b);
}
