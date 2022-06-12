#include<stdio.h>
int fact(int n)
{
    if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
void main()
{
    int num;
    printf("Enter the number you want to find factorial: ");
    scanf("%d",&num);
    fact(num);
    printf("The factorial is %d.",fact(num));
}
