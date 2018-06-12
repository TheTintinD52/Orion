#include "Inventaire.h"
#include "iostream"

using namespace std;

Inventaire::Inventaire() : m_nbl(0), m_nbc(0)
{

}

Inventaire::~Inventaire()
{

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
            //m_tab[i][j].affiche();
        }
        cout << endl;
    }
}
