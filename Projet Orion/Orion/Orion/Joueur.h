#ifndef JOUEUR_H
#define JOUEUR_H

#include "Personnage.h"
#include "Arme.h"
#include "Outil.h"
#include "Inventaire.h"


class Joueur : public Personnage
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
	void attaquer(Personnage &);
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