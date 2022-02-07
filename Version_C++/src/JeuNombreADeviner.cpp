/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 21/01/2022
// R�le du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio
//                              ctime, cstdlib
// Historique du fichier:
/*************************************************/
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
#include "../include/JeuNombreAdeviner.h"



// Nom :tirerNombreMystere
// R�le : Tire al�atoirement un nombre � deviner entre nbMin et nbMAx
// Param�tres d'entr�e: nbMin, nbMAx : limites du nombre � deviner
// Valeur de retour : nombre � deviner

int tirerNombreMystere(int nbMin, int nbMax)
{

    int nb = 0; // Nombre aleatoire

    // Initialisation du g�n�rateur al�atoire avec l'heure
    // pour obtenir une s�rie de nombres differents � chaque execution
    srand((int)time(NULL));

    nb = rand()%(nbMax - nbMin+1) + nbMin; // compris entre nbMin et nbMax inclus

    return nb;
}


// Nom :jouerPartie
// R�le : Fait jouer une partie � un joueur
//
// Param�tres d'entr�e: le nombre � deviner, les limites min et max du nombre � deviner, le nombre maximal d'essais possibles
// Param�tres de sortie: nombre d'essais utilis�s par le joueur
// Valeur de retour : 0 si la partie est perdue, 1 sinon

// Ajouter le CODE de  la fonction

int jouerPartie(int nbmyst, int nbmin, int nbmax, int essmax, Tpartie* esspent)
{
    int i, nbinp;
    i = 0 ;
    nbinp = 0 ;
    while(i<essmax)
    {
        //scanf("%i", &nbinp);
        cin >> nbinp;
        while(nbinp<nbmin || nbinp>nbmax)
        {
            //printf("L'entr�e n'est pas dans la plage de jeu \n");
            cout << "L'entr�e n'est pas dans la plage de jeu" << endl ;
            //scanf("%i", &nbinp);
            cin >> nbinp;
        }
        if(nbinp==nbmyst)
        {
            //*esspent = i+1 ; //i commence � z�ro mais les essais � 1
            return 1 ;
        }
        if(nbinp<nbmyst)
        {
            printf("+ \n");
        }
        else
        {
            printf("- \n");
        }
        i=i+1;
    }
return 0 ;
}


bool menu(int nbpart, int nbvict, int essall)
{
    int menu ;
    float moy ;
    menu = 0 ;
    printf("1 pour commencer, 2 pour stat, 3 pour r�afficher instructions \n");
    while(menu!=1)
    {
        menu = 0 ; // pour emp�cher de d�clencher � r�p�titions les ifs
        scanf("%d", &menu);
        if(menu==2)
        {
            if(nbpart==0) // on �vite une division par 0
            {
                moy = 0 ;
            }
            else
            {
                moy = essall/nbpart ;
            }
            printf("nbpart = %i, nbvict = %i, moy : %f \n", nbpart, nbvict, moy) ;
        }
        if(menu==3)
        {
            printf("1 pour commencer, 2 pour stat, 3 pour r�afficher instructions \n");
        }
    }
    return 0 ;
}





