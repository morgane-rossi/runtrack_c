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
    char* destination = malloc(sizeof(char) * (taille_chaine+1));

    if (destination == NULL)
    {
        printf("Erreur allocation memoire\n");
        return NULL;
    }

    for (int c = 0 ; c <= taille_chaine ; c++){
        destination[c] = source[c];
    }
//   printf("%s\n", destination);

    return destination ;
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
