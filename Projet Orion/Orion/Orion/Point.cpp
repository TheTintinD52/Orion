#define _USE_MATH_DEFINES

#include "Point.h"

using namespace std;

Point::Point() : m_x(0), m_y(0)
{

}

Point::Point(double nb) : m_x(nb), m_y(nb)
{

}

Point::Point(double x, double y) : m_x(x), m_y(y)
{

}

Point::Point(const Point &point) : m_x(point.m_x), m_y(point.m_y)
{

}

Point::~Point()
{

}

// operators overloading

ostream& operator<<(ostream &os, Point &point)
{
	os << "x = " << point.m_x << endl << "y = " << point.m_y << endl;
	return os;
}

Point& Point::operator=(const Point &point)
{
	if (this != &point)
	{
		m_x = point.m_x;
		m_y = point.m_y;
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

// methodes

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

void Point::affiche() const
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

// accesseurs

double Point::Getx() const
{
	return m_x;
}

void Point::Setx(double val)
{
	m_x = val;
}

double Point::Gety() const
{
	return m_y;
}

void Point::Sety(double val)
{
	m_y = val;
}

double Point::Getr() const
{
	return m_r;
}

void Point::Setr(double val)
{
	m_r = val;
}

double Point::Gett() const
{
	return m_t;
}

void Point::Sett(double val)
{
	m_t = val;
}