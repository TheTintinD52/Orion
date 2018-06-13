#include "Joueur.h"
#include "iostream"
#include "string"

using namespace std;

Joueur::Joueur() : Personnage()
{
    m_faim = 100;
    m_inventaire = new Inventaire();
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(int vie) : Personnage(vie)
{
    m_faim = 100;
    m_inventaire = new Inventaire();
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie) : Personnage(nomPerso, vie)
{
    m_nom = nomPerso;
    m_vie = vie;
    m_faim = 100;
    m_inventaire = new Inventaire();
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu) : Personnage(nomPerso, vie, endu)
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_faim = 100;
    m_inventaire = new Inventaire();
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim) : Personnage(nomPerso, vie, endu)
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_faim = faim;
    m_inventaire = new Inventaire();
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Inventaire &i) : Personnage(nomPerso, vie, endu)
{
    m_nom = nomPerso;
    m_vie = vie;
    m_endurance = endu;
    m_faim = faim;
    m_inventaire = new Inventaire(i);
    m_arme = new Arme();
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Inventaire &i, Arme &a) : Personnage(nomPerso, vie, endu)
{
    m_faim = faim;
    m_inventaire = new Inventaire(i);
    m_arme = new Arme(a);
    m_outil = new Outil();
}

Joueur::Joueur(string nomPerso, int vie, int endu, int faim, Inventaire &i, Arme &a, Outil &o) : Personnage(nomPerso, vie, endu)
{
    m_faim = faim;
    m_inventaire = new Inventaire(i);
    m_arme = new Arme(a);
    m_outil = new Outil(o);
}

Joueur::~Joueur()
{
    delete(m_inventaire);
    delete(m_arme);
    delete(m_outil);
}

Joueur::Joueur(const Joueur& other) : Personnage(other)
{
    m_faim = other.m_faim;
    m_inventaire = new Inventaire(*(other.m_inventaire));
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
        delete(m_inventaire);
        delete(m_arme);
        delete(m_outil);
        m_faim = rhs.m_faim;
        m_inventaire = new Inventaire(*(rhs.m_inventaire));
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

void Joueur::afficheInventaire()
{
    cout << "Inventaire : " << endl;
    m_inventaire->affiche();
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

void Joueur::attaquer(Personnage &cible)
{
    cout << m_nom << " attaque " << cible.Getnom() << "." << endl;

    if (m_arme != NULL)
        cible.recevoirDegats(m_arme->Getdegat());
    else
        cible.recevoirDegats(5);
}
