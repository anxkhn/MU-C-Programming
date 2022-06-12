#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100];
  	int i, len, flag;
  	flag = 0;

  	printf("\n Please enter any String :  ");
  	gets(str);

  	len = strlen(str);

  	for(i = 0; i < len/2; i++)
	{
		if(str[i] != str[len - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		printf("\n %s is a Palindrome.", str);
	}
	else
	{
		printf("\n %s is not a Palindrome.", str);
	}

  	return 0;
}
