#ifndef ARME_H
#define ARME_H

#include "iostream"
#include "string"
#include "Outillage.h"

class Arme : public Outillage
{
public:
	Arme();
	Arme(int);
	Arme(int, std::string);
	Arme(int, std::string, int);
	Arme(int, std::string, int, int);
	virtual ~Arme();
	Arme(const Arme& other);
	Arme& operator=(const Arme& other);

	void affiche() const;

	int Getdegat() const;
	void Setdegat(int);

protected:
	int m_degat;
};

#endif