#include <stdio.h>
int main( )
{
    int num[5], i ;
    for ( i = 0 ; i <= 5 ; i++ )
    {
    num[ i ] = i ;
    printf("%d ", num[i]);
    }
    return 0 ;
}
