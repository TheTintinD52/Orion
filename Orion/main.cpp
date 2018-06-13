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

    Inventaire i;

    Arme a1(1, "Epee", 25, 256);
    Arme a2(2, "Hache", 40, 1024);
    Arme a3(3, "Baton", 7, 10);

    Outil o1(4, "Pelle", 23);

    Joueur j1("Paul", 150, 150, 150, i, a1, o1);

    Ennemi e1("Tafiole", 50, 50, a3);

    Coordonnees c1(1,2,3);
    Coordonnees c2(-3,4,3);

    Item i1;
    Item i2(2);
    Item i3("Baton");
    Item i4(3, "Sucre");
    Item i5;
    i5=i4;
    cout << endl;
    i5.affiche();

    Block a;
    Block b(1);
    Block c(2, "Terre");
    Block d(3, "Pierre", 1.3, c2);
    Block e;
    e=d;


    cout << endl << endl;
    e.deplacer(c1);
    e.affiche();
    cout << endl << endl;
    j1.affiche();
    cout << endl << endl;

    e1.affiche();
    cout << endl << endl;

    j1.changerArme(a2);
    j1.affiche();
    cout << endl << endl;
    j1.attaquer(e1);
    cout << e1.Getvie() << endl;
    e1.boirePotionDeVie(20);
    cout << e1.Getvie() << endl;
    cout << endl << endl;
    j1.afficheInventaire();
    // faire en sorte que l'on puisse modifier l'inventaire du joueur

    return 0;
}
