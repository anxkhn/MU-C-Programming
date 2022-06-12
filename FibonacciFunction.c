#include<stdio.h>
void fibo(int num)
{
    int a=0,b=1,c=a+b,i;
    printf("%d\t%d\t",a,b);
    for(i=1;i<=num-2;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
}
void main()
{
    int n;
    printf("Enter the size of fibonacci series: ");
    scanf("%d",&n);
    fibo(n);
}
