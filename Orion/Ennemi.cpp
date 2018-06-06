#include "iostream"
#include "Ennemi.h"
#include "string"

using namespace std;

Ennemi::Ennemi() : Personnage()
{
    m_vie = 50;
    m_arme = new Arme();
}

Ennemi::Ennemi(string nom) : Personnage()
{
    m_vie = 50;
    m_nom = nom;
    m_arme = new Arme();
}

Ennemi::Ennemi(string nom, string nomArme) : Personnage()
{
    m_vie = 50;
    m_nom = nom;
    m_arme = new Arme(nomArme);
}

Ennemi::Ennemi(string nom, string nomArme, int degat) : Personnage()
{
    m_vie = 50;
    m_nom = nom;
    m_arme = new Arme(nomArme, degat);
}

Ennemi::Ennemi(string nom, string nomArme, int degat, int durabilite) : Personnage()
{
    m_vie = 50;
    m_nom = nom;
    m_arme = new Arme(nomArme, degat, durabilite);
}

Ennemi::~Ennemi()
{
    delete(m_arme);
}

Ennemi::Ennemi(const Ennemi& other)
{
    m_arme = new Arme(*(other.m_arme));
}

Ennemi& Ennemi::operator=(const Ennemi& rhs)
{
    if (this == &rhs)
    {
        delete(m_arme);
        m_arme = new Arme(*(rhs.m_arme));
    }
    return *this;
}

void Ennemi::affiche()
{
    Personnage::affiche();
    cout << "Je suis un ennemi." << endl;
    m_arme->affiche();
}
