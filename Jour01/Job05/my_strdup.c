#include <stdio.h>
# include <stdlib.h>

// fonction qui calcule taille de tableau de caractères source
int my_strlen(char * str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        i ++ ;
    }
    return i ;
}

char* my_strdup(char *source)
{
    // allouer mémoire nécessaire pour une copie de la chaîne entrante
    int taille_chaine = my_strlen(source);

    // DESTINATION EST UN POINTEUR
    char* destination = malloc(sizeof(char) * taille_chaine+1);
    destination = source;

   printf("%s\n", destination);

    free(destination);
}

int main()
{
    char pilou [] = "piloupiloupilou";
    my_strdup(pilou);

    return 0 ;
}