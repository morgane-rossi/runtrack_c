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

int my_atoi(char *str)
{
    int res = 0 ;
    int taille_chaine = my_strlen(str);
    for (int i = 0 ; i < taille_chaine ; i++)
    {
        res += str[i];
    }
    return res ;
}


int main()
{

    char str[] = "test de Julien a nouveau" ;
    int a = my_atoi(str);
    printf("%d\n", a);

    return 0 ;
}