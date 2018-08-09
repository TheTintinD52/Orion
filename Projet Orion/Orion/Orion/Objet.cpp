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

// operators overloading

Objet&  Objet::operator=(const Objet& other)
{
	if (this != &other)
	{
		m_id = other.m_id;
		m_nom = other.m_nom;
	}
	return *this;
}

bool Objet::operator==(const Objet &item)
{
	if (m_nom == item.m_nom && m_id == item.m_id)
	{
		return true;
	}
	else
		return false;
}

// methodes

void Objet::affiche() const
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

// accesseurs

int Objet::Getid() const
{
	return m_id;
}

void Objet::Setid(int val)
{
	m_id = val;
}

string Objet::Getnom() const
{
	return m_nom;
}

void Objet::Setnom(string val)
{
	m_nom = val;
}