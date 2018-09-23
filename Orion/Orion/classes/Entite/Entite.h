#ifndef ENTITE_H
#define ENTITE_H

#include <iostream>
#include <string>

class Entite
{
public:
	Entite();
	Entite(int);
	Entite(int, std::string);
	Entite(int, int, std::string);
	virtual ~Entite();
	Entite(const Entite&);
	Entite& operator=(const Entite&);

	void affiche() const;
	void recevoirDegats(int);

	int Getvie() const;
	void Setvie(int);
	int Getendurance() const;
	void Setendurance(int);
	std::string Getnom() const;
	void Setnom(std::string);
protected:
	int m_vie;
	int m_endurance;
	std::string m_nom;
};

#endif