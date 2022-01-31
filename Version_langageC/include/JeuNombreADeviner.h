/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.h
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 21/01/2022
// R�le du fichier: Contient la d�claration des fonctions concernant le jeu
// Nom des composants utilises:
// Historique du fichier:
/*************************************************/
    typedef struct
    {
        char nom[20] ;
        int nbpart ;
        int nbvict ;
        int essall ;
    } Tjoueur ;

    typedef struct
    {
        Tjoueur j ;
        int liml ; //limite basse
        int limh ; // limite haute
        int essmax ;
        int esspent ;
        bool vict ;
    } Tpartie ;

// Nom :tirerNombreMystere
// R�le : Tire al�atoirement un nombre � deviner entre nbMin et nbMAx
// Param�tres d'entr�e: nbMin, nbMAx : limites du nombre � deviner
// Valeur de retour : nombre � deviner

int tirerNombreMystere(int nbMin, int nbMax);

// Nom : jouerPartie
// R�le : Fait jouer une partie � un joueur
//
// Param�tres d'entr�e: le nombre � deviner, les limites min et max du nombre � deviner, le nombre maximal d'essais possibles
// Param�tres de sortie: nombre d'essais utilis�s par le joueur
// Valeur de retour : 0 si la partie est perdue, 1 sinon

// Ajouter la DECLARATION de la fonction
int jouerPartie(int nbmyst, Tpartie nbmin, Tpartie nbmax, Tpartie essmax, Tpartie* esspent);




// Nom : menu
// R�le : interface pour commencer une partie ou afficher les statistiques
//
// Param�tres d'entr�e: nbpart, nbvict
// Param�tres de sortie: N/A
// Valeur de retour : N/A

bool menu(int nbpart, int nbvict, int essall);
