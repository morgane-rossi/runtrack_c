#include <stdio.h>

int power(int n, int pow)
{
    int result = 1 ;
    for (int i = 0 ; i < pow ; i++)
    {
        result = result * n ;
    }

    return result ;
}


int main()
{
    int res = power(500, 0);
    printf("%d\n", res);

    return 0 ;
}