#include "iostream"
#include "string"
#include "Block.h"
#include "Item.h"
#include "Coordonnees.h"
#include "Personnage.h"
#include "Emplacement.h"
#include "Joueur.h"
#include "Case.h"
#include "Inventaire.h"
#include "Ennemi.h"
#include "Arme.h"


using namespace std;

int main()
{
    string str, str2;

    cout << "Bienvenue !" << endl;

    Block a;
    Block b(1);
    Block c(2, "Terre");
    Block d(3, "Pierre", 1.3);
    Block e;
    e=d;
    cout << endl;
    e.deplacer(2,3,4);
    e.affiche();

    /*Item i1;
    Item i2(2);
    Item i3("Baton");
    Item i4(3, "Sucre");
    Item i5;
    i5=i4;
    cout << endl;
    i5.affiche();

    Coordonnees c1(1,2,3);
    Coordonnees c2(-3,4,3);

    Personnage p1;
    cout << endl;
    cout << endl;
    Emplacement e1;
    Emplacement e2(2);
    Emplacement e3(2,3);
    Emplacement e4(2,3,-5);
    e4.affiche();*/


    cout << endl;
    Arme a1(1, "Epee", 10, 256);
    Arme a2(2, "Hache", 25, 1024);
    Arme a3(3, "Baton", 2, 10);

    Joueur j1("Paul", 150, 150, 150, a1);
    j1.affiche();
    cout << endl;

    //Case c1(3, "Sucre",4,5);
    //c1.affiche();
    Inventaire i(2);
    //i.affiche(); ne marche pas !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    Ennemi e1("Tafiole", 50, 50, a3);
    e1.affiche();
    cout << endl;


    j1.changerArme(a2);
    j1.affiche();

    return 0;
}
