#include "Coordonnees.h"

using namespace std;

Coordonnees::Coordonnees() : m_x(0), m_y(0), m_z(0)
{

}

Coordonnees::Coordonnees(int x) : m_x(x), m_y(0), m_z(0)
{

}

Coordonnees::Coordonnees(int x, int y) : m_x(x), m_y(y), m_z(0)
{

}

Coordonnees::Coordonnees(int x, int y, int z) : m_x(x), m_y(y), m_z(z)
{

}

Coordonnees::~Coordonnees()
{

}

Coordonnees::Coordonnees(const Coordonnees& other)
{
	m_x = other.m_x;
	m_y = other.m_y;
	m_z = other.m_z;
}

// operators overloading

Coordonnees& Coordonnees::operator=(const Coordonnees& other)
{
	if (this != &other)
	{
		m_x = other.m_x;
		m_y = other.m_y;
		m_z = other.m_z;
	}
	return *this;
}

// methodes

void Coordonnees::affiche() const
{
	cout << "X = " << m_x << endl;
	cout << "Y = " << m_y << endl;
	cout << "Z = " << m_z << endl;
}

// accesseurs

int Coordonnees::Getx() const
{
	return m_x;
}
void Coordonnees::Setx(int x)
{
	m_x = x;
}
int Coordonnees::Gety() const
{
	return m_y;
}
void Coordonnees::Sety(int y)
{
	m_y = y;
}
int Coordonnees::Getz() const
{
	return m_z;
}
void Coordonnees::Setz(int z)
{
	m_z = z;
}