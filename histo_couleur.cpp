// test_couleur.cpp : Seuille une image en niveau de gris

#include <stdio.h>
#include "image_ppm.h"

int main(int argc, char* argv[])
{
    char cNomImgLue[250];
    int nH, nW, nTaille, nR, nG, nB;
    int histo_red[256];
    int histo_blue[256];
    int histo_green[256];

    if (argc != 2)
    {
        printf("Usage: ImageIn.pgm\n");
        exit (1) ;
    }

    sscanf (argv[1],"%s",cNomImgLue) ;

    OCTET *ImgIn;

    lire_nb_lignes_colonnes_image_ppm(cNomImgLue, &nH, &nW);
    nTaille = nH * nW;
    int nTaille3 = nTaille * 3;
    allocation_tableau(ImgIn, OCTET, nTaille);
    lire_image_ppm(cNomImgLue, ImgIn, nH * nW);

    for (int i = 0; i < 256; i++) {
        histo_red[i] = 0;
        histo_green[i] = 0;
        histo_blue[i] = 0;
    }

    for (int i = 0; i< nTaille3; i+=3) {

    }

    for (int y = 0; y < nH; y++){ //POUR CHAQUE LIGNE
        for (int j = 0; j < nW; j++) { //POUR CHAQUE COLONNE
            histo[ImgIn[y*nW+j]] += 1;
        }
    }

    for (int i = 0; i < 256; i++) {
        printf("%i %i\n", i, histo[i]);
    }

    return 1;
}
