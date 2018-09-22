#ifndef CARRE_H
#define CARRE_H

#include <iostream>
#include <geometrie/Point.h>

class Carre
{
public:
	Carre();
	Carre(float, float);
	Carre(float, float, float, float);
	Carre(Point &, Point &);
	virtual ~Carre();
	Carre(const Carre &);
	Carre& operator=(const Carre &);

	void affiche() const;
	void deplace(Carre &);
	void deplace(float, float, float, float);

protected :
	Point *m_p1, *m_p2;
};

#endif