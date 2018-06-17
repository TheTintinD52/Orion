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

void Inventaire::init(Item &obj)
{
    int j;

    for (int i = 0, j = 0; i<20; i++)
    {
        if (m_tab[i].Getid() == 0 && j != 1)
        {
            m_tab[i] = obj;
            j++;
        }
        else if (m_tab[i].Getid() == 0 && j == 1)
        {

        }
    }
}

void Inventaire::Jeter(Item &obj)
{
    for (int i = 0; i<20; i++)
    {
        if (m_tab[i] == obj)
        {
            m_tab[i].Setid(0);
            m_tab[i].Setnom("None");
        }
    }
}
