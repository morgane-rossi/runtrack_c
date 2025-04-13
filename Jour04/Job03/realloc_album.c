#include <stdio.h>
#include <stdlib.h>

struct album
{
    char* titre;
    char* auteur;
    unsigned int annee;
};

typedef struct album Album ;

Album* realloc_album(Album *albums, int size, int newsize)
{
    // allouer correctement un nouveau tableau à la nouvelle taille
    Album* destination = malloc(newsize);
    // copier l'ancien tableau dans le nouveau
    destination = albums;

    // libérer la mémoire
    free(albums);
    return destination;
}


void print_album(Album *album)
{
    printf("titre : %s, auteur : %s, année : %d\n", album->titre, album->auteur, album->annee);
}


int main()
{
    struct  album puppets;
    puppets.titre = "Master of Puppets";
    puppets.auteur = "Metallica";
    puppets.annee = 1986 ;

    struct album zanaka;
    zanaka.titre = "Zanaka";
    zanaka.auteur = "Jain";
    zanaka.annee = 2015;

    struct album ddays;
    ddays.titre = "Demon Days";
    ddays.auteur = "Gorillaz";
    ddays.annee = 2005;

    struct album asa;
    asa.titre = "Beautiful Imperfection";
    asa.auteur = "Asa";
    asa.annee = 2010;

    struct album akh ;
    akh.titre = "Meteque et Mat";
    akh.auteur = "Akhenaton";
    akh.annee = 1995;

    Album m_albums[] = {puppets, zanaka, ddays, asa, akh};
    int taille = 5 ;

    int taillealb = sizeof(m_albums);

    Album *new_albums = realloc_album(m_albums, sizeof(m_albums), sizeof(m_albums));

    for (int i = 0 ; i < taille ; i++)
    {
        print_album(&new_albums[i]);
    }

    free(new_albums);

    return 0 ;
}