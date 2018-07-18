#include "iostream"
#include "string"
#include "Objet.h"

using namespace std;

Objet::Objet() : m_id(0), m_nom("None")
{

}

Objet::Objet(int id) : m_id(id), m_nom("None")
{

}

Objet::Objet(int id, string nom) : m_id(id), m_nom(nom)
{

}

Objet::~Objet()
{

}

Objet::Objet(const Objet& other)
{
	m_id = other.m_id;
	m_nom = other.m_nom;
}

Objet&  Objet::operator=(const Objet& other)
{
	if (this != &other)
	{
		m_id = other.m_id;
		m_nom = other.m_nom;
	}
	return *this;
}

bool Objet::operator==(const Objet &i)
{
	if (m_nom == i.m_nom && m_id == i.m_id)
	{
		return true;
	}
	else
		return false;
}

void Objet::affiche()
{
	cout << "L'id de l'objet est de " << m_id << " et son nom est de " << m_nom << "." << endl;
}

void Objet::init()
{
	cout << "Entrez l'id de l'objet : " << endl;
	cin >> m_id;
	cout << "Entrez le nom de l'objet : " << endl;
	cin >> m_nom;
}