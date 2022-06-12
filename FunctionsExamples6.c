#include<stdio.h>

int sum();
void main() {
    int result;
    printf("\nGoing to calculate the sum of two numbers: ");\
    int a, b;
    printf("\nEnter two numbers");
    scanf("%d %d", & a, & b);
    result = sum(a,b);
    printf("%d", result);
}
int sum(int a, int b) {
    return (a + b);
}
