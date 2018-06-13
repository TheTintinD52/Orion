#include "Outillage.h"
#include "iostream"

using namespace std;

Outillage::Outillage() : Item(), m_dura(0)
{

}

Outillage::Outillage(int id) : Item(id), m_dura(0)
{

}

Outillage::Outillage(int id, string nom) : Item(id, nom), m_dura(0)
{

}

Outillage::Outillage(int id, string nom, int dura) : Item(id, nom), m_dura(dura)
{

}

Outillage::~Outillage()
{

}

Outillage::Outillage(const Outillage& other) : Item(other), m_dura(other.m_dura)
{

}

Outillage& Outillage::operator=(const Outillage& rhs)
{
    if (this != &rhs)
    {
        Item *mg;
        const Item *md;
        mg = this;
        md = &rhs;
        (*mg) = (*md);
        m_dura = rhs.m_dura;
    }
    return *this;
}

void Outillage::affiche()
{
    Item::affiche();
    cout << "Durabilite outil : " << m_dura << endl;
}
