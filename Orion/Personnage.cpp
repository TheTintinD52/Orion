#include "Personnage.h"
#include "iostream"

using namespace std;

Personnage::Personnage() : m_nom("Error"), m_vie(100), m_endurance(100)
{

}

Personnage::Personnage(int vie) : m_nom("Error"), m_vie(vie), m_endurance(100)
{

}

Personnage::Personnage(string nom, int vie) : m_nom(nom), m_vie(vie), m_endurance(100)
{

}

Personnage::Personnage(string nom, int vie, int endurance) : m_nom(nom), m_vie(vie), m_endurance(endurance)
{

}

Personnage::~Personnage()
{

}

Personnage::Personnage(const Personnage& other)
{
    m_vie = other.m_vie;
    m_nom = other.m_nom;
    m_endurance = other.m_endurance;
}

Personnage& Personnage::operator=(const Personnage& rhs)
{
    if (this != &rhs)
    {
        m_vie = rhs.m_vie;
        m_nom = rhs.m_nom;
        m_endurance = rhs.m_endurance;
    }
    return *this;
}

void Personnage::affiche()
{
    cout << "Nom : " << m_nom << endl;
    cout << "Vie : " << m_vie << endl;
    cout << "Endurance : " << m_endurance << endl;
}

void Personnage::recevoirDegats(int nbDegats)
{
    cout << m_nom << " recoit " << nbDegats << " points de vie en moins." << endl;

    m_vie -= nbDegats;

    if (m_vie <= 0)
        m_vie = 0;
}

void Personnage::boirePotionDeVie(int qtVie)
{
    cout << m_nom << " boit une potion qui lui redonne " << qtVie << " points de vie." << endl;
    m_vie += qtVie;

    if (m_vie > 100)
        m_vie = 100;
}
