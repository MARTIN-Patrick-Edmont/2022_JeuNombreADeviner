/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 21/01/2022
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio.h
// Historique du fichier:
/*************************************************/


#include <string.h>
#include <iostream>
using namespace std;
#include "JeuNombreADeviner.h"

int main()
{
    /*
    int nbmyst, nbmin, nbmax, essmax, esspent, nbpart, nbvict, essall;
    nbmin = 0 ;
    nbmax = 10 ;
    essmax= 4 ;
    esspent=0 ; // nombre d'essais
    nbpart = 0 ;
    nbvict = 0 ;
    essall = 0 ; //nombre cumulé d'essai
    */ // reste d'utilisation de variable globales
    int nbmyst;
    //printf ("%s\n", "Vous allez jouer pour deviner un nombre secret");
    cout << "Vous allez jouer pour deviner un nombre secret" << endl ;


    Tjoueur test ;
    test.nbpart=0 ;
    test.nbvict=0 ;
    //printf("Nom : ");
    cout << "Nom : " ;
    //scanf("%s",test.nom);
    cin >> test.nom ;
    //printf("sdf %s", test.nom);
    cout << "sdf" << test.nom << endl ;

    Tpartie ptest ;
    ptest.essmax = 4;
    ptest.esspent=0;
    ptest.limh=10;
    ptest.liml=0;
    while(1)
    {


        // interface de début de partie
        while(menu(test.nbpart,test.nbvict, test.essall))
        // Tirer aléatoirement le nombre à deviner

        nbmyst = tirerNombreMystere(0, 10);
        // Jouer une partie


        //printf("La partie commence.\n");
        cout << "La partie commence." << endl ;

        //printf("Vous avez 4 essais pour deviner le nombre myst\x8Are compris entre 0 et 10\n");
        cout << "Vous avez 4 essais pour deviner le nombre myst\x8Are compris entre 0 et 10" << endl ;
        ptest.esspent = 0 ; // on reset le nombre d'essais avant d'initier une nouvelle partie, juste au cas où
        if(JouerPartie(nbmyst, &ptest))
        {
            /*printf("gagné \n");
            printf("nombre d'essai : %d \n", esspent);*/
            cout << "gagné" << endl << "nombre d'essai : " << ptest.esspent << endl ;
            test.nbpart = test.nbpart + 1 ;
            test.nbvict = test.nbvict +1 ;
            test.essall = test.essall + ptest.esspent ;
        }
        else
        {
            //printf("perdu \n");
            cout << "perdu" << endl;
            test.nbpart = test.nbpart + 1 ;
            test.essall= test.essall + 4 ;
        }
        // Affichage du résultat de la partie
    };

    return 0 ;
}

