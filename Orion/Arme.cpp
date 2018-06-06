#include "iostream"
#include "Arme.h"
#include "string"

using namespace std;

Arme::Arme() : m_nom("None"), m_degat(0), m_durabilite(0)
{

}

Arme::Arme(string nom) : m_nom(nom), m_degat(0), m_durabilite(0)
{

}

Arme::Arme(string nom, int degat) : m_nom(nom), m_degat(degat), m_durabilite(0)
{

}

Arme::Arme(string nom, int degat, int durabilite) : m_nom(nom), m_degat(degat), m_durabilite(durabilite)
{

}

Arme::~Arme()
{

}

Arme::Arme(const Arme& other)
{
    m_nom = other.m_nom;
    m_degat = other.m_degat;
    m_degat = other.m_durabilite;
}

Arme& Arme::operator=(const Arme& rhs)
{
    if (this == &rhs)
    {
        m_nom = rhs.m_nom;
        m_degat = rhs.m_degat;
        m_durabilite = rhs.m_durabilite;
    }
    return *this;
}

void Arme::affiche()
{
    cout << "Nom de l'arme : " << m_nom << endl;
    cout << "Degats : " << m_degat << endl;
    cout << "Durabilite : " << m_durabilite << endl;
}
