#include <stdio.h>

int my_strlen(char * str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        i ++ ;
    }
    return i ;
}

int main()
{
    char ch[100] = "lettres";
    int taille_str = my_strlen(ch);
    printf("%d\n", taille_str);
    return  0 ;
}