#include <stdio.h>
#include <stdlib.h>


char **array_clone(char **strs, int n)
{
    if (strs == NULL || n <= 0)
    {
        return NULL ;
    }

    char ** clone = malloc ((n+1) * sizeof(char *)) ;
    if (clone == NULL)
    {
        return NULL;
    }

    for (int i = 0 ; i < n ; i++)
    {
        int taille = my_strlen(strs[i]);
        clone[i] = malloc(sizeof(char) * (taille + 1));
        if (clone[i] != NULL)
        {
            clone[i] = my_strcp(clone[i], strs[i]);
        }
    }
    clone[n] = NULL ;
    return clone;
}

int main()
{
    char un[] = "plop";
    char deux[] = "pilou";
    char trois[] = "plouf";
    char *tout[] = {un, deux, trois};
    int n = 3 ;

    char **resultat =  array_clone(tout, n);
    for (int i = 0 ; i < n ; i++)
    {
        if (resultat != NULL)
        {
            printf("%s\n", resultat[i]);
            free(resultat[i]);
        }
    }

    free(resultat);

    return 0 ;
}