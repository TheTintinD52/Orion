#pragma once

#include "Point.h"

class Carre
{
public:
	Carre();
	Carre(double);
	Carre(double, Point&);
	Carre(double, Point&, Point&);
	virtual ~Carre();
	Carre(const Carre &);
	Carre& operator=(const Carre &);

	void affiche();

protected :
	double m_longueur1, m_longueur2, m_longueur3, m_longueur4;
	Point *m_M1;
	Point *m_M2;
};

