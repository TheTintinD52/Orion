#include "iostream"
#include "Ennemi.h"
#include "string"

using namespace std;

Ennemi::Ennemi() : Personnage()
{
    m_arme = new Arme();
}

Ennemi::Ennemi(string nomPerso) : Personnage()
{
    m_nom = nomPerso;
    m_arme = new Arme();
}

Ennemi::Ennemi(string nomPerso, int vie) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_arme = new Arme();
}

Ennemi::Ennemi(string nomPerso, int vie, int endu) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_arme = new Arme();
}

Ennemi::Ennemi(string nomPerso, int vie, int endu, Arme &a) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_arme = new Arme(a);
}

Ennemi::Ennemi(const Ennemi& other) : Personnage(other)
{
    m_arme = new Arme(*(other.m_arme));
}

Ennemi::~Ennemi()
{
    delete(m_arme);
}

Ennemi& Ennemi::operator=(const Ennemi& rhs)
{
    if (this != &rhs)
    {
        Ennemi *mg;
        const Ennemi *md;
        mg = this;
        md = &rhs;
        (*mg) = (*md);
        delete(m_arme);
        m_arme = new Arme(*(rhs.m_arme));
    }
    return *this;
}

void Ennemi::affiche()
{
    Personnage::affiche();
    m_arme->affiche();
    cout << "Je suis un ennemi." << endl;
}
