#include "Outillage.h"
#include "iostream"

using namespace std;

Outillage::Outillage()
{
    m_id = 0;
    m_nom = "None";
    m_dura = 0;
}

Outillage::Outillage(int id)
{
    m_id = id;
    m_nom = "None";
    m_dura = 0;
}

Outillage::Outillage(int id, string nom)
{
    m_id = id;
    m_nom = nom;
    m_dura = 0;
}

Outillage::Outillage(int id, string nom, int dura)
{
    m_id = id;
    m_nom = nom;
    m_dura = dura;
}

Outillage::~Outillage()
{

}

Outillage::Outillage(const Outillage& other)
{
    m_id = other.m_id;
    m_nom = other.m_nom;
    m_dura = other.m_dura;
}

Outillage& Outillage::operator=(const Outillage& rhs)
{
    if (this == &rhs)
    {
        m_id = rhs.m_id;
        m_nom = rhs.m_nom;
        m_dura = rhs.m_dura;
    }
    return *this;
}

void Outillage::affiche()
{
    cout << "Id : " << m_id << endl;
    cout << "Nom : " << m_nom << endl;
    cout << "Dura : " << m_dura << endl;
}
