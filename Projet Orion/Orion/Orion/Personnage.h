#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include "iostream"
#include "string"

class Personnage
{
public:
	Personnage();
	Personnage(int);
	Personnage(std::string, int);
	Personnage(std::string, int, int);
	virtual ~Personnage();
	Personnage(const Personnage&);
	Personnage& operator=(const Personnage&);

	void affiche() const;
	void recevoirDegats(int);

	int Getvie() const;
	void Setvie(int);
	std::string Getnom() const;
	void Setnom(std::string);
	int Getendurance() const;
	void Setendurance(int);
protected:
	std::string m_nom;
	int m_vie;
	int m_endurance;
};

#endif