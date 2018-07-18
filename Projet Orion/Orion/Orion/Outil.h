#pragma once
#include "Outillage.h"
#include "iostream"

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

protected:
};

