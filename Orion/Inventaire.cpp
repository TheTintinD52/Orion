#include "Inventaire.h"
#include "iostream"
#include "Item.h"

using namespace std;

Inventaire::Inventaire()
{
    m_tab = new Item[20];
    for (int i = 0; i<20; i++)
    {}
}

Inventaire::~Inventaire()
{
    delete[] m_tab;
}

Inventaire::Inventaire(const Inventaire& other)
{
    m_tab = new Item[20];
    for (int i = 0; i<20; i++)
    {}
}

Inventaire& Inventaire::operator=(const Inventaire& rhs)
{
    if (this != &rhs)
    {

    }
    return *this;
}

void Inventaire::affiche()
{

    int i;

    for (i = 0; i<20; i++)
    {
        m_tab[i].affiche();
    }
}

void Inventaire::init(int nb)
{
    if (nb > 19)
    {

    }
    else if (nb < 0)
    {

    }
    else
    {
        m_tab[nb].init();
    }
}
