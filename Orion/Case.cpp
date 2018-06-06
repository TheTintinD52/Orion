#include "Case.h"
#include "iostream"
#include "string"

using namespace std;

Case::Case() : m_item(NULL), m_position(NULL)
{

}

Case::Case(int idItem, string nomItem)
{
    m_item = new Item(idItem, nomItem);
    m_position = new Emplacement();
}

Case::Case(int idItem, string nomItem, int x, int y)
{
    m_item = new Item(idItem, nomItem);
    m_position = new Emplacement(x,y);
}

Case::~Case()
{
    delete(m_item);
    delete(m_position);
}

Case::Case(const Case& other)
{

}

Case& Case::operator=(const Case& rhs)
{
    if (this != &rhs)
    {

    }
    return *this;
}

void Case::affiche()
{
    m_item->affiche();
    m_position->affiche();
}
