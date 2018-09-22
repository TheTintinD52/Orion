#ifndef COORDONNEES_H
#define COORDONNEES_H

#include "iostream"

class Coordonnees
{
public:
	Coordonnees();
	Coordonnees(int);
	Coordonnees(int, int);
	Coordonnees(int, int, int);
	virtual ~Coordonnees();
	Coordonnees(const Coordonnees&);
	Coordonnees& operator=(const Coordonnees&);

	void affiche() const;

	int Getx() const;
	void Setx(int);
	int Gety() const;
	void Sety(int);
	int Getz() const;
	void Setz(int);

protected:
	int m_x;
	int m_y;
	int m_z;
};

#endif