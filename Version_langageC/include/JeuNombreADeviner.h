/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.h
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 21/01/2022
// Rôle du fichier: Contient la déclaration des fonctions concernant le jeu
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
// Rôle : Tire aléatoirement un nombre à deviner entre nbMin et nbMAx
// Paramètres d'entrée: nbMin, nbMAx : limites du nombre à deviner
// Valeur de retour : nombre à deviner

int tirerNombreMystere(int nbMin, int nbMax);

// Nom : jouerPartie
// Rôle : Fait jouer une partie à un joueur
//
// Paramètres d'entrée: le nombre à deviner, les limites min et max du nombre à deviner, le nombre maximal d'essais possibles
// Paramètres de sortie: nombre d'essais utilisés par le joueur
// Valeur de retour : 0 si la partie est perdue, 1 sinon

// Ajouter la DECLARATION de la fonction
int jouerPartie(int nbmyst, Tpartie nbmin, Tpartie nbmax, Tpartie essmax, Tpartie* esspent);




// Nom : menu
// Rôle : interface pour commencer une partie ou afficher les statistiques
//
// Paramètres d'entrée: nbpart, nbvict
// Paramètres de sortie: N/A
// Valeur de retour : N/A

bool menu(int nbpart, int nbvict, int essall);
