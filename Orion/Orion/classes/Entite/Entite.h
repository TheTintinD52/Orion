#ifndef ENTITE_H
#define ENTITE_H

#include <iostream>
#include <string>

class Entite
{
public:
	Entite();
	Entite(int);
	Entite(std::string, int);
	Entite(std::string, int, int);
	virtual ~Entite();
	Entite(const Entite&);
	Entite& operator=(const Entite&);

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