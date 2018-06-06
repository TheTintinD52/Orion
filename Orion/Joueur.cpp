#include "Joueur.h"
#include "iostream"
#include "string"

using namespace std;

Joueur::Joueur() : Personnage()
{
    m_faim = 100;
    m_arme = new Arme();
}

Joueur::Joueur(string nom) : Personnage()
{
    m_nom = nom;
    m_faim = 100;
    m_arme = new Arme();
}

Joueur::Joueur(string nom, string nomArme) : Personnage()
{
    m_nom = nom;
    m_faim = 100;
    m_arme = new Arme(nomArme);
}

Joueur::Joueur(string nom, string nomArme, int degat) : Personnage()
{
    m_nom = nom;
    m_faim = 100;
    m_arme = new Arme(nomArme, degat);
}

Joueur::Joueur(string nom, string nomArme, int degat, int durabilite) : Personnage()
{
    m_nom = nom;
    m_faim = 100;
    m_arme = new Arme(nomArme, degat, durabilite);
}

Joueur::~Joueur()
{
    delete(m_arme);
}

Joueur::Joueur(const Joueur& other)
{
    m_faim = other.m_faim;
    m_arme = new Arme(*(other.m_arme));
}

Joueur& Joueur::operator=(const Joueur& rhs)//Pas bon !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
{
    if (this != &rhs)
    {
        delete(m_arme);
        m_faim = rhs.m_faim;
        m_arme = new Arme(*(rhs.m_arme));
    }
    return *this;
}

void Joueur::affiche()
{
    Personnage::affiche();
    cout << "Faim : " << m_faim << endl;
    cout << "Je suis le personnage du joueur." << endl;
    m_arme->affiche();
}

void Joueur::changerArme(Arme &a)
{
    delete(m_arme);
    m_arme = new Arme(a);
}
