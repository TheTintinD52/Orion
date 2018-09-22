#include "iostream"
#include "string"
#include "vector"
#include "Animal.h"
#include "Arme.h"
#include "Block.h"
#include "Carre.h"
#include "Coordonnees.h"
#include "Ennemi.h"
#include "Etabli.h"
#include "Inventaire.h"
#include "Joueur.h"
#include "Objet.h"
#include "Outil.h"
#include "Outillage.h"
#include "Personnage.h"
#include "PNJ.h"
#include "Point.h"

using namespace std;

int main()
{
	Point p1(2, 3);
	Point p2(1.3, 2.7);

	Carre carre1(2.3, p1, p2);

	Coordonnees c1(1, 2, 3);
	Coordonnees c2(-3, 4, 3);

	Block b(1, "Pierre", 1.3, carre1);
	Etabli craft(12, "Etabli", 4.3);
	craft.affiche();

	Objet i2(2, "Sucre");

	Inventaire i(20);

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
	cout << "Vie de " << e1.Getnom() << " = " << e1.Getvie() << endl << endl;
	e1.boirePotionDeVie(20);
	cout << "Vie de " << e1.Getnom() << " = " << e1.Getvie() << endl << endl;
	j.prendreItem(i2);
	j.prendreItem(a1);
	j.afficheInventaire();

	system("PAUSE");
	return 0;
}
