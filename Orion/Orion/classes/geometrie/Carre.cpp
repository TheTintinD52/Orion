#include <geometrie/Carre.h>

using namespace std;

Carre::Carre() : m_p1(NULL), m_p2(NULL)
{

}

Carre::Carre(float p1, float p2)
{
	if (p1 != p2)
	{
		m_p1 = new Point(p1);
		m_p2 = new Point(p2);
	}
	else
	{
		m_p1 = new Point();
		m_p2 = new Point(p1);
	}
}

Carre::Carre(float p1, float p2, float p3, float p4)
{
	if ((p1 != p3) || (p1 != p4) && (p2 != p3) || (p2 != p4))
	{
		m_p1 = new Point(p1, p2);
		m_p2 = new Point(p3, p4);
	}
	else
	{
		m_p1 = new Point();
		m_p2 = new Point(p1, p2);
	}
}

Carre::Carre(Point &p1, Point &p2)
{
	if (p1 != p2)
	{
		m_p1 = new Point(p1);
		m_p2 = new Point(p2);
	}
	else
	{
		m_p1 = new Point();
		m_p2 = new Point(p1);
	}
}

Carre::~Carre()
{
	delete(m_p1);
	delete(m_p2);
}

Carre::Carre(const Carre &c)
{
	m_p1 = new Point(*(c.m_p1));
	m_p2 = new Point(*(c.m_p2));
}

Carre & Carre::operator=(const Carre &c)
{
	if (this != &c)
	{
		delete(m_p1);
		delete(m_p2);
		m_p1 = new Point(*(c.m_p1));
		m_p2 = new Point(*(c.m_p2));
	}
	return *this;
}

void Carre::affiche() const
{
	m_p1->affiche();
	m_p2->affiche();
}

void Carre::deplace(Carre &c)
{
	if ((m_p1 != c.m_p1) && (m_p2 != c.m_p2))
	{
		delete(m_p1);
		delete(m_p2);
		m_p1 = new Point(*(c.m_p1));
		m_p2 = new Point(*(c.m_p2));
	}
}

void Carre::deplace(float p1, float p2, float p3, float p4)
{
	if ((p1 != p3) || (p1 != p4) && (p2 != p3) || (p2 != p4))
	{
		delete(m_p1);
		delete(m_p2);
		m_p1 = new Point(p1, p2);
		m_p2 = new Point(p3 ,p4);
	}
}

// operators overloading

// methodes

// accesseurs
