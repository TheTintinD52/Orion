#ifndef DROITE_H
#define DROITE_H

#include <iostream>
#include <geometrie/Point.h>

class Droite
{
public:
	Droite();
	Droite(float, float);
	Droite(float, float, float, float);
	Droite(Point&, Point&);
	virtual ~Droite();

	friend bool operator==(Droite&, Droite&);
	friend bool operator!=(Droite&, Droite&);

	void affiche();


protected:
	Point *m_a;
	Point *m_b;
};

#endif