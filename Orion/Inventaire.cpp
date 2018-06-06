#include "Inventaire.h"
#include "iostream"

using namespace std;

Inventaire::Inventaire() : m_nbl(0), m_nbc(0), m_tab(NULL)
{

}

Inventaire::Inventaire(int nb)
{
    m_nbl = nb;
    m_nbc = nb;

    m_tab = new Case*[m_nbl];
    for (int i = 0; i<m_nbl; i++)
    {
        m_tab[i] = new Case[m_nbc];
    }
}

Inventaire::~Inventaire()
{
    for (int i = 0; i<m_nbl; i++)
    {
        delete(m_tab[i]);
    }
    delete(m_tab);
}

Inventaire::Inventaire(const Inventaire& other)
{

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
    int i,j;

    for (i = 0; i<m_nbl; i++)
    {
        for (j = 0; j<m_nbc; j++)
        {
            m_tab[i][j].affiche();
        }
        cout << endl;
    }
}
