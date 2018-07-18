#pragma once
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

	void affiche();

	int Getdura()
	{
		return m_dura;
	}
	void Setdura(int val)
	{
		m_dura = val;
	}

protected:
	int m_dura;
};

