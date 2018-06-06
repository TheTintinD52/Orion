#include "Coordonnees.h"
#include "iostream"

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

Coordonnees& Coordonnees::operator=(const Coordonnees& rhs)
{
    if (this != &rhs)
    {
        m_x = rhs.m_x;
        m_y = rhs.m_y;
        m_z = rhs.m_z;
    }
    return *this;
}

void Coordonnees::affiche()
{
    cout << "X = " << m_x << endl;
    cout << "Y = " << m_y << endl;
    cout << "Z = " << m_z << endl;
}
