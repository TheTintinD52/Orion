#include "Carre.h"

using namespace std;

Carre::Carre() : m_longueur1(0), m_longueur2(0), m_longueur3(0), m_longueur4(0), m_M1(NULL), m_M2(NULL)
{

}

Carre::Carre(double longueur) : m_longueur1(longueur), m_longueur2(longueur), m_longueur3(longueur), m_longueur4(longueur), m_M1(NULL), m_M2(NULL)
{

}

Carre::Carre(double longueur, Point &point) : m_longueur1(longueur), m_longueur2(longueur), m_longueur3(longueur), m_longueur4(longueur)
{
	m_M1 = new Point(point);
	m_M2 = new Point(point);
}

Carre::Carre(double longueur, Point &point1, Point &point2) : m_longueur1(longueur), m_longueur2(longueur), m_longueur3(longueur), m_longueur4(longueur)
{
	m_M1 = new Point(point1);
	m_M2 = new Point(point2);
}

Carre::~Carre()
{
	delete(m_M1);
	delete(m_M2);
}

Carre::Carre(const Carre &carre)
{
	m_longueur1 = carre.m_longueur1;
	m_longueur2 = carre.m_longueur2;
	m_longueur3 = carre.m_longueur3;
	m_longueur4 = carre.m_longueur4;
	m_M1 = new Point(*(carre.m_M1));
	m_M2 = new Point(*(carre.m_M2));
}

Carre& Carre::operator=(const Carre &carre)
{
	if (this != &carre)
	{
		delete(m_M1);
		delete(m_M2);
		m_longueur1 = carre.m_longueur1;
		m_longueur2 = carre.m_longueur2;
		m_longueur3 = carre.m_longueur3;
		m_longueur4 = carre.m_longueur4;
		m_M1 = new Point(*(carre.m_M1));
		m_M2 = new Point(*(carre.m_M2));
	}
	return *this;
}

void Carre::affiche() const
{
	cout << "Les longueurs du carre sont de " << m_longueur1 << " " << m_longueur2 << " " << m_longueur3 << " " << m_longueur4 << endl;
	if (m_M1 != NULL)
	{
		m_M1->affiche();
	}
	if (m_M2 != NULL)
	{
		m_M2->affiche();
	}
}

double Carre::Getlongueur() const
{
	return m_longueur1;
}

void Carre::Setlongueur(double val)
{
	m_longueur1 = val;
	m_longueur2 = val;
	m_longueur3 = val;
	m_longueur4 = val;
}