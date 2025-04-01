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
int str_is_digit(char *str)
{

    int index = 0 ;
    
    while(str[index] != '\0')
    {   
        int chiffre = char_is_digit(str[index]);
        if (chiffre != 1)
        {
            return 0;
        }
        index ++ ;
    }
    return 1 ;

}

int main()
{

    int res1 = str_is_digit("15345343");
    printf("%d\n", res1);

    int res2 = str_is_digit("1534534g3");
    printf("%d\n", res2);

    return 0 ;
}