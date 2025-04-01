#include <stdio.h>

void my_strcp(char *source, char *dest)
{
    int indice = 0 ;
    while (source[indice] != '\0')
    {
        dest[indice] =source[indice];
        indice++ ;
    }
    
}

int main()
{
    char pilou [] = "piloupiloupilou";
    char destination[100];
    my_strcp(pilou, destination);
    printf("%s\n", destination);

    return 0 ;
}