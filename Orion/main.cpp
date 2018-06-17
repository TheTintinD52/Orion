#include "iostream"
#include "string"
#include "Block.h"
#include "Item.h"
#include "Coordonnees.h"
#include "Personnage.h"
#include "Joueur.h"
#include "Inventaire.h"
#include "Ennemi.h"
#include "Arme.h"
#include "Outil.h"

using namespace std;

int main()
{
    cout << "Bienvenue !" << endl;

    Coordonnees c1(1,2,3);
    Coordonnees c2(-3,4,3);

    Block b(1, "Pierre", 1.3, c2);
    Item i2(2, "Sucre");

    Inventaire i;

    Arme a1(3, "Epee", 25, 256);
    Arme a2(4, "Hache", 40, 1024);
    Arme a3(5, "Baton", 7, 10);

    Outil o1(6, "Pelle", 23);

    Joueur j("Paul", 150, 150, 150, i, a1, o1);

    Ennemi e1("Tafiole", 50, 50, a3);

    cout << endl;
    j.affiche();
    cout << endl << endl;
    e1.affiche();
    cout << endl << endl;

    j.changerArme(a2);
    j.affiche();
    cout << endl << endl;
    j.attaquer(e1);
    cout << e1.Getvie() << endl;
    e1.boirePotionDeVie(20);
    cout << e1.Getvie() << endl;
    cout << endl << endl;
    j.prendreItem(i2);
    j.prendreItem(a1);
    j.afficheInventaire();

    return 0;
}
