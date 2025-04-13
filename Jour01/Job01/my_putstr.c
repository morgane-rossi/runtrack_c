#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_putchar (char c)
{
    printf("%c", c);
}


void my_putstr(char *str)
{
    int index = 0 ;
    while(str[index] != '\0')
    {   
        my_putchar(str[index]);
        index ++ ;
    }

    printf("\n");
}

int main () 
{
    my_putstr("Hello world");
    return 0 ;
}