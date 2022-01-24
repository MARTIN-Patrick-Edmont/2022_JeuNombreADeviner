/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 21/01/2022
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio.h
// Historique du fichier:
/*************************************************/

#include <stdio.h>


#include "../include/JeuNombreADeviner.h"

int main()
{
    int nbmyst, nbmin, nbmax, essmax, esspent ;
    int *ptesspent;

    printf ("%s\n", "Vous allez jouer pour deviner un nombre secret");



    // Tirer al�atoirement le nombre � deviner

    nbmyst = tirerNombreMystere(1, 10);
    // Jouer une partie


    printf("La partie commence.\n");

    printf("Vous avez 4 essais pour deviner le nombre myst\x8Are compris entre 0 et 10\n");

    if(jouerPartie(nbmyst, nbmin, nbmax, essmax,&esspent))
    {
        printf("gagn�");
    }
    else
    {
        printf("perdu");
    }
    // Affichage du r�sultat de la partie


    return 0 ;
}

