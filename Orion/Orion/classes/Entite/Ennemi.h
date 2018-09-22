#ifndef ENNEMI_H
#define ENNEMI_H

#include <iostream>
#include <string>
#include <Entite/Entite.h>
#include <objet/Arme.h>


class Ennemi : public Entite
{
public:
	Ennemi();
	Ennemi(int);
	Ennemi(std::string, int);
	Ennemi(std::string, int, int);
	Ennemi(std::string, int, int, Arme&);
	virtual ~Ennemi();
	Ennemi(const Ennemi& other);
	Ennemi& operator=(const Ennemi& other);

	void affiche() const;
	void boirePotionDeVie(int);

protected:
	Arme * m_arme;
};

#endif