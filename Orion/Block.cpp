#include "string"
#include "iostream"
#include "Block.h"

using namespace std;

Block::Block() : m_id(0), m_nom("vide"), m_velMinage(0)
{
    m_position = new Coordonnees();
}

Block::Block(int identifiant) : m_id(identifiant), m_nom("vide"), m_velMinage(0)
{
    m_position = new Coordonnees();
}

Block::Block(int identifiant, string nom) : m_id(identifiant), m_nom(nom), m_velMinage(0)
{
    m_position = new Coordonnees();
}

Block::Block(int identifiant, string nom, double velMinage) : m_id(identifiant), m_nom(nom), m_velMinage(velMinage)
{
    m_position = new Coordonnees();
}

Block::Block(int identifiant, string nom, double velMinage, Coordonnees &c) : m_id(identifiant), m_nom(nom), m_velMinage(velMinage)
{
    m_position = new Coordonnees(c);
}

Block::~Block()
{
    delete (m_position);
}

Block::Block(const Block &other)
{
    m_id = other.m_id;
    m_nom = other.m_nom;
    m_velMinage = other.m_velMinage;
    m_position = new Coordonnees(*(other.m_position));
}

Block& Block::operator=(const Block &b)
{
    if (this != &b)
    {
        m_id = b.m_id;
        m_nom = b.m_nom;
        m_velMinage = b.m_velMinage;
        delete (m_position);
        m_position = new Coordonnees(*(b.m_position));
    }
    return *this;
}

void Block::affiche()
{
    cout << "Id du block : " << m_id << endl;
    cout << "Nom du block : " << m_nom << endl;
    cout << "Vitesse de minage : " << m_velMinage << endl;
    m_position->affiche();
}

void Block::deplacer(Coordonnees &e)
{
    delete (m_position);
    m_position = new Coordonnees(e);
}

