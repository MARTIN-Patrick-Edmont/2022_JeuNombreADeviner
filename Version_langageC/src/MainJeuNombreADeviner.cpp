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
    int nbmyst, nbmin, nbmax, essmax, esspent, nbpart, nbvict, essall;
    nbmin = 0 ;
    nbmax = 10 ;
    essmax= 4 ;
    esspent=0 ; // nombre d'essais
    nbpart = 0 ;
    nbvict = 0 ;
    essall = 0 ; //nombre cumul� d'essai

    printf ("%s\n", "Vous allez jouer pour deviner un nombre secret");


    while(1)
    {


        // interface de d�but de partie
        while(menu(nbpart,nbvict))
        // Tirer al�atoirement le nombre � deviner

        nbmyst = tirerNombreMystere(0, 10);
        // Jouer une partie


        printf("La partie commence.\n");

        printf("Vous avez 4 essais pour deviner le nombre myst\x8Are compris entre 0 et 10\n");
        esspent = 0 ; // on reset le nombre d'essais avant d'initier une nouvelle partie, juste au cas o�
        if(jouerPartie(nbmyst, nbmin, nbmax, essmax, &esspent))
        {
            printf("gagn� \n");
            printf("nombre d'essai : %d \n", esspent);
            nbpart = nbpart + 1 ;
            nbvict = nbvict +1 ;
            essall = essall + esspent ;
        }
        else
        {
            printf("perdu \n");
            nbpart = nbpart + 1 ;
            essall= essall + 4 ;
        }
        // Affichage du r�sultat de la partie
    }

    return 0 ;
}

