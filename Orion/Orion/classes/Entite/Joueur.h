#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <string>
#include <Entite/Entite.h>
#include <objet/Arme.h>
#include <objet/Outil.h>
#include <autre/Inventaire.h>

class Joueur : public Entite
{
public:
	Joueur();
	Joueur(int);
	Joueur(std::string, int);
	Joueur(std::string, int, int);
	Joueur(std::string, int, int, int);
	Joueur(std::string, int, int, int, Inventaire&);
	Joueur(std::string, int, int, int, Inventaire&, Arme&);
	Joueur(std::string, int, int, int, Inventaire&, Arme&, Outil&);
	virtual ~Joueur();
	Joueur(const Joueur&);
	Joueur& operator=(const Joueur&);

	void affiche() const;
	void afficheInventaire() const;
	void changerArme(Arme &);
	void changerOutil(Outil &);
	void attaquer(Entite &);
	void prendreItem(Objet &);
	void jeterItem(Objet &);
	void boirePotionDeVie(int);

	int Getfaim() const;
	void Setfaim(int);

protected:
	int m_faim;
	Inventaire *m_inventaire;
	Arme *m_arme;
	Outil *m_outil;
};

#endif