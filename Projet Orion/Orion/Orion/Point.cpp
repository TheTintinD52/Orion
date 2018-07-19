#define _USE_MATH_DEFINES

#include "Point.h"
#include "iostream"
#include "cmath"


using namespace std;

Point::Point() : m_x(0), m_y(0)
{

}

Point::Point(double p) : m_x(p), m_y(p)
{

}

Point::Point(double x, double y) : m_x(x), m_y(y)
{

}

Point::Point(const Point &p) : m_x(p.m_x), m_y(p.m_y)
{

}

Point::~Point()
{

}

void Point::majpolaire()
{
	m_r = sqrt(m_x*m_x + m_y*m_y);
	m_t = atan2(m_y, m_x);
}

void Point::majcart()
{
	m_x = m_r * cos(m_t);
	m_y = m_r * sin(m_t);
}

void Point::affiche()
{
	cout << "x = " << m_x << endl << "y = " << m_y << endl;
}

void Point::deplace(double dx, double dy)
{
	m_x = m_x + dx;
	m_y = m_y + dy;
	majpolaire();
}

void Point::homothetie(double cf)
{
	m_x = m_x * cf;
	m_y = m_y * cf;
	majpolaire();
}

void Point::rotation(double deg)
{
	deg = deg * M_PI / 180;
	m_t = m_t + deg;
	majcart();
}

void Point::initialise(double px, double py)
{
	m_x = px;
	m_y = py;
	majpolaire();
}

//operator overloading

ostream& operator<<(ostream &os, Point &p)
{
	os << "x = " << p.m_x << endl << "y = " << p.m_y << endl;
	return os;
}

Point& Point::operator=(const Point &p)
{
	if (this != &p)
	{
		m_x = p.m_x;
		m_y = p.m_y;
	}
	return *this;
}

Point& Point::operator+=(const Point &autre)
{
	m_x = m_x + autre.m_x;
	m_y = m_y + autre.m_y;

	return *this;
}

Point operator+(Point const &a, Point const &b)
{
	Point copie(a);
	copie += b;
	return copie;
}

Point& Point::operator-=(const Point &autre)
{
	m_x = m_x - autre.m_x;
	m_y = m_y - autre.m_y;

	return *this;
}

Point operator-(Point const &a, Point const &b)
{
	Point copie(a);
	copie -= b;
	return copie;
}

Point& Point::operator*=(const Point &autre)
{
	m_x = m_x * autre.m_x;
	m_y = m_y * autre.m_y;

	return *this;
}

Point operator*(Point const &a, Point const &b)
{
	Point copie(a);
	copie *= b;
	return copie;
}
