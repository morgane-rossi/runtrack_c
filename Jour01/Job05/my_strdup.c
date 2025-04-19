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
    char *copie = malloc(sizeof(char) *(my_strlen(source) + 1) );
    if (copie == NULL){
        return NULL ;
    }
    int indice = 0 ;
    while (source[indice] != '\0')
    {
        copie[indice] = source[indice];
        indice ++ ;
    }
    copie[indice] = '\0';
    return copie ;
}

int main()
{
    char pilou [] = "piloupiloupilou";
    char *copie = my_strdup(pilou);
    if (copie != NULL)
    {
        printf("%s\n", copie);
    }
    free(copie);

    return 0 ;
}
