#pragma once

#include "string"
#include "Coordonnees.h"
#include "Objet.h"

class Block : public Objet
{
public:
	Block();
	Block(int);
	Block(int, std::string);
	Block(int, std::string, double);
	Block(int, std::string, double, Coordonnees&);
	Block(const Block&);
	virtual ~Block();

	Block& operator=(const Block&);

	void affiche();
	void deplacer(Coordonnees&);


	double GetvelMinage()
	{
		return m_velMinage;
	}
	void SetvelMinage(double val)
	{
		m_velMinage = val;
	}
	Coordonnees Getposition()
	{
		return *m_position;
	}

protected:
	double m_velMinage;
	Coordonnees *m_position;
};

