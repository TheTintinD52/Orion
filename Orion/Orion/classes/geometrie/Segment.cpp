#include <geometrie\Segment.h>

using namespace std;

Segment::Segment() : m_a(NULL), m_b(NULL)
{

}

Segment::Segment(float p1, float p2)
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

Segment::Segment(float p1, float p2, float p3, float p4)
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

Segment::Segment(Point &p1, Point &p2)
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

Segment::Segment(const Segment &p)
{
	m_a = new Point(*(p.m_a));
	m_b = new Point(*(p.m_b));
}

Segment::~Segment()
{
	delete(m_a);
	delete(m_b);
}

Segment& Segment::operator=(const Segment &d)
{
	if (this != &d)
	{
		delete(m_a);
		delete(m_b);
		m_a = new Point(*(d.m_a));
		m_b = new Point(*(d.m_b));
	}
	return *this;
}

bool operator!=(Segment &d1, Segment &d2)
{
	if (d1.m_a != d2.m_a || d1.m_b != d2.m_b)
	{
		return true;
	}
	return false;
}

bool operator==(Segment &d1, Segment &d2)
{
	if (d1 != d2)
	{
		return false;
	}
	return true;
}

void Segment::affiche() const
{
	m_a->affiche();
	m_b->affiche();
}

void Segment::deplace(float p1, float p2, float p3, float p4)
{
	if ((p1 != p3) || (p1 != p4) && (p2 != p3) || (p2 != p4))
	{
		m_a->Setx(p1);
		m_a->Sety(p2);
		m_b->Setx(p3);
		m_b->Sety(p4);
	}
}

void Segment::deplace(Point &p1, Point &p2)
{
	if ((p1 != p2) && (*m_a != p1 || *m_b != p1 || *m_a != p2 || *m_b != p2))
	{
		delete(m_a);
		delete(m_b);
		m_a = new Point(p1);
		m_b = new Point(p2);
	}
	else
	{
		cout << "Impossible de deplacer le segment !" << endl;
	}
}