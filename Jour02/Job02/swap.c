#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}

int main()
{
    int a = 42 ;
    int b = 13 ;
    swap(&a, &b);
    printf("a : %d - b : %d\n", a, b);

    return 0 ;
}