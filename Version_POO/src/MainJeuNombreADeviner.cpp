/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: CPartie
//                              CJoueur
//                              iostream
// Historique du fichier:
// 23/02/2022 Marie-Pierre Pinaud :
//    - ajout de la v�rification que le nombre de parties saisi est bien >0
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/Partie.h"

int main()
{

    //Cr�ation d'un joueur
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "Veuillez entrer votre nom" << endl;
    string un_nom;
    string un_prenom;
    bool nv_j=0;
    cin >> un_nom;
    cin >> un_prenom ;

    // Cr�ation du joueur
    CJoueur joueur (un_nom, un_prenom);
    cout << "Cr�er un nouveau joueur ? 0/1" << endl;
    cin >> nv_j ;
    if(nv_j){
        cout << "Nom" << endl ;
        cin >> un_nom ;// utilis� qu'une fois par j1, autant le r�utiliser
        cout << "Prenom" << endl;
        cin >> un_prenom ;
        CJoueur j2 (un_nom,un_prenom);
    }
    cout << "----------------------------------------------"<< endl;
    int nbParties;

    do
    {
        cout << "Combien de parties voulez-vous jouer ?" << endl;
        cin >> nbParties;
    }while (nbParties<0);



    for (int i = 0; i <nbParties; i++)
    {
        cout << "----------------------------------------------"<< endl;
        cout <<"Partie Numero : " << i+1 << endl;
        cout << "----------------------------------------------"<< endl;

        CPartie partie (0,10,4); // nombre � deviner entre 0 et 10, nombre de tentatives maximum 4

        partie.Jouer(joueur); // ex�cution d'une partie pour le joueur
    }


    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur "<< joueur.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur
    int nbsucces, nbechecs, nbessais;
    joueur.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence

    // Affichage des r�sultats
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;
    cout << "Moyenne d'essais totale : " << joueur.calculerMoyenneEssai() << endl;

    cout << "----------------------------------------------"<< endl;


    return 0;
}

