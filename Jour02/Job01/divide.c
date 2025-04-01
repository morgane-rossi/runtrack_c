#include <stdio.h>

void divide(int* pointer)
{
    *pointer /= 2 ;
}

int main()
{
    int a = 41 ;
    divide(&a);
    printf("%d\n", a);
    return 0 ;
}