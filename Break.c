#include<stdio.h>
#include<stdlib.h>

void main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
        if (i == 5)
            break;
    }
    printf("Came outside of loop i = %d", i);

}
