#include "iostream"
#include "string"
#include "Point.h"
#include "Carre.h"
#include "Coordonnees.h"
#include "Objet.h"
#include "Block.h"
#include "Personnage.h"
#include "Inventaire.h"
#include "Outillage.h"
#include "Outil.h"
#include "Arme.h"
#include "Joueur.h"
#include "Ennemi.h"
#include "Etabli.h"

using namespace std;

int main()
{
	Coordonnees c1(1, 2, 3);
	Coordonnees c2(-3, 4, 3);

	Block b(1, "Pierre", 1.3, c2);
	Etabli craft(12, "Etabli", 4.3, c1);
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

	cout << endl;
	Point p1(2, 3);
	Point p2(1.3, 2.7);
	p1.affiche();
	cout << endl;
	p2.affiche();

	cout << endl;
	Carre c(2.3, p1, p2);
	c.affiche();

	system("PAUSE");
	return 0;
}
