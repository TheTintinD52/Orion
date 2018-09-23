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
	Ennemi(int, std::string);
	Ennemi(int, int ,std::string);
	Ennemi(int, int, std::string, Arme&);
	virtual ~Ennemi();
	Ennemi(const Ennemi& other);
	Ennemi& operator=(const Ennemi& other);

	void affiche() const;
	void boirePotionDeVie(int);

protected:
	Arme * m_arme;
};

#endif