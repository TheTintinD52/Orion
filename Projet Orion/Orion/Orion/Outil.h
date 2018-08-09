#ifndef OUTIL_H
#define OUTIL_H

#include "iostream"
#include "string"
#include "Outillage.h"

class Outil : public Outillage
{
public:
	Outil();
	Outil(int);
	Outil(int, std::string);
	Outil(int, std::string, int);
	virtual ~Outil();
	Outil(const Outil&);
	Outil& operator=(const Outil&);

	void affiche();
};

#endif