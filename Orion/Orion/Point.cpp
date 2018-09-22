#define _USE_MATH_DEFINES

#include "Point.h"

using namespace std;

Point::Point() : m_x(0), m_y(0)
{

}

Point::Point(float nb) : m_x(nb), m_y(nb)
{

}

Point::Point(float x, float y) : m_x(x), m_y(y)
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

void Point::deplace(float dx, float dy)
{
	m_x = m_x + dx;
	m_y = m_y + dy;
	majpolaire();
}

void Point::homothetie(float cf)
{
	m_x = m_x * cf;
	m_y = m_y * cf;
	majpolaire();
}

void Point::rotation(float deg)
{
	deg = deg * M_PI / 180;
	m_t = m_t + deg;
	majcart();
}

void Point::initialise(float px, float py)
{
	m_x = px;
	m_y = py;
	majpolaire();
}

// accesseurs

float Point::Getx() const
{
	return m_x;
}

void Point::Setx(float val)
{
	m_x = val;
}

float Point::Gety() const
{
	return m_y;
}

void Point::Sety(float val)
{
	m_y = val;
}

float Point::Getr() const
{
	return m_r;
}

void Point::Setr(float val)
{
	m_r = val;
}

float Point::Gett() const
{
	return m_t;
}

void Point::Sett(float val)
{
	m_t = val;
}