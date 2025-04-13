#include <stdio.h>

char *my_strcp(char *dest, char *source)
{
    int indice = 0 ;
    while (source[indice] != '\0')
    {
        dest[indice] =source[indice];
        indice++ ;
    }
    dest[indice] = '\0';
    return dest;
}

int main()
{
    char pilou [] = "piloupiloupilou";
    char destination[100];
    my_strcp(destination, pilou);
    printf("%s\n", destination);

    return 0 ;
}