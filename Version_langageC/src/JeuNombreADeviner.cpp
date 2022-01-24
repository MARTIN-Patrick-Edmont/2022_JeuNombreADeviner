/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 21/01/2022
// Rôle du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio
//                              ctime, cstdlib
// Historique du fichier:
/*************************************************/
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include "../include/JeuNombreAdeviner.h"



// Nom :tirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre nbMin et nbMAx
// Paramètres d'entrée: nbMin, nbMAx : limites du nombre à deviner
// Valeur de retour : nombre à deviner

int tirerNombreMystere(int nbMin, int nbMax)
{

    int nb = 0; // Nombre aleatoire

    // Initialisation du générateur aléatoire avec l'heure
    // pour obtenir une série de nombres differents à chaque execution
    srand((int)time(NULL));

    nb = rand()%(nbMax - nbMin+1) + nbMin; // compris entre nbMin et nbMax inclus

    return nb;
}


// Nom :jouerPartie
// Rôle : Fait jouer une partie à un joueur
//
// Paramètres d'entrée: le nombre à deviner, les limites min et max du nombre à deviner, le nombre maximal d'essais possibles
// Paramètres de sortie: nombre d'essais utilisés par le joueur
// Valeur de retour : 0 si la partie est perdue, 1 sinon

// Ajouter le CODE de  la fonction

int jouerPartie(int nbmyst, int nbmin, int nbmax, int essmax, int* esspent)
{
    int i, nbinp;
    for(i=0; i<essmax ; i=i+1)
    {
        scanf("%d", &nbinp);
        while(nbinp<nbmin || nbinp>nbmax)
        {
            printf("L'entrée n'est pas dans la plage de jeu");
            scanf("%d", &nbinp);
        }
        if(nbinp==nbmyst)
        {
            *esspent = i ;
            return 1 ;
        }
        if(nbinp<nbmyst)
        {
            printf("-");
        }
        else
        {
            printf("+");
        }
    }
return 0 ;
}








