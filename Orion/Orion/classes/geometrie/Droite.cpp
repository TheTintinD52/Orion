#include <geometrie\Droite.h>

using namespace std;

Droite::Droite() : m_a(NULL), m_b(NULL)
{

}

Droite::Droite(float p1, float p2)
{
	if (p1 != p2)
	{
		m_a = new Point(p1);
		m_b = new Point(p2);
	}
	else
	{
		m_a = new Point();
		m_b = new Point(p1);
	}
}

Droite::Droite(float p1, float p2, float p3, float p4)
{
	if (p1 != p3 && p1 != p4 || p2 != p3 && p2 != p4)
	{
		m_a = new Point(p1, p2);
		m_b = new Point(p3, p4);
	}
	else
	{
		m_a = new Point();
		m_b = new Point(p1, p2);
	}

}

Droite::Droite(Point &p1, Point &p2)
{
	if (p1 != p2)
	{
		m_a = new Point(p1);
		m_b = new Point(p2);
	}
	else
	{
		m_a = new Point();
		m_b = new Point(p2);
	}
}

Droite::~Droite()
{
	delete(m_a);
	delete(m_b);
}

bool operator!=(Droite &d1, Droite &d2)
{
	if (d1.m_a != d2.m_a || d1.m_b != d2.m_b)
	{
		return true;
	}
	return false;
}

bool operator==(Droite &d1, Droite &d2)
{
	if (d1 != d2)
	{
		return false;
	}
	return true;
}

void Droite::affiche()
{
	m_a->affiche();
	m_b->affiche();
}