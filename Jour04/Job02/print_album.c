#include <stdio.h>

struct album
{
    char* titre;
    char* auteur;
    unsigned int annee;
};

typedef struct album Album ;

void print_album(Album *alb)
{
    printf("%s by %s released in %d\n", alb->titre, alb->auteur, alb->annee);
}

int main()
{
    struct  album mon_album;

    mon_album.titre = "Master of Puppets";
    mon_album.auteur = "Metallica";
    mon_album.annee = 1986 ;

    print_album(&mon_album);

    return 0 ;
}