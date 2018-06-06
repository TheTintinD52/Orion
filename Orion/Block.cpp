#include "string"
#include "iostream"
#include "Block.h"
#include "Emplacement.h"

using namespace std;

Block::Block() : m_id(0), m_nom("vide"), m_velMinage(0)
{
    m_emplct = new Emplacement();
}

Block::Block(int identifiant) : m_id(identifiant), m_nom("vide"), m_velMinage(0)
{
    m_emplct = new Emplacement();
}

Block::Block(int identifiant, string nom) : m_id(identifiant), m_nom(nom), m_velMinage(0)
{
    m_emplct = new Emplacement();
}

Block::Block(int identifiant, string nom, double velMinage) : m_id(identifiant), m_nom(nom), m_velMinage(velMinage)
{
    m_emplct = new Emplacement();
}

Block::~Block()
{
    delete (m_emplct);
}

Block::Block(const Block &other)
{
    m_id = other.m_id;
    m_nom = other.m_nom;
    m_velMinage = other.m_velMinage;
    m_emplct = new Emplacement(*(other.m_emplct));
}

Block& Block::operator=(const Block &b)
{
    if (this != &b)
    {
        m_id = b.m_id;
        m_nom = b.m_nom;
        m_velMinage = b.m_velMinage;
        delete (m_emplct);
        m_emplct = new Emplacement(*(b.m_emplct));
    }
    return *this;
}

void Block::affiche()
{
    cout << m_id << endl;
    cout << m_nom << endl;
    cout << m_velMinage << endl;
    m_emplct->affiche();
}

void Block::deplacer(int x, int y, int z)
{
    delete (m_emplct);
    m_emplct = new Emplacement(x,y,z);
}

