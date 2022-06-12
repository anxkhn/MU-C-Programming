#include<stdio.h>
void main()
{
	int n,r,c;
	printf("Enter N and R: ");
	scanf("%d%d",&n,&r);
	if(n<r)
		printf("N should be greater than R(ERROR)\n");
	c = fact(n)/(fact(r)*fact(n-r));

	printf("The value of  %dC%d is %d",n,r,c);

}
int fact(int n)
{
    if(n==0)
    return 1;

    return n*fact(n-1);
}
