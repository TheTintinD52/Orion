#pragma once

#include "string"
#include "Carre.h"
#include "Coordonnees.h"
#include "Objet.h"

class Block : public Objet
{
public:
	Block();
	Block(int);
	Block(int, std::string);
	Block(int, std::string, double);
	Block(int, std::string, double, Carre&);
	Block(int, std::string, double, Carre&, Coordonnees&);
	virtual ~Block();
	Block(const Block&);

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
	Carre *m_face1, *m_face2, *m_face3, *m_face4, *m_face5, *m_face6;
	Coordonnees *m_position;
};

