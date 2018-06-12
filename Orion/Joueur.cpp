#include "Joueur.h"
#include "iostream"
#include "string"

using namespace std;

Joueur::Joueur() : Personnage()
{
    m_faim = 100;
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso) : Personnage()
{
    m_nom = nomPerso;
    m_faim = 100;
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_faim = 100;
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_faim = 100;
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_faim = faim;
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Arme &a) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_faim = faim;
    m_arme = new Arme(a);
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Arme &a, Outil &o) : Personnage()
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_faim = faim;
    m_arme = new Arme(a);
    m_outil = new Outil(o);
}

Joueur::~Joueur()
{
    delete(m_arme);
    delete(m_outil);
}

Joueur::Joueur(const Joueur& other) : Personnage(other)
{
    m_faim = other.m_faim;
    m_arme = new Arme(*(other.m_arme));
    m_outil = new Outil(*(other.m_outil));
}

Joueur& Joueur::operator=(const Joueur& rhs)
{
    if (this != &rhs)
    {
        Joueur *mg;
        const Joueur *md;
        mg = this;
        md = &rhs;
        (*mg) = (*md);
        delete(m_arme);
        delete(m_outil);
        m_faim = rhs.m_faim;
        m_arme = new Arme(*(rhs.m_arme));
        m_outil = new Outil(*(rhs.m_outil));
    }
    return *this;
}

void Joueur::affiche()
{
    Personnage::affiche();
    cout << "Faim max : " << m_faim << endl;
    m_arme->affiche();
    m_outil->affiche();
    cout << "Je suis le personnage du joueur." << endl;
}

void Joueur::changerArme(Arme &a)
{
    delete(m_arme);
    m_arme = new Arme(a);
}

void Joueur::changerOutil(Outil &o)
{
    delete(m_outil);
    m_outil = new Outil(o);
}
