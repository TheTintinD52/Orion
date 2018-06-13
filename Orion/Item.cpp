#include "string"
#include "iostream"
#include "Item.h"

using namespace std;

Item::Item() : m_id(0), m_nom("None")
{

}

Item::Item(int id) : m_id(id), m_nom("None")
{

}

Item::Item(string nom) : m_id(0), m_nom(nom)
{

}

Item::Item(int id, string nom) : m_id(id), m_nom(nom)
{

}

Item::~Item()
{

}

Item::Item(const Item& other)
{
    m_id = other.m_id;
    m_nom = other.m_nom;
}

Item& Item::operator=(const Item &i)
{
    if (this != &i)
    {
        m_id = i.m_id;
        m_nom = i.m_nom;
    }
    return *this;
}

void Item::affiche()
{
    cout << "Id objet : " << m_id << "    Nom de l'objet : " << m_nom << endl;
}

void Item::init()
{
    cout << "Entrez l'id de l'objet : " << endl;
    cin >> m_id;
    cout << "Entrez le nom de l'objet : " << endl;
    cin >> m_nom;
}
