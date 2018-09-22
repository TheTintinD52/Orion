#ifndef CARRE_H
#define CARRE_H

#include "iostream"
#include "Point.h"

class Carre
{
public:
	Carre();
	Carre(float);
	Carre(float, Point&);
	Carre(float, Point&, Point&);
	virtual ~Carre();
	Carre(const Carre &);
	Carre& operator=(const Carre &);

	void affiche() const;

	float Getlongueur() const;
	void Setlongueur(float);

protected :
	float m_longueur1, m_longueur2, m_longueur3, m_longueur4;
	Point *m_M1;
	Point *m_M2;
};

#endif