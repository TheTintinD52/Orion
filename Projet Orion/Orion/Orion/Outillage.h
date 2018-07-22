#ifndef OUTILLAGE_H
#define OUTILLAGE_H

#include "string"
#include "Objet.h"

class Outillage : public Objet
{
public:
	Outillage();
	Outillage(int);
	Outillage(int, std::string);
	Outillage(int, std::string, int);
	virtual ~Outillage();
	Outillage(const Outillage&);
	Outillage& operator=(const Outillage&);

	void affiche() const;

	int Getdura() const;
	void Setdura(int);

protected:
	int m_dura;
};

#endif