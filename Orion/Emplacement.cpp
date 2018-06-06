#include "Emplacement.h"
#include "iostream"

using namespace std;

Emplacement::Emplacement()
{
    m_Coor = new Coordonnees();
}

Emplacement::Emplacement(int x)
{
    m_Coor = new Coordonnees(x);
}

Emplacement::Emplacement(int x, int y)
{
    m_Coor = new Coordonnees(x,y);
}

Emplacement::Emplacement(int x, int y, int z)
{
    m_Coor = new Coordonnees(x,y,z);
}

Emplacement::~Emplacement()
{
    delete (m_Coor);
}

Emplacement::Emplacement(const Emplacement& other)
{
    m_Coor = new Coordonnees(*(other.m_Coor));
}

Emplacement& Emplacement::operator=(const Emplacement& rhs)
{
    if (this != &rhs)
    {
        delete (m_Coor);
        m_Coor = new Coordonnees(*(rhs.m_Coor));
    }
    return *this;
}

void Emplacement::affiche()
{
    m_Coor->affiche();
}
