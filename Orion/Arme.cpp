#include "iostream"
#include "Arme.h"
#include "string"

using namespace std;

Arme::Arme() : Outillage()
{
    m_degat = 0;
}

Arme::Arme(int id) : Outillage()
{
    m_degat = 0;
    m_id = id;
}

Arme::Arme(int id, string nom) : Outillage()
{
    m_degat = 0;
    m_id = id;
    m_nom = nom;
}

Arme::Arme(int id, string nom, int degat) : Outillage()
{
    m_degat = degat;
    m_id = id;
    m_nom = nom;
}

Arme::Arme(int id, string nom, int degat, int dura) : Outillage()
{
    m_degat = degat;
    m_id = id;
    m_nom = nom;
    m_dura = dura;
}

Arme::~Arme()
{

}

Arme::Arme(const Arme& other) : Outillage(other)
{
    m_degat = other.m_degat;
}

Arme& Arme::operator=(const Arme& rhs)
{
    if (this != &rhs)
    {
        m_degat = rhs.m_degat;
    }
    return *this;
}

void Arme::affiche()
{
    cout << "Arme : " << endl;
    Outillage::affiche();
    cout << "Degat arme: " << m_degat << endl;
}
