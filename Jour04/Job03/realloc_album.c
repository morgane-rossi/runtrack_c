#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct album
{
    char *titre;
    char *auteur;
    unsigned annee ;
} Album;


void print_album(Album *alb)
{
    printf("%s by %s released in %d\n", alb->titre, alb->auteur, alb->annee);
}

Album *realloc_album(Album *albums, int size, int new_size)
{
    Album *tab_albums = malloc(new_size * sizeof(Album)) ;

    if (tab_albums == NULL)
    {
        printf("erreur\n");
        exit(1) ;
    }

    for (int i = 0 ; i < size ; i++)
    {
        tab_albums[i].annee = albums[i].annee;

        // deppcopy pour éviter les problèmes
        tab_albums[i].auteur = strdup(albums[i].auteur) ;
        tab_albums[i].titre = strdup(albums[i].titre);
    }
    return tab_albums ;
}


int main()
{
    Album my_albums[] = {
        {"Master of Puppets", "Metallica", 1986},
        {"Demon Days", "Gorillaz", 2005},
        {"Leisure", "Blur", 1991},
        {"Dry", "PJ Harvey", 1992}        
};
    int taille = sizeof(my_albums) / sizeof(my_albums[0]) ;

    Album *newalbs = realloc_album(my_albums, taille, taille);

    for (int i = 0 ; i < taille ; i++)
    {
        print_album(&newalbs[i]);
    }

    // libérer
    for(int j = 0 ; j < taille ; j++)
    {
        free(newalbs[j].titre);
        free(newalbs[j].auteur);
    }
    free(newalbs);

    return 0 ;
}