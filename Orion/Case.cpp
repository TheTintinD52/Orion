#include "Case.h"
#include "iostream"
#include "string"

using namespace std;

Case::Case() : m_item(NULL), m_position(NULL)
{

}

Case::Case(Item &i)
{
    m_item = new Item(i);
    m_position = new Coordonnees();
}

Case::Case(Item &i, Coordonnees &e)
{
    m_item = new Item(i);
    m_position = new Coordonnees(e);
}

Case::~Case()
{
    delete(m_item);
    delete(m_position);
}

Case::Case(const Case& other)
{
    m_item = new Item(*(other.m_item));
    m_position = new Coordonnees(*(other.m_position));
}

Case& Case::operator=(const Case& rhs)
{
    if (this != &rhs)
    {
        Case *mg;
        const Case *md;
        mg = this;
        md = &rhs;
        (*mg) = (*md);
        delete(m_item);
        delete(m_position);
        m_item = new Item(*(rhs.m_item));
        m_position = new Coordonnees(*(rhs.m_position));
    }
    return *this;
}

void Case::affiche()
{
    m_item->affiche();
    m_position->affiche();
}
