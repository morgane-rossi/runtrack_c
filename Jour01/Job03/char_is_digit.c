#include <stdio.h>

int char_is_digit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1 ;
    }
    else
    {
        return 0 ;
    }
}

int main()
{
    int chiffre = char_is_digit('5');
    printf("%d\n", chiffre);

    int lettre = char_is_digit('a');
    printf("%d\n", lettre);

    return 0 ;
}